#include "Freelancer-PCH.h"


#define public_451088 _public_451088

PROC_DECLARE(0x451070, internal_451070, public_451070);
extern "C" NAKED register_t __cdecl internal_451070()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        je public_451088
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x30]
        public_451088 : nop
        mov ecx, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x29B
/*FIXUP push offset public_5ccdf0 @0x451097*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x4510a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x451070)
    }
}

#undef public_451088
