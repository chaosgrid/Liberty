#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281630);

#define public_628164d _public_628164d

PROC_DECLARE(0x6281630, internal_6281630, public_6281630);
extern "C" NAKED register_t __cdecl internal_6281630()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x54]
        test eax, eax
        je public_628164d
        mov eax, dword ptr ds : [eax+0x78]
        and eax, 0x300
        sub eax, 0x100
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_628164d : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6281630)
    }
}

#undef public_628164d
