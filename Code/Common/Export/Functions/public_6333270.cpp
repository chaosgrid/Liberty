#include "Common-PCH.h"


#define public_6333280 _public_6333280

PROC_DECLARE(0x6333270, internal_6333270, public_6333270);
extern "C" NAKED register_t __cdecl internal_6333270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6333280
        mov dword ptr ds : [ecx+8], eax
        mov byte ptr ds : [ecx+0xC], 1
        public_6333280 : nop
        ret 4
        UNREACHABLE_TRAP(0x6333270)
    }
}

#undef public_6333280
