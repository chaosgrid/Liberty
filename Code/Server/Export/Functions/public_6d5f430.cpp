#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5f130);

#define public_6d5f461 _public_6d5f461

PROC_DECLARE(0x6d5f430, internal_6d5f430, public_6d5f430);
extern "C" NAKED register_t __cdecl internal_6d5f430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push 0
        push ecx
        push esi
        mov edi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64a14]
        add esp, 0xC
        test eax, eax
        jne public_6d5f461
        push eax
        push esi
        call public_6d5f130
        add esp, 8
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d5f461 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f430)
    }
}

#undef public_6d5f461
