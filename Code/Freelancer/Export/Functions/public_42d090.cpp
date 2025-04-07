#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d090);

#define public_42d0a5 _public_42d0a5
#define public_42d0af _public_42d0af

PROC_DECLARE(0x42d090, internal_42d090, public_42d090);
extern "C" NAKED register_t __cdecl internal_42d090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], eax
        je public_42d0a5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_42d0a5 : nop
        test esi, esi
        je public_42d0af
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_42d0af : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x42d090)
    }
}

#undef public_42d0a5
#undef public_42d0af
