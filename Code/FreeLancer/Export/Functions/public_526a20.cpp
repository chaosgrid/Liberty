#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);

#define public_526a35 _public_526a35

PROC_DECLARE(0x526a20, internal_526a20, public_526a20);
extern "C" NAKED register_t __cdecl internal_526a20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_526a35
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_526a35 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x526a20)
    }
}

#undef public_526a35
