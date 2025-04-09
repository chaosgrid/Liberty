#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);

#define public_444e40 _public_444e40

PROC_DECLARE(0x444e20, internal_444e20, public_444e20);
extern "C" NAKED register_t __cdecl internal_444e20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_444e40
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        public_444e40 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x444e20)
    }
}

#undef public_444e40
