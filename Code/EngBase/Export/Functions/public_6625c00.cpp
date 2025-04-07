#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625c00);

#define public_6625c1f _public_6625c1f

PROC_DECLARE(0x6625c00, internal_6625c00, public_6625c00);
extern "C" NAKED register_t __cdecl internal_6625c00()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp edx, eax
        jg public_6625c1f
        test edx, edx
        jl public_6625c1f
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        ret 4
        public_6625c1f : nop
        mov edx, dword ptr ds : [ecx+4]
        inc eax
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x6625c00)
    }
}

#undef public_6625c1f
