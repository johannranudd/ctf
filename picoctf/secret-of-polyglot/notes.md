## classic PDF internals:

obj

stream

endobj

xref

trailer

%%EOF


## standard PNG chunk names:

PNG → PNG file signature

IHDR → Image header

IDAT → Image data

IEND → End of PNG


# clue:
PNG readers stop reading at IEND

PDF readers start reading at %PDF-


# PNG part:

�PNG
␦
IHDR2?���iCCPICC profile(�}�=H�@�_S��;f�bAT�Q�P�
�Vh����/hҐ��8
�?�.κ:�
�������������"փ�~�����"Ӭ�q@�m3����xE�bC2��9I��������w���ܟ�[�X
��M��ObyY%>'3�ď\W<~�sY�!3��'��&V���M�x�8�j:�                 �ĳ�0m�
                                            )�U�[��b����_��+�\�9��      "�Q@6"��XH�~����K�R�U#�J� �~�?�ݭ����Q���q>���.P�8�����N�3p�7��*0�Iz������m�⺡){����dȦ�J~�B6
                               ���7���[�s�뭾�� I]�o��C`$G��-����ۿg���r�r���b�   pHYs.#.#x�?vtIME�
                                                                                                 9�O��tEXtCommentCreated with GIMPW�{IDATh��YA���LO&�"�b��n�CW�
                           0Z@DL<E3     RJ)ya��"���% ;@��@��w�}�� ��/u␦Z��[�����(���u�^��^�Fqc��w�␦5�4ײ� o.�␦�Nv�f�\i�'���TvI~�
�Z��]��)ZFd{B�f25����L1��^Y��=j{��2v�bV`���V�9y�::nM/�\�����Z⽢iܡ"�<�3"RJE���%v48�K�_s�������=�E8ő�5�$r���a����h���cz�������D   ����@���␦��f�IEND


Make into flag.png

picoCTF{f1u3n7_1n_pn9_&_pdf_7f9bccd1}