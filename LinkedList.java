import java.util.Scanner;

public class LinkedList{
    static Scanner sc = new Scanner(System.in);

    static class Node{
        int data;
        Node next;

        Node(int data){
            this.data = data;
            next = null;
        }
    }
    static void printLL(Node head){
        Node temp = head;
        while(temp != null){
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    static int calculateLength(Node head){
        Node temp = head;
        int counter = 0;
        while(temp != null){
            counter++;
            temp = temp.next;
        }
        return counter;
    }

    static Node takeInput(){
        int data;
        System.out.println("Enter data: ");
        data = sc.nextInt();
        Node head = null;
        while(data != -1){
            Node newNode = new Node(data);
            if(head == null){
                head = newNode;
            }else{
                // fig out the address of last node
                Node temp = head;
                while(temp.next != null){
                    temp = temp.next;
                }
                temp.next = newNode;
            }
            System.out.println("Enter data again: ");
            data = sc.nextInt();
        }

        return head;
    }
    public static void main(String[] args) {
        // Node n1 = new Node(10);
        // Node n2 = new Node(20);
        // Node n3 = new Node(30);
        // Node n4 = new Node(40);

        // n1.next = n2;
        // n2.next = n3;
        // n3.next = n4;

        //Node head = n1;
        //System.out.println("Printing head's data:");
        // System.out.println(head.data); // printing head's data

        // print n2 data using n1
        // System.out.println("n2 data using n1: ");
        // System.out.println(n1.next.data);

        // printLL(head);

        // int length = calculateLength(head);
        // System.out.println("length of linked list is: " + length);

        Node updatedHead = takeInput();
        printLL(updatedHead);

    }
}
