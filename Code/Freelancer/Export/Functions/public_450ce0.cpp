#include "Freelancer-PCH.h"


#define public_450cf0 _public_450cf0

PROC_DECLARE(0x450ce0, internal_450ce0, public_450ce0);
extern "C" NAKED register_t __cdecl internal_450ce0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x6C]
        test ecx, ecx
        je public_450cf0
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x44]
        mov edi, edi
        public_450cf0 : nop
        mov edx, dword ptr ds : [eax+0x64]
        mov eax, dword ptr ds : [public_5c6d18]
        push edx
        push 0x1FF
/*FIXUP push offset public_5ccdf0 @0x450cfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov ecx, 0x100001
/*FIXUP push offset public_5ccdb8 @0x450d08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x450ce0)
    }
}

#undef public_450cf0
