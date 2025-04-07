#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62432f8 _public_62432f8
#define public_6243308 _public_6243308

PROC_DECLARE(0x62432d0, internal_62432d0, public_62432d0);
extern "C" NAKED register_t __cdecl internal_62432d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi], offset public_624fab0
        test edi, edi
        je public_62432f8
        mov ecx, edi
        call public_6242ea0
        push edi
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        public_62432f8 : nop
        test byte ptr ss : [esp+0xC], 1
        je public_6243308
        push esi
        call public_62460e0
        add esp, 4
        public_6243308 : nop
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62432d0)
    }
}

#undef public_62432f8
#undef public_6243308
