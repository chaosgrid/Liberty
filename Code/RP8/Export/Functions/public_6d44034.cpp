#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44034);

#define public_6d4404e _public_6d4404e

PROC_DECLARE(0x6d44034, internal_6d44034, public_6d44034);
extern "C" NAKED register_t __cdecl internal_6d44034()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d4404e
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d4404e
        fld qword ptr ss : [esp+0xC]
        or dword ptr ds : [eax+8], 1
        fstp dword ptr ds : [eax+0x28]
        public_6d4404e : nop
        ret 
        UNREACHABLE_TRAP(0x6d44034)
    }
}

#undef public_6d4404e
