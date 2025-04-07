#include "Server-PCH.h"


#define public_6cf23c2 _public_6cf23c2

PROC_DECLARE(0x6cf23b0, internal_6cf23b0, public_6cf23b0);
extern "C" NAKED register_t __cdecl internal_6cf23b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d8fb14]
        test ecx, ecx
        je public_6cf23c2
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x1F4]
        public_6cf23c2 : nop
        ret 4
        UNREACHABLE_TRAP(0x6cf23b0)
    }
}

#undef public_6cf23c2
