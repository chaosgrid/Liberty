#include "Server-PCH.h"


#define public_6d17f00 _public_6d17f00

PROC_DECLARE(0x6d17ee0, internal_6d17ee0, public_6d17ee0);
extern "C" NAKED register_t __cdecl internal_6d17ee0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        xor esi, esi
        call dword ptr ds : [public_6d647b8]
        mov ecx, eax
        call dword ptr ds : [public_6d647c0]
        test eax, eax
        je public_6d17f00
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        ret 
        public_6d17f00 : nop
        push edi
        push 0x87
/*FIXUP push offset public_6d68608 @0x6d17f06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68608
        mov eax, 0x100001
/*FIXUP push offset public_6d68634 @0x6d17f10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68634
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d17ee0)
    }
}

#undef public_6d17f00
