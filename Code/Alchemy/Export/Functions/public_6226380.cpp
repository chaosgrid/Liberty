#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62263c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6226396 _public_6226396
#define public_62263bc _public_62263bc

PROC_DECLARE(0x6226380, internal_6226380, public_6226380);
extern "C" NAKED register_t __cdecl internal_6226380()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jbe public_6226396
        dec eax
        mov dword ptr ds : [esi+0x8C], eax
        public_6226396 : nop
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jne public_62263bc
        mov ecx, esi
        mov dword ptr ds : [esi+0x8C], 1
        call public_62263c0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62263bc : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6226380)
    }
}

#undef public_6226396
#undef public_62263bc
