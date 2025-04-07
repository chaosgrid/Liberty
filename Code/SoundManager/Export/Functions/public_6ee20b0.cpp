#include "SoundManager-PCH.h"


#define public_6ee20e1 _public_6ee20e1
#define public_6ee20f0 _public_6ee20f0
#define public_6ee20f2 _public_6ee20f2

PROC_DECLARE(0x6ee20b0, internal_6ee20b0, public_6ee20b0);
extern "C" NAKED register_t __cdecl internal_6ee20b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x12C]
        test eax, eax
        push esi
        mov esi, 0xC
        je public_6ee20f0
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        jl public_6ee20f0
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        public_6ee20e1 : nop
        cmp ecx, dword ptr ds : [eax*4+public_6ee9100]
        je public_6ee20f2
        inc eax
        cmp eax, 0xB
        jl public_6ee20e1
        public_6ee20f0 : nop
        mov eax, esi
        public_6ee20f2 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee20b0)
    }
}

#undef public_6ee20e1
#undef public_6ee20f0
#undef public_6ee20f2
