#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62242a0);

#define public_62242aa _public_62242aa
#define public_62242ac _public_62242ac
#define public_62242c0 _public_62242c0

PROC_DECLARE(0x62242a0, internal_62242a0, public_62242a0);
extern "C" NAKED register_t __cdecl internal_62242a0()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_62242aa
        lea esi, ds:[ecx+4]
        jmp public_62242ac
        public_62242aa : nop
        xor esi, esi
        public_62242ac : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_62242c0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_62242c0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62242a0)
    }
}

#undef public_62242aa
#undef public_62242ac
#undef public_62242c0
