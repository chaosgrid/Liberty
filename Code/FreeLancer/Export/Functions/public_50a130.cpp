#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50a149 _public_50a149

PROC_DECLARE(0x50a130, internal_50a130, public_50a130);
extern "C" NAKED register_t __cdecl internal_50a130()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5db1f0
        je public_50a149
        push esi
        call public_5b7e1d
        add esp, 4
        public_50a149 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x50a130)
    }
}

#undef public_50a149
