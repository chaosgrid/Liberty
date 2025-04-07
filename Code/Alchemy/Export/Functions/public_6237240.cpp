#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62373c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6237250 _public_6237250
#define public_6237270 _public_6237270

PROC_DECLARE(0x6237240, internal_6237240, public_6237240);
extern "C" NAKED register_t __cdecl internal_6237240()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        jbe public_6237250
        dec eax
        mov dword ptr ds : [esi+0x60], eax
        public_6237250 : nop
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        jne public_6237270
        mov ecx, esi
        mov dword ptr ds : [esi+0x60], 1
        call public_62373c0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6237270 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6237240)
    }
}

#undef public_6237250
#undef public_6237270
