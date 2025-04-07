#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e4c0);

#define public_623e4ca _public_623e4ca
#define public_623e4cc _public_623e4cc
#define public_623e4e0 _public_623e4e0

PROC_DECLARE(0x623e4c0, internal_623e4c0, public_623e4c0);
extern "C" NAKED register_t __cdecl internal_623e4c0()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_623e4ca
        lea esi, ds:[ecx+4]
        jmp public_623e4cc
        public_623e4ca : nop
        xor esi, esi
        public_623e4cc : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_623e4e0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_623e4e0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623e4c0)
    }
}

#undef public_623e4ca
#undef public_623e4cc
#undef public_623e4e0
