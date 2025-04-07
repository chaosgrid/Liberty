#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4440b);

#define public_6d4440f _public_6d4440f

PROC_DECLARE(0x6d4440b, internal_6d4440b, public_6d4440b);
extern "C" NAKED register_t __cdecl internal_6d4440b()
{
    __asm
    {
        push 0x10
        pop edx
        push esi
        public_6d4440f : nop
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [eax]
        add eax, 0x10
        fstp dword ptr ds : [ecx]
        add ecx, 0x10
        dec edx
        fld dword ptr ds : [eax-0xC]
        fmul dword ptr ds : [eax-4]
        fstp dword ptr ds : [ecx-0xC]
        fld dword ptr ds : [eax-8]
        fmul dword ptr ds : [eax-4]
        fstp dword ptr ds : [ecx-8]
        mov esi, dword ptr ds : [eax-4]
        mov dword ptr ds : [ecx-4], esi
        jne public_6d4440f
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4440b)
    }
}

#undef public_6d4440f
