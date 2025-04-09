#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_43f060);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5b962f);

#define public_43dd80 _public_43dd80
#define public_43dd92 _public_43dd92
#define public_43dda3 _public_43dda3
#define public_43ddb4 _public_43ddb4
#define public_43ddc6 _public_43ddc6
#define public_43ddd5 _public_43ddd5
#define public_43dddc _public_43dddc
#define public_43de60 _public_43de60
#define public_43de90 _public_43de90
#define public_43ded9 _public_43ded9
#define public_43dee2 _public_43dee2
#define public_43df55 _public_43df55
#define public_43df66 _public_43df66
#define public_43df77 _public_43df77
#define public_43df9b _public_43df9b
#define public_43dfc4 _public_43dfc4

PROC_DECLARE(0x43dc40, internal_43dc40, public_43dc40);
extern "C" NAKED register_t __cdecl internal_43dc40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b962f @0x43dc48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b962f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1690
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebp
        push esi
        push edi
        xor edi, edi
        lea eax, ss:[esp+0x24]
        push eax
        push edi
        push edi
        push edi
        push 1
        push edi
        push edi
        push 1
        push edi
        push edi
        push edi
        mov esi, ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push edi
        lea edx, ss:[esp+0x4C]
        push edx
/*FIXUP push offset public_5cb38c @0x43dc82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb38c
/*FIXUP push offset public_5cb68c @0x43dc87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb68c
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0x3E343958
        mov dword ptr ss : [esp+0x60], 0xBF000000
        call public_5a0db0
        mov dword ptr ds : [esi+0x3D8], eax
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        push edi
        push edi
        push 1
        push edi
        push edi
        push 1
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x38]
        push ecx
        push edi
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5cb440 @0x43dcfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb440
/*FIXUP push offset public_5cb680 @0x43dd02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb680
        mov ecx, esi
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x64], edi
        mov dword ptr ss : [esp+0x68], 0x3E90624E
        mov dword ptr ss : [esp+0x6C], 0xBF800000
        call public_5a0db0
        push edi
        push 1
        mov dword ptr ds : [esi+0x3DC], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x16B0]
        mov ecx, dword ptr ss : [esp+0x16AC]
        push eax
        push ecx
        mov ecx, esi
        call public_4b5060
        test al, al
        jne public_43dddc
        mov ebp, dword ptr ds : [esi+0x3D8]
        cmp ebp, edi
        je public_43dda3
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, edi
        je public_43dd92
        nop 
        lea esp, ss:[esp]
        public_43dd80 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_43dd80
        public_43dd92 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax]
        public_43dda3 : nop
        mov esi, dword ptr ds : [esi+0x3DC]
        cmp esi, edi
        je public_43ddd5
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edi
        je public_43ddc6
        public_43ddb4 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_43ddb4
        public_43ddc6 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        public_43ddd5 : nop
        xor al, al
        jmp public_43dfc4
        public_43dddc : nop
        push ebx
        push edi
        lea ecx, ss:[esp+0x3C]
/*FIXUP push offset public_5cb660 @0x43dde2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb660
        push ecx
        call dword ptr ds : [public_5c6068]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        lea ecx, ss:[esp+0x138]
        call dword ptr ds : [public_5c605c]
        push edi
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x140]
        mov dword ptr ss : [esp+0x16B0], edi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_43de90
/*FIXUP push offset public_5cb548 @0x43de28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        lea ecx, ss:[esp+0x13C]
        call dword ptr ds : [public_5c6180]
        test al, al
        je public_43de90
        lea ecx, ss:[esp+0x138]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_43de90
        mov ebp, dword ptr ds : [public_5c60b8]
        mov ebx, dword ptr ds : [public_5c6698]
        nop 
        lea esp, ss:[esp]
        public_43de60 : nop
        lea ecx, ss:[esp+0x138]
        call ebp
        lea ecx, ss:[esp+0x138]
        mov edi, eax
        call ebx
        push eax
        push edi
        mov ecx, esi
        call public_43f060
        lea ecx, ss:[esp+0x138]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_43de60
        xor edi, edi
        public_43de90 : nop
        lea edx, ss:[esp+0x1560]
        mov dword ptr ss : [esp+0x16A8], 1
        mov dword ptr ss : [esp+0x34], edx
        lea ecx, ss:[esp+0x1560]
        mov byte ptr ss : [esp+0x16A8], 2
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x1564]
        cmp eax, edi
        je public_43dee2
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_43ded9
        cmp cl, 0xFF
        je public_43ded9
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_43dee2
        public_43ded9 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43dee2 : nop
        mov dword ptr ss : [esp+0x1564], edi
        mov dword ptr ss : [esp+0x1568], edi
        mov dword ptr ss : [esp+0x156C], edi
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea ecx, ss:[esp+0x140]
        mov dword ptr ss : [esp+0x16B0], 3
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x148]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_43df77
        cmp dword ptr ss : [esp+0x14C], edi
        mov ebx, dword ptr ds : [public_5c6ef8]
        je public_43df66
        mov eax, dword ptr ss : [esp+0x150]
        cmp eax, edi
        je public_43df55
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x150], edi
        mov dword ptr ss : [esp+0x154], edi
        public_43df55 : nop
        mov edx, dword ptr ss : [esp+0x14C]
        push edx
        call ebx
        mov dword ptr ss : [esp+0x14C], edi
        public_43df66 : nop
        mov eax, dword ptr ss : [esp+0x148]
        push eax
        call ebx
        mov dword ptr ss : [esp+0x148], ebp
        public_43df77 : nop
        mov eax, dword ptr ss : [esp+0x150]
        cmp eax, edi
        pop ebx
        je public_43df9b
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x14C], edi
        mov dword ptr ss : [esp+0x150], edi
        public_43df9b : nop
        push 1
        lea ecx, ss:[esp+0x138]
        mov dword ptr ss : [esp+0x158], edi
        mov dword ptr ss : [esp+0x16A8], ebp
        call dword ptr ds : [public_5c7084]
        mov dword ptr ds : [esi+0x39C], offset public_5cb640
        mov al, 1
        public_43dfc4 : nop
        mov ecx, dword ptr ss : [esp+0x169C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x169C
        ret 8
        UNREACHABLE_TRAP(0x43dc40)
    }
}

#undef public_43dd80
#undef public_43dd92
#undef public_43dda3
#undef public_43ddb4
#undef public_43ddc6
#undef public_43ddd5
#undef public_43dddc
#undef public_43de60
#undef public_43de90
#undef public_43ded9
#undef public_43dee2
#undef public_43df55
#undef public_43df66
#undef public_43df77
#undef public_43df9b
#undef public_43dfc4
