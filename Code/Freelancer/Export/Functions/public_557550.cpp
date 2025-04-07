#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_557550);

PROC_DECLARE(0x557550, internal_557550, public_557550);
extern "C" NAKED register_t __cdecl internal_557550()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
/*FIXUP push offset public_5e1420 @0x557555*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1420
        call public_41c7e0
        mov edi, dword ptr ds : [public_5c6d14]
/*FIXUP push offset public_5db6f8 @0x557565*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db6f8
        mov esi, eax
        mov dword ptr ss : [esp+0x10], offset public_5db6f8
        call edi
        add esp, 8
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6799c0 @0x557586*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6799c0
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
/*FIXUP push offset public_5da4b0 @0x557594*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4b0
        mov dword ptr ss : [esp+0xC], offset public_5da4b0
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6799c4 @0x5575b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6799c4
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x557550)
    }
}
