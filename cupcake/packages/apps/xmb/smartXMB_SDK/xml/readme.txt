1. ����cmd �ն�
2. ����SDK/tools Ŀ¼
3. ��adb push ��� workspace/smartXMB/xml/applist.xml push�� /data Ŀ¼
   adb push <local path> <des path>
   �����toolsĿ¼��λ workspace/smartXMB/xml/applist.xml �Ƚ��鷳�� �����Ƚ�applist.xml������/toolsĿ¼��
   ���� adb push ./applist.xml /data ���ɡ�
4  ����3����workspace/smartXMB/xml/layout.xml push��/dataĿ¼��
5  applist_1.xml layout_1.xml��ʹ���벻��_1���ļ���ͬ��ֻ��������ʽ��xmb��push��dataĿ¼ǰҪrename��applist.xml ��layout.xml��
6  ����workspace/smartXMB/res/drawable��SDK/tools�� �������
   adb push drawable /data 
 push ����ͼƬ��dataĿ¼