#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);

#define public_4c8648 _public_4c8648

PROC_DECLARE(0x4c8630, internal_4c8630, public_4c8630);
extern "C" NAKED register_t __cdecl internal_4c8630()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5d6eac
        mov eax, dword ptr ds : [ecx+0x28]
        add ecx, 0x28
        test eax, eax
        je public_4c8648
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4c8648 : nop
        ret 
        UNREACHABLE_TRAP(0x4c8630)
    }
}

#undef public_4c8648
