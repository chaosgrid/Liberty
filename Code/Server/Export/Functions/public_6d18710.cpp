#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d1874b _public_6d1874b

PROC_DECLARE(0x6d18710, internal_6d18710, public_6d18710);
extern "C" NAKED register_t __cdecl internal_6d18710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, 0xFFFFFFFC
        mov dword ptr ds : [esi], 0
        je public_6d1874b
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d140f0
        test eax, eax
        je public_6d1874b
        mov ecx, eax
        call public_6d12d90
        mov dword ptr ds : [esi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d1874b : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18710)
    }
}

#undef public_6d1874b
