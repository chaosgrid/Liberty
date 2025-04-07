#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237390);

#define public_623739a _public_623739a
#define public_623739c _public_623739c
#define public_62373b0 _public_62373b0

PROC_DECLARE(0x6237390, internal_6237390, public_6237390);
extern "C" NAKED register_t __cdecl internal_6237390()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_623739a
        lea esi, ds:[ecx+4]
        jmp public_623739c
        public_623739a : nop
        xor esi, esi
        public_623739c : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_62373b0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_62373b0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6237390)
    }
}

#undef public_623739a
#undef public_623739c
#undef public_62373b0
