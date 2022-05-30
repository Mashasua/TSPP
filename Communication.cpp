#include <iostream>
#include <list>
#include <algorithm> 
#include "Communication.h"

Commentary::Commentary(std::string Comment, int rate)
{
    this->Text = Comment;
    this->rating = rate;
}

std::string Commentary::getCommentary()
{
    return this->Text;
}

void Commentary::setCommentary(std::string Comment)
{
    this->Text = Comment;
}

int Commentary::getRating()
{
    return this->rating;
}

void Commentary::setRating(int rating)
{
    this->rating = rating;
}

Question::Question(std::string Quest)
{
    this->Text = Quest;
}

std::list<std::string> Question::getAnswers()
{
    return this->Answers;
}

void Question::addAnswer(std::string Answer)
{
    this->Answers.push_back(Answer);
}

std::string Question::getQuestion()
{
    return this->Text;
}

void Question::setQuestion(std::string Question)//need for editing question
{
    this->Text = Question;
}