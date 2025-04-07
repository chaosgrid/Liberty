#include "Common-PCH.h"


#define public_6302f83 _public_6302f83
#define public_6302f90 _public_6302f90

PROC_DECLARE(0x6302f10, internal_6302f10, public_6302f10);
extern "C" NAKED register_t __cdecl internal_6302f10()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        push esi
        push 0
        push 0
        push 0x801C
        push 0
        call dword ptr ds : [public_6399378]
        test eax, eax
        jne public_6302f83
        push 0x104
        lea eax, ss:[esp+8]
        push esi
        push eax
        call dword ptr ds : [public_63992e0]
        push 0
/*FIXUP push offset public_63a2684 @0x6302f47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2684
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
        je public_6302f90
        push esi
        call dword ptr ds : [public_6399228]
        add esp, 4
        test eax, eax
        je public_6302f90
        mov byte ptr ds : [esi], 0
        public_6302f83 : nop
        mov byte ptr ds : [esi], 0
        xor al, al
        pop esi
        add esp, 0x104
        ret 
        public_6302f90 : nop
        mov al, 1
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6302f10)
    }
}

#undef public_6302f83
#undef public_6302f90
