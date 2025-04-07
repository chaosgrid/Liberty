#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62739f0);
CLANG_FORWARD_PROC_SYMBOL(public_6275490);
CLANG_FORWARD_PROC_SYMBOL(public_6275860);
CLANG_FORWARD_PROC_SYMBOL(public_6275aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62761c0);
CLANG_FORWARD_PROC_SYMBOL(public_6276540);
CLANG_FORWARD_PROC_SYMBOL(public_6276730);
CLANG_FORWARD_PROC_SYMBOL(public_62769d0);
CLANG_FORWARD_PROC_SYMBOL(public_6276c00);
CLANG_FORWARD_PROC_SYMBOL(public_6276df0);
CLANG_FORWARD_PROC_SYMBOL(public_62770a0);
CLANG_FORWARD_PROC_SYMBOL(public_6279e20);
CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6392afe);

#define public_6277128 _public_6277128
#define public_6277198 _public_6277198
#define public_6277209 _public_6277209
#define public_6277232 _public_6277232
#define public_627725b _public_627725b
#define public_6277299 _public_6277299
#define public_62772d8 _public_62772d8
#define public_6277317 _public_6277317
#define public_6277336 _public_6277336
#define public_6277355 _public_6277355
#define public_627737e _public_627737e
#define public_62773b6 _public_62773b6
#define public_62773b8 _public_62773b8
#define public_62773f0 _public_62773f0
#define public_6277440 _public_6277440
#define public_627744f _public_627744f
#define public_6277454 _public_6277454
#define public_6277469 _public_6277469
#define public_62774a8 _public_62774a8
#define public_62774e7 _public_62774e7
#define public_627750b _public_627750b
#define public_6277534 _public_6277534
#define public_627755d _public_627755d
#define public_6277586 _public_6277586
#define public_62775c5 _public_62775c5
#define public_6277601 _public_6277601
#define public_6277625 _public_6277625
#define public_6277636 _public_6277636
#define public_6277645 _public_6277645
#define public_6277659 _public_6277659
#define public_6277665 _public_6277665
#define public_62776a5 _public_62776a5
#define public_62776f2 _public_62776f2
#define public_6277733 _public_6277733
#define public_6277744 _public_6277744
#define public_6277757 _public_6277757
#define public_6277759 _public_6277759
#define public_627777c _public_627777c
#define public_62777a1 _public_62777a1
#define public_62777aa _public_62777aa
#define public_627781b _public_627781b
#define public_6277828 _public_6277828
#define public_627786f _public_627786f
#define public_62778a8 _public_62778a8
#define public_62778b9 _public_62778b9
#define public_62778d1 _public_62778d1
#define public_62778fb _public_62778fb
#define public_6277933 _public_6277933
#define public_627793c _public_627793c

PROC_DECLARE(0x62770a0, internal_62770a0, public_62770a0);
extern "C" NAKED register_t __cdecl internal_62770a0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6392afe @0x62770a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392afe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1670
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_639905c]
        mov edx, dword ptr ss : [esp+0x1680]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6302df0
        add esp, 0xC
        lea ecx, ss:[esp+0x118]
        call public_630f660
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x1690], 0
        call public_630f9b0
        test al, al
        je public_6277665
        lea ecx, ss:[esp+0x118]
        call public_6310070
        test al, al
        je public_6277659
/*FIXUP public_6277128 : nop
        push offset public_63995c0 @0x6277128*/
  FIXUP public_6277128 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63995c0
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        jne public_6277636
/*FIXUP push offset public_639afdc @0x6277141*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639afdc
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        jne public_6277636
/*FIXUP push offset public_639afd4 @0x627715a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639afd4
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277198
        lea edx, ss:[esp+0x14]
        push edx
        push 0x7FE
/*FIXUP push offset public_639a188 @0x6277179*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639afa4 @0x6277183*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639afa4
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_6277198 : nop
        push offset public_639af98 @0x6277198*/
  FIXUP public_6277198 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af98
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        jne public_6277625
/*FIXUP push offset public_639af90 @0x62771b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af90
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        jne public_6277625
/*FIXUP push offset public_639af8c @0x62771ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af8c
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277209
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x807
/*FIXUP push offset public_639a188 @0x62771ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639af38 @0x62771f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af38
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_6277209 : nop
        push offset public_639af2c @0x6277209*/
  FIXUP public_6277209 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af2c
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277232
        lea eax, ss:[esp+0x118]
        push eax
        mov ecx, ebx
        call public_6275aa0
        jmp public_6277645
