#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8dd0);

#define public_4f8de8 _public_4f8de8

PROC_DECLARE(0x4f8dd0, internal_4f8dd0, public_4f8dd0);
extern "C" NAKED register_t __cdecl internal_4f8dd0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5d9aac
        mov eax, dword ptr ds : [ecx+0x44]
        add ecx, 0x44
        test eax, eax
        je public_4f8de8
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4f8de8 : nop
        ret 
        UNREACHABLE_TRAP(0x4f8dd0)
    }
}

#undef public_4f8de8
