#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296620);

#define public_6296631 _public_6296631
#define public_6296633 _public_6296633

PROC_DECLARE(0x6296620, internal_6296620, public_6296620);
extern "C" NAKED register_t __cdecl internal_6296620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6296631
        cmp dword ptr ds : [eax+0x14], 0x20000
        je public_6296633
        public_6296631 : nop
        xor eax, eax
        public_6296633 : nop
        ret 
        UNREACHABLE_TRAP(0x6296620)
    }
}

#undef public_6296631
#undef public_6296633
