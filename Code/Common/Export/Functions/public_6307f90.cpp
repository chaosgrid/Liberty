#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307f90);

#define public_6307fb7 _public_6307fb7

PROC_DECLARE(0x6307f90, internal_6307f90, public_6307f90);
extern "C" NAKED register_t __cdecl internal_6307f90()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_639910c]
        test eax, eax
        je public_6307fb7
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        add esp, 8
        ret 
/*FIXUP public_6307fb7 : nop
        push offset public_63a3120 @0x6307fb7*/
  FIXUP public_6307fb7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3120
        push 0x56
/*FIXUP push offset public_63a30f8 @0x6307fbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x6307fc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x14
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6307f90)
    }
}

#undef public_6307fb7