/*FIXUP public_6277232 : nop
        push offset public_639af18 @0x6277232*/
  FIXUP public_6277232 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af18
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_627725b
        lea ecx, ss:[esp+0x118]
        push ecx
        mov ecx, ebx
        call public_6276540
        jmp public_6277645
/*FIXUP public_627725b : nop
        push offset public_639af04 @0x627725b*/
  FIXUP public_627725b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af04
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277299
        lea edx, ss:[esp+0x14]
        push edx
        push 0x813
/*FIXUP push offset public_639a188 @0x627727a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639aec4 @0x6277284*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639aec4
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_6277299 : nop
        push offset public_639aeac @0x6277299*/
  FIXUP public_6277299 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639aeac
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_62772d8
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x817
/*FIXUP push offset public_639a188 @0x62772be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639ae6c @0x62772c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ae6c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_62772d8 : nop
        push offset public_639ae58 @0x62772d8*/
  FIXUP public_62772d8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ae58
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277317
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x81B
/*FIXUP push offset public_639a188 @0x62772fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639ae18 @0x6277307*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ae18
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_6277317 : nop
        push offset public_639ae08 @0x6277317*/
  FIXUP public_6277317 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ae08
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277355
/*FIXUP push offset public_639adec @0x627732c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639adec
        push 0x81F
/*FIXUP public_6277336 : nop
        push offset public_639a188 @0x6277336*/
  FIXUP public_6277336 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x6277340*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_6277355 : nop
        push offset public_639adbc @0x6277355*/
  FIXUP public_6277355 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639adbc
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_627737e
        lea ecx, ss:[esp+0x118]
        push ecx
        mov ecx, ebx
        call public_6276730
        jmp public_6277645
/*FIXUP public_627737e : nop
        push offset public_639ada4 @0x627737e*/
  FIXUP public_627737e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ada4
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277469
        push 0x40
        lea esi, ds:[ebx+0x184]
        call public_6391d9c
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_62773b6
        mov ecx, edi
        call public_62739f0
        jmp public_62773b8
        public_62773b6 : nop
        xor edi, edi
        public_62773b8 : nop
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edi
        call public_6279e20
        mov ebp, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x118]
        mov byte ptr ss : [ebp+0x34], 0
        mov byte ptr ss : [ebp+0x35], 1
        call public_6310170
        test al, al
        je public_6277645
        lea esp, ss:[esp]
/*FIXUP public_62773f0 : nop
        push offset public_6399f10 @0x62773f0*/
  FIXUP public_62773f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        lea ecx, ss:[esp+0x11C]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x118]
        je public_627744f
        call public_6310040
        lea ecx, ss:[esp+0x118]
        mov esi, eax
        call public_6310b70
        push esi
        push eax
        mov ecx, ebx
        call public_62761c0
        mov esi, eax
        test esi, esi
        je public_6277454
        cmp dword ptr ss : [ebp], 0
        jne public_6277440
        mov eax, dword ptr ds : [esi]
        push eax
        push ebp
        call public_6334400
        add esp, 8
        public_6277440 : nop
        add esi, 4
        lea edi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        jmp public_6277454
        public_627744f : nop
        call public_6310040
        public_6277454 : nop
        lea ecx, ss:[esp+0x118]
        call public_6310170
        test al, al
        jne public_62773f0
        jmp public_6277645
/*FIXUP public_6277469 : nop
        push offset public_639ad90 @0x6277469*/
  FIXUP public_6277469 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad90
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_62774a8
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639ad70 @0x6277484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad70
        push 0x82B
/*FIXUP push offset public_639a188 @0x627748e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x6277498*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_62774a8 : nop
        push offset public_639ad68 @0x62774a8*/
  FIXUP public_62774a8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad68
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_62774e7
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639ad50 @0x62774c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad50
        push 0x82F
/*FIXUP push offset public_639a188 @0x62774cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62774d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_62774e7 : nop
        push offset public_639ad40 @0x62774e7*/
  FIXUP public_62774e7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad40
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_627750b
/*FIXUP push offset public_639ad24 @0x62774fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad24
        push 0x833
        jmp public_6277336
/*FIXUP public_627750b : nop
        push offset public_639ad1c @0x627750b*/
  FIXUP public_627750b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad1c
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277534
        lea ecx, ss:[esp+0x118]
        push ecx
        mov ecx, ebx
        call public_62769d0
        jmp public_6277645
