#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae310);
CLANG_FORWARD_PROC_SYMBOL(public_5af120);

#define public_5ae323 _public_5ae323
#define public_5ae335 _public_5ae335

PROC_DECLARE(0x5ae310, internal_5ae310, public_5ae310);
extern "C" NAKED register_t __cdecl internal_5ae310()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_5ae335
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_5ae323 : nop
        push ebx
        push esi
        call public_5af120
        add esp, 8
        add esi, 0x50
        dec edi
        jne public_5ae323
        pop esi
        pop ebx
        public_5ae335 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x5ae310)
    }
}

#undef public_5ae323
#undef public_5ae335
