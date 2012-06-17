import bb.cascades 1.0
import "org/mydomain" as MyComponents

Page {
    content: Container {
        // This is a 'Cascades label'
        Label {
            text: "Hello Cascades Label"
        }

        // This is a 'MyComponents label'
        MyComponents.Label {
            text: "Hello MyComponents Label"
        }
    }
}
