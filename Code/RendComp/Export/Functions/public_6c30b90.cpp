#include "RendComp-PCH.h"


#define public_6c30ba1 _public_6c30ba1

PROC_DECLARE(0x6c30b90, internal_6c30b90, public_6c30b90);
extern "C" NAKED register_t __cdecl internal_6c30b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jge public_6c30ba1
        or eax, 0xFFFFFFFF
        ret 8
        public_6c30ba1 : nop
        mov ecx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c37854 @0x6c30ba7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37854
        push 0xE0
/*FIXUP push offset public_6c37778 @0x6c30bb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov eax, 0x100003
/*FIXUP push offset public_6c3702c @0x6c30bbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x6c30b90)
    }
}

#undef public_6c30ba1
