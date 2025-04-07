#include "EngBase-PCH.h"


#define public_6625e4c _public_6625e4c

PROC_DECLARE(0x6625e00, internal_6625e00, public_6625e00);
extern "C" NAKED register_t __cdecl internal_6625e00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        lea eax, ds:[ecx-4]
        lea esi, ds:[ecx+0x2C]
        neg eax
        sbb eax, eax
        push esi
        and eax, ecx
/*FIXUP push offset public_662a278 @0x6625e12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a278
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6625e4c
        mov edx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662ab48 @0x6625e26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662ab48
        push 0xDC
        mov eax, 0x100001
/*FIXUP push offset public_662aac0 @0x6625e35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662aac0
/*FIXUP push offset public_662a530 @0x6625e3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a530
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6625e4c : nop
        mov esi, dword ptr ds : [esi]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6625e00)
    }
}

#undef public_6625e4c
