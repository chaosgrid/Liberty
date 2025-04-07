#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d854b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6d880a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d95d20);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db24e1);

#define public_6d88117 _public_6d88117
#define public_6d881cc _public_6d881cc
#define public_6d881d4 _public_6d881d4
#define public_6d881e5 _public_6d881e5
#define public_6d88218 _public_6d88218
#define public_6d8825a _public_6d8825a

PROC_DECLARE(0x6d880a0, internal_6d880a0, public_6d880a0);
extern "C" NAKED register_t __cdecl internal_6d880a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db24e1 @0x6d880a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db24e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov al, byte ptr ss : [esp+0x44]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x20], al
        call dword ptr ds : [public_6db30ac]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        mov byte ptr ss : [esp+0x50], 1
        call public_6d95d20
        lea ecx, ss:[esp+0x10]
        call public_6d913e0
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        je public_6d881e5
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6d881e5
        public_6d88117 : nop
        mov esi, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6db3004]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6db30ac]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6d854b0
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        inc edi
        mov dword ptr ss : [esp+0x20], edi
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi]
        lea edi, ds:[eax+8]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6db308c]
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6db3084]
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db3080]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0xC]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6db3088]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0xE]
        mov ecx, edi
        push edx
        call dword ptr ds : [public_6db307c]
        cmp word ptr ds : [esi+0x10], 0
        jbe public_6d881cc
        mov esi, dword ptr ds : [esi+0x14]
        push 0
        push esi
        call dword ptr ds : [public_6db3078]
        mov dword ptr ss : [esp+0x5C], eax
        add esp, 8
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db3074]
        jmp public_6d881d4
        public_6d881cc : nop
        mov ecx, edi
        call dword ptr ds : [public_6db3070]
        public_6d881d4 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+4]
        jne public_6d88117
        xor ebp, ebp
        public_6d881e5 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x74]
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x4C], 0
        call public_6d91340
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        je public_6d8825a
        public_6d88218 : nop
        push ebp
        lea ecx, ss:[esp+0x5C]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x5C], eax
        call public_6d85710
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6db1dc2
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6d88218
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d8825a : nop
        push edi
        call public_6db1dc2
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6d880a0)
    }
}

#undef public_6d88117
#undef public_6d881cc
#undef public_6d881d4
#undef public_6d881e5
#undef public_6d88218
#undef public_6d8825a
