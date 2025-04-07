#include "Common-PCH.h"


#define public_626f898 _public_626f898

PROC_DECLARE(0x626f880, internal_626f880, public_626f880);
extern "C" NAKED register_t __cdecl internal_626f880()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, ecx
        jb public_626f898
        je public_626f898
        mov eax, 1
        ret 4
        public_626f898 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x626f880)
    }
}

#undef public_626f898
