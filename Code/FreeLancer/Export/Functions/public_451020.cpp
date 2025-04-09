#include "Freelancer-PCH.h"


#define public_451038 _public_451038

PROC_DECLARE(0x451020, internal_451020, public_451020);
extern "C" NAKED register_t __cdecl internal_451020()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        je public_451038
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x2C]
        public_451038 : nop
        mov ecx, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x28E
/*FIXUP push offset public_5ccdf0 @0x451047*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x451051*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x451020)
    }
}

#undef public_451038
