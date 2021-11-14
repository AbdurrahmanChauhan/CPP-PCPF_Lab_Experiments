<!-- <?php
$firstName = $_POST['firstName'];
slastName = $_POST['lastName'];
Sgender = $_POST['gender'];
Semail = $_POST['email'];
Spassword = $_POST['password'];
Snumber = $_POST['number'];
// Database connection
Sconn = new mysqli('localhost','root',",'test');
if($conn->connect_error){
echo "Sconn->connect_error";
die("Connection Failed: ".$conn->connect_error);
} else {
$stmt = $conn->prepare("insert into registration(firstName, lastName, gender, email, password, number) values(?, ?, ?, ?, ?, ?)");
$stmt->bind_param("sssssi", $firstName, $lastName, $gender, $email, $password, $number); $execval= $stmt->execute(); echo Sexecval; echo "Registration successfully...";
$stmt->close();
$conn->close();
}
?> -->
