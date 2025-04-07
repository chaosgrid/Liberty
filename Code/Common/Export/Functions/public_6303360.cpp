#include "Common-PCH.h"


#define public_6303395 _public_6303395

PROC_DECLARE(0x6303360, internal_6303360, public_6303360);
extern "C" NAKED register_t __cdecl internal_6303360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        sub esp, 0x190
        test ecx, ecx
        jne public_6303395
        cmp dword ptr ds : [eax], 0
        jne public_6303395
/*FIXUP push offset public_63a270c @0x6303376*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a270c
/*FIXUP push offset public_63fcc78 @0x630337b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fcc78
        call dword ptr ds : [public_6399224]
        add esp, 8
        mov eax, offset public_63fcc78
        add esp, 0x190
        ret 
        public_6303395 : nop
        push esi
        lea ecx, ss:[esp+4]
        push ecx
        push eax
        call dword ptr ds : [public_6399134]
        push 0x40
        lea edx, ss:[esp+0x58]
        push edx
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 0xE
        push 0x400
        call dword ptr ds : [public_639912c]
        push 0x40
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push 0x400
        call dword ptr ds : [public_6399130]
        mov esi, dword ptr ds : [public_6399340]
        push 0x40
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        call esi
        push 0x40
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0xA8]
        push eax
        call esi
        lea ecx, ss:[esp+0xAC]
        push ecx
/*FIXUP push offset public_63fcc78 @0x6303408*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fcc78
        call dword ptr ds : [public_6399224]
        mov esi, dword ptr ds : [public_6399220]
/*FIXUP push offset public_63a2708 @0x6303419*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2708
/*FIXUP push offset public_63fcc78 @0x630341e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fcc78
        call esi
        lea edx, ss:[esp+0x13C]
        push edx
/*FIXUP push offset public_63fcc78 @0x630342d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fcc78
        call esi
        add esp, 0x30
        pop esi
        mov eax, offset public_63fcc78
        add esp, 0x190
        ret 
        UNREACHABLE_TRAP(0x6303360)
    }
}

#undef public_6303395
