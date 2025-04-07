#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62134a0);

#define public_62134aa _public_62134aa
#define public_62134ac _public_62134ac
#define public_62134c0 _public_62134c0

PROC_DECLARE(0x62134a0, internal_62134a0, public_62134a0);
extern "C" NAKED register_t __cdecl internal_62134a0()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_62134aa
        lea esi, ds:[ecx+4]
        jmp public_62134ac
        public_62134aa : nop
        xor esi, esi
        public_62134ac : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_62134c0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_62134c0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62134a0)
    }
}

#undef public_62134aa
#undef public_62134ac
#undef public_62134c0
