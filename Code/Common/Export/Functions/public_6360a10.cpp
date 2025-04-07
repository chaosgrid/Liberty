#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360a10);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

#define public_6360a38 _public_6360a38

PROC_DECLARE(0x6360a10, internal_6360a10, public_6360a10);
extern "C" NAKED register_t __cdecl internal_6360a10()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        cmp word ptr ds : [ecx+0x10], 0
        jbe public_6360a38
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov ax, word ptr ds : [ecx+0xE]
        push esi
        shl eax, 4
        mov esi, dword ptr ds : [eax+edx+0xC]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6363280
        mov eax, esi
        pop esi
        ret 
        public_6360a38 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6360a10)
    }
}

#undef public_6360a38
