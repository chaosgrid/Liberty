#include "Common-PCH.h"


#define public_6303123 _public_6303123
#define public_6303130 _public_6303130

PROC_DECLARE(0x63030b0, internal_63030b0, public_63030b0);
extern "C" NAKED register_t __cdecl internal_63030b0()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        push esi
        push 0
        push 0
        push 0x8027
        push 0
        call dword ptr ds : [public_6399378]
        test eax, eax
        jne public_6303123
        push 0x104
        lea eax, ss:[esp+8]
        push esi
        push eax
        call dword ptr ds : [public_63992e0]
        push 0
/*FIXUP push offset public_63a269c @0x63030e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a269c
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0
        push esi
        mov byte ptr ss : [esp+0x127], 0
        call dword ptr ds : [public_6399208]
        push 0
        push esi
        call dword ptr ds : [public_639922c]
        add esp, 0x28
        test eax, eax
        je public_6303130
        push esi
        call dword ptr ds : [public_6399228]
        add esp, 4
        test eax, eax
        je public_6303130
        mov byte ptr ds : [esi], 0
        public_6303123 : nop
        mov byte ptr ds : [esi], 0
        xor al, al
        pop esi
        add esp, 0x104
        ret 
        public_6303130 : nop
        mov al, 1
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x63030b0)
    }
}

#undef public_6303123
#undef public_6303130
