#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63277d0);

#define public_63277e8 _public_63277e8

PROC_DECLARE(0x63277d0, internal_63277d0, public_63277d0);
extern "C" NAKED register_t __cdecl internal_63277d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_63277e8
        push eax
        call dword ptr ds : [public_639907c]
        mov dword ptr ds : [esi+0x40], 0
        public_63277e8 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63277d0)
    }
}

#undef public_63277e8
