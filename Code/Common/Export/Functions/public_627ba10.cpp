#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ba10);

#define public_627ba27 _public_627ba27

PROC_DECLARE(0x627ba10, internal_627ba10, public_627ba10);
extern "C" NAKED register_t __cdecl internal_627ba10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_627ba27
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_627ba27 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x627ba10)
    }
}

#undef public_627ba27
