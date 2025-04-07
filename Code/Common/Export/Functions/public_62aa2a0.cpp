#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b970);
CLANG_FORWARD_PROC_SYMBOL(public_62aa2a0);

#define public_62aa2c5 _public_62aa2c5
#define public_62aa2dc _public_62aa2dc

PROC_DECLARE(0x62aa2a0, internal_62aa2a0, public_62aa2a0);
extern "C" NAKED register_t __cdecl internal_62aa2a0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+4]
        call public_629b970
        lea eax, ss:[esp+4]
        add esi, 0xE4
        push eax
        mov ecx, esi
        call public_629b440
        test eax, eax
        je public_62aa2dc
        public_62aa2c5 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        lea eax, ss:[esp+4]
        push eax
        mov ecx, esi
        call public_629b440
        test eax, eax
        jne public_62aa2c5
        public_62aa2dc : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62aa2a0)
    }
}

#undef public_62aa2c5
#undef public_62aa2dc
