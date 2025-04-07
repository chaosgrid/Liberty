#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634f210);
CLANG_FORWARD_PROC_SYMBOL(public_634f320);

#define public_634f218 _public_634f218
#define public_634f22b _public_634f22b

PROC_DECLARE(0x634f210, internal_634f210, public_634f210);
extern "C" NAKED register_t __cdecl internal_634f210()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_634f22b
        push esi
        public_634f218 : nop
        mov esi, dword ptr ds : [ecx+0x74]
        push 1
        push 1
        call public_634f320
        test esi, esi
        mov ecx, esi
        jne public_634f218
        pop esi
        public_634f22b : nop
        ret 
        UNREACHABLE_TRAP(0x634f210)
    }
}

#undef public_634f218
#undef public_634f22b
