public class BST {
    private BSTNode root;

    public BST() {
        root = null;
    }

    public void insert(int key) {
        root = insertRec(root, key);
    }

    private BSTNode insertRec(BSTNode root, int key) {
        if (root == null) {
            root = new BSTNode(key);
            return root;
        }

        if (key < root.data) {
            root.left = insertRec(root.left, key);
        }

        else if (key > root.data) {
            root.right = insertRec(root.right, key);
        }
        return root;
    }

    public void inorder() {
        inorder(root);
    }

    private void inorder(BSTNode root) {
        if (root != null) {
            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }
    }
}
