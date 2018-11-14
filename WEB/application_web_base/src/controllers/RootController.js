import express from "express";
const router = express.Router();

router.get("/", (req, res) => {
  res.render("index", { pizzas: [{ name: "test" }, { name: "test2" }] });
});

router.post("/", (req, res) => {
  const { firstname, lastname } = req.body;
  res.render("hello", { firstname, lastname });
});

export default router;
