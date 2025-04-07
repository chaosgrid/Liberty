#include "Freelancer-PCH.h"


#define public_450fa0 _public_450fa0

PROC_DECLARE(0x450f80, internal_450f80, public_450f80);
extern "C" NAKED register_t __cdecl internal_450f80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        je public_450fa0
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x1C]
        public_450fa0 : nop
        mov ecx, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x274
/*FIXUP push offset public_5ccdf0 @0x450faf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x450fb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x450f80)
    }
}

#undef public_450fa0
