#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb19d0);

#define public_6eb19e5 _public_6eb19e5
#define public_6eb19ef _public_6eb19ef

PROC_DECLARE(0x6eb19d0, internal_6eb19d0, public_6eb19d0);
extern "C" NAKED register_t __cdecl internal_6eb19d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], eax
        je public_6eb19e5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6eb19e5 : nop
        test esi, esi
        je public_6eb19ef
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6eb19ef : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb19d0)
    }
}

#undef public_6eb19e5
#undef public_6eb19ef
