#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627bd60);

#define public_627bd7a _public_627bd7a
#define public_627bd83 _public_627bd83

PROC_DECLARE(0x627bd60, internal_627bd60, public_627bd60);
extern "C" NAKED register_t __cdecl internal_627bd60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+0x42]
        mov cl, dl
        shr cl, 1
        xor eax, eax
        and cl, 1
        test dl, 1
        je public_627bd7a
        mov eax, 1
        public_627bd7a : nop
        test cl, cl
        je public_627bd83
        mov eax, 2
        public_627bd83 : nop
        ret 
        UNREACHABLE_TRAP(0x627bd60)
    }
}

#undef public_627bd7a
#undef public_627bd83
