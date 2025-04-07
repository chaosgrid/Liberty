#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42912);

#define public_6d4292a _public_6d4292a

PROC_DECLARE(0x6d42912, internal_6d42912, public_6d42912);
extern "C" NAKED register_t __cdecl internal_6d42912()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp byte ptr ds : [eax+0x117], 8
        jae public_6d4292a
        or dword ptr ds : [eax+0x60], 4
        mov byte ptr ds : [eax+0x118], 8
        public_6d4292a : nop
        ret 
        UNREACHABLE_TRAP(0x6d42912)
    }
}

#undef public_6d4292a
