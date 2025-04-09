#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444080);

#define public_44409a _public_44409a

PROC_DECLARE(0x444080, internal_444080, public_444080);
extern "C" NAKED register_t __cdecl internal_444080()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        je public_44409a
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_44409a : nop
        mov byte ptr ds : [esi+8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x444080)
    }
}

#undef public_44409a
