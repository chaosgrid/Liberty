#include "Common-PCH.h"


#define public_62f76ee _public_62f76ee

PROC_DECLARE(0x62f76b0, internal_62f76b0, public_62f76b0);
extern "C" NAKED register_t __cdecl internal_62f76b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63ecd20]
        sub esp, 8
        cmp eax, 0xFFFFFFFF
        jne public_62f76ee
/*FIXUP push offset public_63a1d70 @0x62f76bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d70
        mov dword ptr ss : [esp+4], offset public_63a1d70
        call dword ptr ds : [public_6399024]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [public_63ecd20], eax
        public_62f76ee : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f76b0)
    }
}

#undef public_62f76ee
