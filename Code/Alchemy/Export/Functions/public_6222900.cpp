#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222c50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6222910 _public_6222910
#define public_6222930 _public_6222930

PROC_DECLARE(0x6222900, internal_6222900, public_6222900);
extern "C" NAKED register_t __cdecl internal_6222900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        jbe public_6222910
        dec eax
        mov dword ptr ds : [esi+0x48], eax
        public_6222910 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        jne public_6222930
        mov ecx, esi
        mov dword ptr ds : [esi+0x48], 1
        call public_6222c50
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6222930 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6222900)
    }
}

#undef public_6222910
#undef public_6222930
