#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62134f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6213260 _public_6213260
#define public_6213280 _public_6213280

PROC_DECLARE(0x6213250, internal_6213250, public_6213250);
extern "C" NAKED register_t __cdecl internal_6213250()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        jbe public_6213260
        dec eax
        mov dword ptr ds : [esi+0x54], eax
        public_6213260 : nop
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        jne public_6213280
        mov ecx, esi
        mov dword ptr ds : [esi+0x54], 1
        call public_62134f0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6213280 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6213250)
    }
}

#undef public_6213260
#undef public_6213280
