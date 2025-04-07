#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313560);

#define public_631357e _public_631357e

PROC_DECLARE(0x6313560, internal_6313560, public_6313560);
extern "C" NAKED register_t __cdecl internal_6313560()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        cmp esi, 4
        jl public_631357e
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx]
        add edx, 4
        add esi, 0xFFFFFFFC
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        pop ecx
        ret 
        public_631357e : nop
        mov eax, dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6313560)
    }
}

#undef public_631357e