/*FIXUP public_6277534 : nop
        push offset public_639ad0c @0x6277534*/
  FIXUP public_6277534 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ad0c
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_627755d
        lea edx, ss:[esp+0x118]
        push edx
        mov ecx, ebx
        call public_6276c00
        jmp public_6277645
/*FIXUP public_627755d : nop
        push offset public_639acfc @0x627755d*/
  FIXUP public_627755d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639acfc
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277586
        lea eax, ss:[esp+0x118]
        push eax
        mov ecx, ebx
        call public_6276df0
        jmp public_6277645
/*FIXUP public_6277586 : nop
        push offset public_639acf0 @0x6277586*/
  FIXUP public_6277586 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639acf0
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_62775c5
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639acd8 @0x62775a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639acd8
        push 0x843
/*FIXUP push offset public_639a188 @0x62775ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62775b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_62775c5 : nop
        push offset public_639acd0 @0x62775c5*/
  FIXUP public_62775c5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639acd0
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277601
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639acbc @0x62775e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639acbc
        push 0x847
/*FIXUP push offset public_639a188 @0x62775ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62775f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6277645
/*FIXUP public_6277601 : nop
        push offset public_639acb0 @0x6277601*/
  FIXUP public_6277601 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639acb0
        lea ecx, ss:[esp+0x11C]
        call public_63103c0
        test al, al
        je public_6277645
