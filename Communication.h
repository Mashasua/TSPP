#ifndef COMMUNICATION_H
#define COMMUNICATION_H
#pragma once
#include <iostream>
#include <list>
#include <algorithm> 

class Question
{
    std::string Text;
    std::list<std::string> Answers;

public:

    Question(std::string Quest);

    std::list<std::string> getAnswers();

    void addAnswer(std::string Answer);

    std::string getQuestion();

    void setQuestion(std::string Question);//need for editing question
};

class Commentary
{
    std::string Text;
    int rating;

public:

    Commentary(std::string Comment, int rate);

    std::string getCommentary();

    void setCommentary(std::string Comment);

    int getRating();

    void setRating(int rating);
};

#endif