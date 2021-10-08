#include <hash_map>
#include <list>
#include <string>
#include <regex>
using namespace std;

class LexicalHashToken {
private:
    hash_map<string, int> LexicalHashMap;
    /**
     * TODO ��ʼ���ʷ��Ǻű�
     */
    LexicalHashToken();
public:
    /**
     * TODO ��ôʷ��Ǻű�
     * @return �ʷ��Ǻű�LexicalTokenMap
     */
    hash_map<string, int> getLexicalHashMap();

    /**
     * TODO ���ݸ����Ĵʷ���Ԫ�����ض�Ӧ�Ĵʷ��Ǻ�
     * @param word �ʷ���Ԫ
     * @return �ʷ��Ǻ�token
     */
    int getToken(string word);

    /**
     * TODO �ж�һ����ʶ���Ƿ�Ϊ�ؼ���
     * @param word ��ʶ��
     * @return booleanֵ
     */
    static bool isKeyWord(string word);
};


class ReadSources {
private:
    list<string> CodeList;  // ÿһ���ڵ�Ϊһ�д��������

    /**
     * TODO ��ȡ������Դ�����ļ���������ÿһ����Ϊһ�������һ���ڵ�
     * @param fileName Դ�����ļ�·��
     * @throws IOException
     */
    ReadSources(string fileName);

public:
    /**
     * TODO ���Դ�����ļ����ɵ�����
     * @return Դ�����ļ���Ӧ������
     */
    list<string> getCodeList();
};

class LexicalAnalysis {
    /**
     *
     * @param srcCode һ�д���
     */
public:
    void getWordMap(string srcCode);
    static string getCharType(string str);
    void printWordMap(string fileName);
    static void main(string args[]);
};
