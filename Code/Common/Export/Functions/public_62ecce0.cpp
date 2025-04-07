#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4520);
CLANG_FORWARD_PROC_SYMBOL(public_62ecce0);

#define public_62eccfd _public_62eccfd
#define public_62eccff _public_62eccff
#define public_62ecd24 _public_62ecd24

PROC_DECLARE(0x62ecce0, internal_62ecce0, public_62ecce0);
extern "C" NAKED register_t __cdecl internal_62ecce0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eccfd
        lea ecx, ds:[eax-8]
        jmp public_62eccff
        public_62eccfd : nop
        xor ecx, ecx
        public_62eccff : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62ecd24
        push 0
        push 2
        push eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        call public_62d4520
        public_62ecd24 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ecce0)
    }
}

#undef public_62eccfd
#undef public_62eccff
#undef public_62ecd24
