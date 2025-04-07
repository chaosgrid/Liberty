#include "Server-PCH.h"


#define public_6d17eb5 _public_6d17eb5

PROC_DECLARE(0x6d17e90, internal_6d17e90, public_6d17e90);
extern "C" NAKED register_t __cdecl internal_6d17e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push eax
        xor esi, esi
        call dword ptr ds : [public_6d647b8]
        mov ecx, eax
        call dword ptr ds : [public_6d647bc]
        test eax, eax
        je public_6d17eb5
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        ret 
        public_6d17eb5 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
        push edi
        push 0x78
/*FIXUP push offset public_6d68608 @0x6d17ebe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68608
        mov eax, 0x100001
/*FIXUP push offset public_6d685d8 @0x6d17ec8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d685d8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d17e90)
    }
}

#undef public_6d17eb5
