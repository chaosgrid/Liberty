#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67161c0);
CLANG_FORWARD_PROC_SYMBOL(public_671623d);
CLANG_FORWARD_PROC_SYMBOL(public_67162d9);

#define public_6716335 _public_6716335
#define public_6716337 _public_6716337

PROC_DECLARE(0x67162d9, internal_67162d9, public_67162d9);
extern "C" NAKED register_t __cdecl internal_67162d9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_6716335
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6716335
        lea eax, ss:[ebp+8]
        push eax
        push 0
        push edi
        call public_671623d
        mov esi, eax
        test esi, esi
        je public_6716335
        mov eax, dword ptr ds : [esi+0x24]
        add eax, edi
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        add eax, edi
        push eax
        push edi
        push dword ptr ds : [esi+0x18]
        push dword ptr ss : [ebp+0xC]
        call public_67161c0
        movzx eax, ax
        cmp eax, dword ptr ds : [esi+0x14]
        jae public_6716335
        mov ecx, dword ptr ds : [esi+0x1C]
        lea eax, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [eax+edi]
        add eax, edi
        cmp eax, esi
        jbe public_6716337
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, esi
        cmp eax, ecx
        jae public_6716337
        public_6716335 : nop
        xor eax, eax
        public_6716337 : nop
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x67162d9)
    }
}

#undef public_6716335
#undef public_6716337
