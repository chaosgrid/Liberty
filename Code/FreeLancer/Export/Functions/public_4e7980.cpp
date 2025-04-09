#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e75b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7980);
CLANG_FORWARD_PROC_SYMBOL(public_55e170);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4e79a6 _public_4e79a6

PROC_DECLARE(0x4e7980, internal_4e7980, public_4e7980);
extern "C" NAKED register_t __cdecl internal_4e7980()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a17b0
        lea ecx, ds:[esi+0x32C]
        call public_55e170
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        je public_4e79a6
        lea ecx, ds:[esi-0x38]
        pop esi
        jmp public_4e75b0
        public_4e79a6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4e7980)
    }
}

#undef public_4e79a6
