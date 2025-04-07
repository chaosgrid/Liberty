#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42900);

#define public_6d42911 _public_6d42911

PROC_DECLARE(0x6d42900, internal_6d42900, public_6d42900);
extern "C" NAKED register_t __cdecl internal_6d42900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp byte ptr ds : [eax+0x117], 0x10
        jne public_6d42911
        or dword ptr ds : [eax+0x60], 0x10
        public_6d42911 : nop
        ret 
        UNREACHABLE_TRAP(0x6d42900)
    }
}

#undef public_6d42911
