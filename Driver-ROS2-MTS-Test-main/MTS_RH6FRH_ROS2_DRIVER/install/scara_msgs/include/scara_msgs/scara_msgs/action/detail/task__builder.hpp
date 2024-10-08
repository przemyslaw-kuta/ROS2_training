// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scara_msgs:action/Task.idl
// generated code does not contain a copyright notice

#ifndef SCARA_MSGS__ACTION__DETAIL__TASK__BUILDER_HPP_
#define SCARA_MSGS__ACTION__DETAIL__TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scara_msgs/action/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_Goal_task_number
{
public:
  Init_Task_Goal_task_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scara_msgs::action::Task_Goal task_number(::scara_msgs::action::Task_Goal::_task_number_type arg)
  {
    msg_.task_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_Goal>()
{
  return scara_msgs::action::builder::Init_Task_Goal_task_number();
}

}  // namespace scara_msgs


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_Result_success
{
public:
  Init_Task_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scara_msgs::action::Task_Result success(::scara_msgs::action::Task_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_Result>()
{
  return scara_msgs::action::builder::Init_Task_Result_success();
}

}  // namespace scara_msgs


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_Feedback_percentage
{
public:
  Init_Task_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scara_msgs::action::Task_Feedback percentage(::scara_msgs::action::Task_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_Feedback>()
{
  return scara_msgs::action::builder::Init_Task_Feedback_percentage();
}

}  // namespace scara_msgs


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_SendGoal_Request_goal
{
public:
  explicit Init_Task_SendGoal_Request_goal(::scara_msgs::action::Task_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::scara_msgs::action::Task_SendGoal_Request goal(::scara_msgs::action::Task_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_SendGoal_Request msg_;
};

class Init_Task_SendGoal_Request_goal_id
{
public:
  Init_Task_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_SendGoal_Request_goal goal_id(::scara_msgs::action::Task_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Task_SendGoal_Request_goal(msg_);
  }

private:
  ::scara_msgs::action::Task_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_SendGoal_Request>()
{
  return scara_msgs::action::builder::Init_Task_SendGoal_Request_goal_id();
}

}  // namespace scara_msgs


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_SendGoal_Response_stamp
{
public:
  explicit Init_Task_SendGoal_Response_stamp(::scara_msgs::action::Task_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::scara_msgs::action::Task_SendGoal_Response stamp(::scara_msgs::action::Task_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_SendGoal_Response msg_;
};

class Init_Task_SendGoal_Response_accepted
{
public:
  Init_Task_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_SendGoal_Response_stamp accepted(::scara_msgs::action::Task_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Task_SendGoal_Response_stamp(msg_);
  }

private:
  ::scara_msgs::action::Task_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_SendGoal_Response>()
{
  return scara_msgs::action::builder::Init_Task_SendGoal_Response_accepted();
}

}  // namespace scara_msgs


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_GetResult_Request_goal_id
{
public:
  Init_Task_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scara_msgs::action::Task_GetResult_Request goal_id(::scara_msgs::action::Task_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_GetResult_Request>()
{
  return scara_msgs::action::builder::Init_Task_GetResult_Request_goal_id();
}

}  // namespace scara_msgs


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_GetResult_Response_result
{
public:
  explicit Init_Task_GetResult_Response_result(::scara_msgs::action::Task_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::scara_msgs::action::Task_GetResult_Response result(::scara_msgs::action::Task_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_GetResult_Response msg_;
};

class Init_Task_GetResult_Response_status
{
public:
  Init_Task_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_GetResult_Response_result status(::scara_msgs::action::Task_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Task_GetResult_Response_result(msg_);
  }

private:
  ::scara_msgs::action::Task_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_GetResult_Response>()
{
  return scara_msgs::action::builder::Init_Task_GetResult_Response_status();
}

}  // namespace scara_msgs


namespace scara_msgs
{

namespace action
{

namespace builder
{

class Init_Task_FeedbackMessage_feedback
{
public:
  explicit Init_Task_FeedbackMessage_feedback(::scara_msgs::action::Task_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::scara_msgs::action::Task_FeedbackMessage feedback(::scara_msgs::action::Task_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_msgs::action::Task_FeedbackMessage msg_;
};

class Init_Task_FeedbackMessage_goal_id
{
public:
  Init_Task_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_FeedbackMessage_feedback goal_id(::scara_msgs::action::Task_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Task_FeedbackMessage_feedback(msg_);
  }

private:
  ::scara_msgs::action::Task_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_msgs::action::Task_FeedbackMessage>()
{
  return scara_msgs::action::builder::Init_Task_FeedbackMessage_goal_id();
}

}  // namespace scara_msgs

#endif  // SCARA_MSGS__ACTION__DETAIL__TASK__BUILDER_HPP_
