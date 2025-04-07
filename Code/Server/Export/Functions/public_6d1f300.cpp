#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f300);
CLANG_FORWARD_PROC_SYMBOL(public_6d27700);

#define public_6d1f33d _public_6d1f33d

PROC_DECLARE(0x6d1f300, internal_6d1f300, public_6d1f300);
extern "C" NAKED register_t __cdecl internal_6d1f300()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        test byte ptr ds : [edi+0x18], 0x10
        je public_6d1f33d
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6d64c80]
        mov edx, dword ptr ds : [esi+0xC]
        add eax, eax
        push 0
        add edx, eax
        push esi
        mov dword ptr ds : [esi+0xC], edx
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push esi
        call public_6d27700
        add esp, 0x14
        pop edi
        mov eax, esi
        pop esi
        ret 8
        public_6d1f33d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0xC]
        push 1
        push ecx
        push edi
        push esi
        call public_6d27700
        add esp, 0x10
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d1f300)
    }
}

#undef public_6d1f33d
