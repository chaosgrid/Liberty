#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231360);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6231096 _public_6231096
#define public_62310bc _public_62310bc

PROC_DECLARE(0x6231080, internal_6231080, public_6231080);
extern "C" NAKED register_t __cdecl internal_6231080()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xD0]
        test eax, eax
        jbe public_6231096
        dec eax
        mov dword ptr ds : [esi+0xD0], eax
        public_6231096 : nop
        mov eax, dword ptr ds : [esi+0xD0]
        test eax, eax
        jne public_62310bc
        mov ecx, esi
        mov dword ptr ds : [esi+0xD0], 1
        call public_6231360
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62310bc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6231080)
    }
}

#undef public_6231096
#undef public_62310bc
