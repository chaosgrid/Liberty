#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202fc0);

#define public_6202fca _public_6202fca
#define public_6202fcc _public_6202fcc
#define public_6202fe0 _public_6202fe0

PROC_DECLARE(0x6202fc0, internal_6202fc0, public_6202fc0);
extern "C" NAKED register_t __cdecl internal_6202fc0()
{
    __asm
    {
        test ecx, ecx
        push esi
        je public_6202fca
        lea esi, ds:[ecx+4]
        jmp public_6202fcc
        public_6202fca : nop
        xor esi, esi
        public_6202fcc : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_6202fe0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_6202fe0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6202fc0)
    }
}

#undef public_6202fca
#undef public_6202fcc
#undef public_6202fe0
