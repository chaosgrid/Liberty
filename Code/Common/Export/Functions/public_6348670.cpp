#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348670);

#define public_6348688 _public_6348688

PROC_DECLARE(0x6348670, internal_6348670, public_6348670);
extern "C" NAKED register_t __cdecl internal_6348670()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6348688
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6348688 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6348670)
    }
}

#undef public_6348688
