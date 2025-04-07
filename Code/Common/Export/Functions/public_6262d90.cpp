#include "Common-PCH.h"


#define public_6262d98 _public_6262d98

PROC_DECLARE(0x6262d90, internal_6262d90, public_6262d90);
extern "C" NAKED register_t __cdecl internal_6262d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, ecx
        sub edx, eax
        public_6262d98 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6262d98
        ret 4
        UNREACHABLE_TRAP(0x6262d90)
    }
}

#undef public_6262d98
