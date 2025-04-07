#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47b410);
CLANG_FORWARD_PROC_SYMBOL(public_47d2f0);
CLANG_FORWARD_PROC_SYMBOL(public_47f240);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_586b70);

#define public_47b810 _public_47b810
#define public_47b81a _public_47b81a
#define public_47b823 _public_47b823
#define public_47b83b _public_47b83b
#define public_47b856 _public_47b856
#define public_47b86b _public_47b86b
#define public_47b8fc _public_47b8fc
#define public_47b90d _public_47b90d
#define public_47ba45 _public_47ba45
#define public_47ba87 _public_47ba87

PROC_DECLARE(0x47b410, internal_47b410, public_47b410);
extern "C" NAKED register_t __cdecl internal_47b410()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov byte ptr ds : [esi+0x4E7], 0
        call dword ptr ds : [eax+0xB4]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d13bc @0x47b427*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13bc
        mov ecx, esi
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x3D0], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1558 @0x47b43c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1558
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d18a0 @0x47b44b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d18a0
        mov ecx, esi
        mov dword ptr ds : [esi+0x3B4], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x3E8], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1894 @0x47b466*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1894
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1888 @0x47b475*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1888
        mov ecx, esi
        mov dword ptr ds : [esi+0x3EC], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x3F0], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d187c @0x47b490*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d187c
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1870 @0x47b49f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1870
        mov ecx, esi
        mov dword ptr ds : [esi+0x3F4], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x3F8], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1864 @0x47b4ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1864
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1858 @0x47b4c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1858
        mov ecx, esi
        mov dword ptr ds : [esi+0x3FC], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x400], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d184c @0x47b4e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d184c
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1840 @0x47b4f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1840
        mov ecx, esi
        mov dword ptr ds : [esi+0x404], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x408], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1834 @0x47b50e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1834
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1828 @0x47b51d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1828
        mov ecx, esi
        mov dword ptr ds : [esi+0x40C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x410], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d181c @0x47b538*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d181c
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x414], eax
/*FIXUP push offset public_5d1810 @0x47b54d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1810
        mov ecx, esi
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x418], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1804 @0x47b562*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1804
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d17f8 @0x47b571*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d17f8
        mov ecx, esi
        mov dword ptr ds : [esi+0x41C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x420], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d17e8 @0x47b58c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d17e8
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d17d8 @0x47b59b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d17d8
        mov ecx, esi
        mov dword ptr ds : [esi+0x424], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x428], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d17c8 @0x47b5b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d17c8
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d17b8 @0x47b5c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d17b8
        mov ecx, esi
        mov dword ptr ds : [esi+0x42C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x430], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d17a8 @0x47b5e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d17a8
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d179c @0x47b5ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d179c
        mov ecx, esi
        mov dword ptr ds : [esi+0x434], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x438], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1790 @0x47b60a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1790
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1784 @0x47b619*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1784
        mov ecx, esi
        mov dword ptr ds : [esi+0x43C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x440], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1778 @0x47b634*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1778
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d176c @0x47b643*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d176c
        mov ecx, esi
        mov dword ptr ds : [esi+0x444], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x448], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1760 @0x47b65e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1760
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1754 @0x47b66d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1754
        mov ecx, esi
        mov dword ptr ds : [esi+0x44C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x450], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1748 @0x47b688*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1748
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d173c @0x47b697*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d173c
        mov ecx, esi
        mov dword ptr ds : [esi+0x454], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x458], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1730 @0x47b6b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1730
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1720 @0x47b6c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1720
        mov ecx, esi
        mov dword ptr ds : [esi+0x45C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x460], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1710 @0x47b6dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1710
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1700 @0x47b6eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1700
        mov ecx, esi
        mov dword ptr ds : [esi+0x464], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x468], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d16f0 @0x47b706*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d16f0
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d16e0 @0x47b715*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d16e0
        mov ecx, esi
        mov dword ptr ds : [esi+0x46C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x470], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d16d4 @0x47b730*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d16d4
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d16c8 @0x47b73f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d16c8
        mov ecx, esi
        mov dword ptr ds : [esi+0x474], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x478], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d16bc @0x47b75a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d16bc
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d16b0 @0x47b769*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d16b0
        mov ecx, esi
        mov dword ptr ds : [esi+0x47C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x480], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d16a4 @0x47b784*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d16a4
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1694 @0x47b793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1694
        mov ecx, esi
        mov dword ptr ds : [esi+0x484], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x488], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1684 @0x47b7ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1684
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1674 @0x47b7bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1674
        mov ecx, esi
        mov dword ptr ds : [esi+0x48C], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x490], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1664 @0x47b7d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1664
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1654 @0x47b7e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1654
        mov ecx, esi
        mov dword ptr ds : [esi+0x494], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x498], eax
        lea edi, ds:[esi+0x49C]
        mov ebp, 5
        mov ebx, 0x64
        public_47b810 : nop
        mov eax, dword ptr ds : [edi-0x3C]
        test eax, eax
        je public_47b81a
        mov dword ptr ds : [eax+0x74], ebx
        public_47b81a : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_47b823
        mov dword ptr ds : [eax+0x74], ebx
        public_47b823 : nop
        mov ecx, dword ptr ds : [edi-0x28]
        test ecx, ecx
        je public_47b83b
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x10000
        push 0x19
        call dword ptr ds : [eax+0xA8]
        public_47b83b : nop
        mov eax, dword ptr ds : [edi-0x14]
        test eax, eax
        je public_47b856
        push 0
        mov dword ptr ds : [eax+0x74], ebx
        mov ecx, dword ptr ds : [edi-0x14]
        mov edx, dword ptr ds : [ecx]
        push 1
        push 0x34
        call dword ptr ds : [edx+0xA8]
        public_47b856 : nop
        mov ecx, dword ptr ds : [edi-0x64]
        test ecx, ecx
        je public_47b86b
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x35
        call dword ptr ds : [eax+0xA8]
        public_47b86b : nop
        add edi, 4
        dec ebp
        jne public_47b810
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1640 @0x47b873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1640
        mov ecx, esi
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x4B4], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1630 @0x47b888*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1630
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d13d8 @0x47b897*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13d8
        mov ecx, esi
        mov dword ptr ds : [esi+0x4B8], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x4BC], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1620 @0x47b8b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1620
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1610 @0x47b8c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1610
        mov ecx, esi
        mov dword ptr ds : [esi+0x4C0], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x4C4], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1600 @0x47b8dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1600
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov dword ptr ds : [esi+0x4C8], eax
        mov eax, dword ptr ds : [esi+0x4C0]
        test eax, eax
        je public_47b8fc
        mov dword ptr ds : [eax+0x74], ebx
        public_47b8fc : nop
        mov eax, dword ptr ds : [esi+0x4C4]
        test eax, eax
        je public_47b90d
        and byte ptr ds : [eax+0x518], 0x7F
        public_47b90d : nop
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1360 @0x47b90f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1360
        mov ecx, esi
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x3D4], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d12a0 @0x47b924*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d12a0
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d12e0 @0x47b933*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d12e0
        mov ecx, esi
        mov dword ptr ds : [esi+0x3D8], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x3DC], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d1258 @0x47b94e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1258
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1328 @0x47b95d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1328
        mov ecx, esi
        mov dword ptr ds : [esi+0x3E0], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x3E4], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d10d4 @0x47b978*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d10d4
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d15f0 @0x47b987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d15f0
        mov ecx, esi
        mov dword ptr ds : [esi+0x344], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x340], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d15dc @0x47b9a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d15dc
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d15cc @0x47b9b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d15cc
        mov ecx, esi
        mov dword ptr ds : [esi+0x338], eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x334], eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_5d15bc @0x47b9cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d15bc
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1134 @0x47b9db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1134
        mov ecx, esi
        mov dword ptr ds : [esi+0x33C], eax
        lea edi, ds:[esi+0x330]
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [public_671ce4]
        push 1
        push eax
        mov ecx, esi
        call public_47f240
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1090 @0x47ba07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1090
        mov ecx, esi
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x4B0], eax
        call public_4c3e10
        push 1
        mov dword ptr ds : [esi+0x348], eax
        call public_4c4060
        push eax
        mov ecx, edi
        call public_4c62b0
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        jne public_47ba45
        mov ecx, dword ptr ds : [edi]
        call public_586b70
        public_47ba45 : nop
        push 1
        push 0
        lea eax, ds:[esi+0x34C]
        push eax
        mov ecx, esi
        call public_47d2f0
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_5d1564 @0x47ba59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1564
        mov ecx, esi
        call dword ptr ds : [edx+0x94]
        mov dword ptr ds : [esi+0x384], eax
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        jne public_47ba87
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        jne public_47ba87
        mov byte ptr ds : [esi+0x4E0], 1
        public_47ba87 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x47b410)
    }
}

#undef public_47b810
#undef public_47b81a
#undef public_47b823
#undef public_47b83b
#undef public_47b856
#undef public_47b86b
#undef public_47b8fc
#undef public_47b90d
#undef public_47ba45
#undef public_47ba87
