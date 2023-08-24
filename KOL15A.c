class TreeNode {
    constructor(val, left = null, right = null) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

function invertTree(root) {
    if (root === null) {
        return null;
    }

    // Swap the left and right subtrees
    const temp = root.left;
    root.left = root.right;
    root.right = temp;

    // Invert the left and right subtrees recursively
    invertTree(root.left);
    invertTree(root.right);

    return root;
}
