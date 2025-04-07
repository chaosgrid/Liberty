#include "Common-PCH.h"


#define public_633c69b _public_633c69b
#define public_633c6b0 _public_633c6b0

PROC_DECLARE(0x633c650, internal_633c650, public_633c650);
extern "C" NAKED register_t __cdecl internal_633c650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a9b4]
        sub esp, 0x104
        test eax, eax
        je public_633c69b
        mov ecx, dword ptr ds : [eax]
        push 0x104
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ss : [esp+0x10C]
        mov edx, dword ptr ss : [esp+0x108]
        push 0
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        push 0
        push edx
        call dword ptr ds : [public_6399208]
        add esp, 0x14
        add esp, 0x104
        ret 
        public_633c69b : nop
        mov eax, dword ptr ss : [esp+0x10C]
        mov edx, dword ptr ss : [esp+0x108]
        sub edx, eax
        nop 
        lea esp, ss:[esp]
        public_633c6b0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_633c6b0
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x633c650)
    }
}

#undef public_633c69b
#undef public_633c6b0
