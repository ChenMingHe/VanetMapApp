#ifndef INTERPRETERINTERFACE_H
#define INTERPRETERINTERFACE_H

/**
  @file InterpreterInterface.h
  @brief �������ӿڣ������µ���Ϣ����������Ҫ�̳иýӿ�
  @author mingheuestc@gmail.com
  @version 1.0
  @date 2013.05
*/

#include <QByteArray>
#include <QStringList>
#include <QSharedPointer>

namespace Interpreter {
/**
  @interface �������ӿ�
*/
class InterpreterInterface {
public :
    /**
      @arg msg : ��Ҫ���͵���Ϣ����
      @return �Ƿ�ɹ����Ͳ��������û���Ϣ���ݿ�
    */
    virtual bool explain(const QByteArray &msg) = 0;
};
}

#endif // INTERPRETERINTERFACE_H
