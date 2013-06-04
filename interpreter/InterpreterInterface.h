#ifndef INTERPRETERINTERFACE_H
#define INTERPRETERINTERFACE_H

/**
  @file InterpreterInterface.h
  @brief 解释器接口，所有新的消息解释器都需要继承该接口
  @author mingheuestc@gmail.com
  @version 1.0
  @date 2013.05
*/

#include <QByteArray>
#include <QStringList>
#include <QSharedPointer>

namespace Interpreter {
/**
  @interface 解释器接口
*/
class InterpreterInterface {
public :
    /**
      @arg msg : 需要解释的信息数据
      @return 是否成功解释并更新了用户信息数据库
    */
    virtual bool explain(const QByteArray &msg) = 0;
};
}

#endif // INTERPRETERINTERFACE_H
