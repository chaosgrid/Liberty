#include "DALib-PCH.h"

PROC_DECLARE(0x65c69b0, internal_65c69b0, public_65c69b0);
extern "C" NAKED register_t __cdecl internal_65c69b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx+0xC]
        push esi
        push eax
        mov eax, dword ptr ds : [ecx+8]
        push edx
        lea esi, ds:[ecx+0x5C]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push ecx
/*FIXUP push offset public_65c7580 @0x65c69c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7580
        push esi
        call dword ptr ds : [public_65c70c8]
        add esp, 0x18
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c69b0)
    }
}
