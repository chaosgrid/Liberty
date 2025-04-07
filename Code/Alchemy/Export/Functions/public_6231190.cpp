#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231220);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62311a6 _public_62311a6
#define public_62311cc _public_62311cc

PROC_DECLARE(0x6231190, internal_6231190, public_6231190);
extern "C" NAKED register_t __cdecl internal_6231190()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xA4]
        test eax, eax
        jbe public_62311a6
        dec eax
        mov dword ptr ds : [esi+0xA4], eax
        public_62311a6 : nop
        mov eax, dword ptr ds : [esi+0xA4]
        test eax, eax
        jne public_62311cc
        mov ecx, esi
        mov dword ptr ds : [esi+0xA4], 1
        call public_6231220
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62311cc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6231190)
    }
}

#undef public_62311a6
#undef public_62311cc
