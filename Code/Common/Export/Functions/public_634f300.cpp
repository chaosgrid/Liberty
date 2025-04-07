#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634f300);
CLANG_FORWARD_PROC_SYMBOL(public_6350460);

#define public_634f30b _public_634f30b
#define public_634f31d _public_634f31d

PROC_DECLARE(0x634f300, internal_634f300, public_634f300);
extern "C" NAKED register_t __cdecl internal_634f300()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_634f31d
        push esi
        public_634f30b : nop
        mov esi, dword ptr ds : [eax+0x74]
        push eax
        mov ecx, edi
        call public_6350460
        test esi, esi
        mov eax, esi
        jne public_634f30b
        pop esi
        public_634f31d : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x634f300)
    }
}

#undef public_634f30b
#undef public_634f31d
