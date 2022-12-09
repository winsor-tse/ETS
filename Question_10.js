<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
body {font-family: Arial, Helvetica, sans-serif;}
* {box-sizing: border-box;}

input[type=text], select, textarea {
  width: 100%;
  padding: 12px;
  border: 1px solid #ccc;
  border-radius: 4px;
  box-sizing: border-box;
  margin-top: 6px;
  margin-bottom: 16px;
  resize: vertical;
}

input[type=submit] {
  background-color: #04AA6D;
  color: white;
  padding: 12px 20px;
  border: none;
  border-radius: 4px;
  cursor: pointer;
}

input[type=submit]:hover {
  background-color: #45a049;
}

.container {
  border-radius: 5px;
  background-color: #f2f2f2;
  padding: 20px;
}
</style>
</head>
<body>

<h3>User Entry</h3>

<div class="container">
  <form action="/action_page.php">
    <label for="fname">User name</label>
    <input type="text" id="fname" name="firstname" placeholder="Your name..">

    <label for="lname">Address</label>
    <input type="text" id="lname" name="lastname" placeholder="adress">
    
    <label for="lname">Phone Number</label>
    <input type="text" id="lname" name="lastname" placeholder="phone number..">
    
    
    <label for="lname">fax number</label>
    <input type="text" id="lname" name="lastname" placeholder="fax name..">
    
    <label for="lname">e-mail adress</label>
    <input type="text" id="lname" name="lastname" placeholder="email..">
    
    <label for="lname">Manufacturer</label>
    <input type="text" id="lname" name="lastname" placeholder="Manufacturer..">
    
    <label for="lname">model</label>
    <input type="text" id="lname" name="lastname" placeholder="model..">
    
    <label for="lname">serial number</label>
    <input type="text" id="lname" name="lastname" placeholder="serial number..">
    
    <label for="lname">Company name</label>
    <input type="text" id="lname" name="lastname" placeholder="company name..">
    
     <label for="lname">Web address</label>
    <input type="text" id="lname" name="lastname" placeholder="Web address..">
    
    
	
    <label for="field">Field</label>
    <select id="field" name="field">
      <option value="one">Field 1</option>
      <option value="two">Field 2</option>
      <option value="three">Field 3</option>
      <option value="one">Field 4</option>
      <option value="two">Field 5</option>
    </select>
    
    
    <input type="submit" value="Submit">
  </form>
</div>

</body>
</html>
