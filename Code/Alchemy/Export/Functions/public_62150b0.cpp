#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62150f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62150c6 _public_62150c6
#define public_62150ec _public_62150ec

PROC_DECLARE(0x62150b0, internal_62150b0, public_62150b0);
extern "C" NAKED register_t __cdecl internal_62150b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xBC]
        test eax, eax
        jbe public_62150c6
        dec eax
        mov dword ptr ds : [esi+0xBC], eax
        public_62150c6 : nop
        mov eax, dword ptr ds : [esi+0xBC]
        test eax, eax
        jne public_62150ec
        mov ecx, esi
        mov dword ptr ds : [esi+0xBC], 1
        call public_62150f0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62150ec : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62150b0)
    }
}

#undef public_62150c6
#undef public_62150ec
