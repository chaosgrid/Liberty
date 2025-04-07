#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23f70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d627f2);

#define public_6d20afd _public_6d20afd
#define public_6d20b14 _public_6d20b14
#define public_6d20b2f _public_6d20b2f
#define public_6d20ba4 _public_6d20ba4
#define public_6d20bb5 _public_6d20bb5
#define public_6d20bcc _public_6d20bcc
#define public_6d20be7 _public_6d20be7
#define public_6d20c58 _public_6d20c58

PROC_DECLARE(0x6d20ac0, internal_6d20ac0, public_6d20ac0);
extern "C" NAKED register_t __cdecl internal_6d20ac0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d627f2 @0x6d20ac8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d627f2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x18]
        mov dword ptr fs : [0], esp
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        test al, al
        mov eax, dword ptr ds : [esi]
        push edi
        mov ebp, ecx
        je public_6d20ba4
        test eax, eax
        je public_6d20afd
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x24
        cmp eax, ecx
        jbe public_6d20b2f
        public_6d20afd : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x24
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x24], 0x24
        jae public_6d20b14
        lea eax, ss:[esp+0x24]
        public_6d20b14 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d20b2f : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x24
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6d20c58
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_6d23f70
        lea edi, ds:[esi+0x18]
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi], offset public_6d68ddc
        mov dword ptr ss : [ebp+4], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 1
        call public_6d228d0
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ds : [edi], offset public_6d68db4
        mov dword ptr ds : [esi], offset public_6d68d8c
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0x10
        public_6d20ba4 : nop
        test eax, eax
        je public_6d20bb5
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0x24
        cmp ecx, eax
        jbe public_6d20be7
        public_6d20bb5 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x24
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x24], 0x24
        jae public_6d20bcc
        lea eax, ss:[esp+0x24]
        public_6d20bcc : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d20be7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x24
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 2
        je public_6d20c58
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6d23f70
        lea edi, ds:[esi+0x18]
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi], offset public_6d68ddc
        mov dword ptr ss : [ebp+4], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 3
        call public_6d228d0
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ds : [edi], offset public_6d68d64
        mov dword ptr ds : [esi], offset public_6d68d3c
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0x10
        public_6d20c58 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6d20ac0)
    }
}

#undef public_6d20afd
#undef public_6d20b14
#undef public_6d20b2f
#undef public_6d20ba4
#undef public_6d20bb5
#undef public_6d20bcc
#undef public_6d20be7
#undef public_6d20c58