/*FIXUP push offset public_639ac98 @0x6277616*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac98
        push 0x84B
        jmp public_6277336
        public_6277625 : nop
        lea ecx, ss:[esp+0x118]
        push ecx
        mov ecx, ebx
        call public_6275860
        jmp public_6277645
        public_6277636 : nop
        lea edx, ss:[esp+0x118]
        push edx
        mov ecx, ebx
        call public_6275490
        public_6277645 : nop
        lea ecx, ss:[esp+0x118]
        call public_6310070
        test al, al
        jne public_6277128
        public_6277659 : nop
        lea ecx, ss:[esp+0x118]
        call public_630f770
        public_6277665 : nop
        lea eax, ss:[esp+0x1540]
        mov dword ptr ss : [esp+0x1688], 1
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edi, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x1540]
        mov byte ptr ss : [esp+0x1688], 2
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [esp+0x1548]
        cmp eax, edi
        jae public_62776a5
        mov edi, eax
        public_62776a5 : nop
        test edi, edi
        mov ebp, dword ptr ds : [public_6399330]
        jbe public_62776f2
        mov ecx, dword ptr ss : [esp+0x1544]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call ebp
        mov esi, dword ptr ss : [esp+0x1554]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        lea ecx, ss:[esp+0x1548]
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62776f2
        mov edx, dword ptr ss : [esp+0x1544]
        mov dword ptr ss : [esp+0x1548], esi
        mov byte ptr ds : [edx+esi], 0
        public_62776f2 : nop
        mov eax, dword ptr ss : [esp+0x1550]
        mov ebx, dword ptr ds : [public_639913c]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_6277757
        mov eax, dword ptr ss : [esp+0x1554]
        xor esi, esi
        cmp eax, esi
        je public_6277744
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, esi
        je public_6277733
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x1558], esi
        mov dword ptr ss : [esp+0x155C], esi
        public_6277733 : nop
        mov eax, dword ptr ss : [esp+0x1554]
        push eax
        call ebx
        mov dword ptr ss : [esp+0x1554], esi
        public_6277744 : nop
        mov ecx, dword ptr ss : [esp+0x1550]
        push ecx
        call ebx
        mov dword ptr ss : [esp+0x1550], edi
        jmp public_6277759
        public_6277757 : nop
        xor esi, esi
        public_6277759 : nop
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, esi
        je public_627777c
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0x1558], esi
        mov dword ptr ss : [esp+0x155C], esi
        public_627777c : nop
        mov eax, dword ptr ss : [esp+0x1544]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1560], esi
        je public_62777aa
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62777a1
        cmp cl, 0xFF
        je public_62777a1
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62777aa
        public_62777a1 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62777aa : nop
        mov dword ptr ss : [esp+0x1544], esi
        mov dword ptr ss : [esp+0x1548], esi
        mov dword ptr ss : [esp+0x154C], esi
        mov ecx, dword ptr ss : [esp+0x11C]
        cmp ecx, esi
        mov edx, dword ptr ds : [public_63991c0]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1688], 3
        je public_627781b
        mov al, byte ptr ds : [ecx-1]
        test al, al
        je public_627781b
        cmp al, 0xFF
        je public_627781b
        mov esi, ecx
        push 1
        lea ecx, ss:[esp+0x11C]
        call dword ptr ds : [public_63991b8]
        push esi
        call dword ptr ds : [public_6399190]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_63991a4]
        mov ecx, dword ptr ss : [esp+0x11C]
        xor esi, esi
        public_627781b : nop
        mov eax, dword ptr ss : [esp+0x120]
        cmp eax, edi
        jae public_6277828
        mov edi, eax
        public_6277828 : nop
        cmp edi, esi
        jbe public_627786f
        sub eax, edi
        push eax
        lea eax, ds:[ecx+edi]
        push eax
        push ecx
        call ebp
        mov esi, dword ptr ss : [esp+0x12C]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_63991d4]
        test al, al
        mov ecx, dword ptr ss : [esp+0x11C]
        je public_627786f
        mov dword ptr ss : [esp+0x120], esi
        mov byte ptr ds : [ecx+esi], 0
        mov ecx, dword ptr ss : [esp+0x11C]
        public_627786f : nop
        mov eax, dword ptr ss : [esp+0x128]
        or edi, 0xFFFFFFFF
        xor esi, esi
        cmp eax, edi
        je public_62778d1
        cmp dword ptr ss : [esp+0x12C], esi
        je public_62778b9
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, esi
        je public_62778a8
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x130], esi
        mov dword ptr ss : [esp+0x134], esi
        public_62778a8 : nop
        mov edx, dword ptr ss : [esp+0x12C]
        push edx
        call ebx
        mov dword ptr ss : [esp+0x12C], esi
        public_62778b9 : nop
        mov eax, dword ptr ss : [esp+0x128]
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x11C]
        mov dword ptr ss : [esp+0x128], edi
        public_62778d1 : nop
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, esi
        je public_62778fb
        push eax
        call dword ptr ds : [public_639932c]
        mov ecx, dword ptr ss : [esp+0x120]
        add esp, 4
        mov dword ptr ss : [esp+0x130], esi
        mov dword ptr ss : [esp+0x134], esi
        public_62778fb : nop
        pop edi
        mov dword ptr ss : [esp+0x134], esi
        cmp ecx, esi
        pop esi
        pop ebp
        pop ebx
        je public_627793c
        lea eax, ds:[ecx-1]
        mov cl, byte ptr ds : [eax]
        test cl, cl
        je public_6277933
        cmp cl, 0xFF
        je public_6277933
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x1670]
        mov dword ptr fs : [0], ecx
        add esp, 0x167C
        ret 4
        public_6277933 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627793c : nop
        mov ecx, dword ptr ss : [esp+0x1670]
        mov dword ptr fs : [0], ecx
        add esp, 0x167C
        ret 4
        UNREACHABLE_TRAP(0x62770a0)
    }
}

#undef public_6277128
#undef public_6277198
#undef public_6277209
#undef public_6277232
#undef public_627725b
#undef public_6277299
#undef public_62772d8
#undef public_6277317
#undef public_6277336
#undef public_6277355
#undef public_627737e
#undef public_62773b6
#undef public_62773b8
#undef public_62773f0
#undef public_6277440
#undef public_627744f
#undef public_6277454
#undef public_6277469
#undef public_62774a8
#undef public_62774e7
#undef public_627750b
#undef public_6277534
#undef public_627755d
#undef public_6277586
#undef public_62775c5
#undef public_6277601
#undef public_6277625
#undef public_6277636
#undef public_6277645
#undef public_6277659
#undef public_6277665
#undef public_62776a5
#undef public_62776f2
#undef public_6277733
#undef public_6277744
#undef public_6277757
#undef public_6277759
#undef public_627777c
#undef public_62777a1
#undef public_62777aa
#undef public_627781b
#undef public_6277828
#undef public_627786f
#undef public_62778a8
#undef public_62778b9
#undef public_62778d1
#undef public_62778fb
#undef public_6277933
#undef public_627793c
