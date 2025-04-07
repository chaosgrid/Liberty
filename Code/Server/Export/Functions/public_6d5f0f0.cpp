#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5f130);

#define public_6d5f128 _public_6d5f128

PROC_DECLARE(0x6d5f0f0, internal_6d5f0f0, public_6d5f0f0);
extern "C" NAKED register_t __cdecl internal_6d5f0f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_6d45b60
        push esi
        call dword ptr ds : [public_6d64900]
        mov edi, eax
        add esp, 8
        test edi, edi
        jne public_6d5f128
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push esi
        call dword ptr ds : [public_6d64a10]
        push edi
        push esi
        call public_6d5f130
        add esp, 0x18
        public_6d5f128 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f0f0)
    }
}

#undef public_6d5f128
