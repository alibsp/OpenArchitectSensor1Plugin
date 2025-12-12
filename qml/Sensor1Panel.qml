import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Layouts 1.14

Rectangle {
    width: 250
    height: 150
    color: "#333"
    radius: 6
    border.color: "white"

    // ===== Title Bar =====
    Rectangle {
        id: titleBar
        width: parent.width
        height: 25
        color: "#222"
        border.color: "lightgreen"
        border.width: 1
        radius: 6

        Text {
            anchors.centerIn: parent
            text: "Sensor1 Plugin Panel"
            color: "lightgreen"
            font.bold: true
        }
    }

    // ===== Panel Content =====
    ColumnLayout {
        anchors {
            top: titleBar.bottom
            left: parent.left
            right: parent.right
            bottom: parent.bottom
            margins: 6
        }
        spacing: 10

        Button {
            text: "Click"
            Layout.alignment: Qt.AlignHCenter
            onClicked: sensor1Plugin.doSomething("Button clicked!")
        }

    }
}
