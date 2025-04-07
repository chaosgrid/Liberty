#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3660);

#define public_65c3674 _public_65c3674
#define public_65c3684 _public_65c3684

PROC_DECLARE(0x65c3660, internal_65c3660, public_65c3660);
extern "C" NAKED register_t __cdecl internal_65c3660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        mov ecx, eax
        jbe public_65c3684
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        public_65c3674 : nop
        mov di, word ptr ds : [edx]
        mov word ptr ds : [ecx], di
        add ecx, 2
        add edx, 2
        dec esi
        jne public_65c3674
        pop edi
        public_65c3684 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c3660)
    }
}

#undef public_65c3674
#undef public_65c3684
