#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284370);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ed0);

#define public_62b7954 _public_62b7954

PROC_DECLARE(0x62b7930, internal_62b7930, public_62b7930);
extern "C" NAKED register_t __cdecl internal_62b7930()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_62b7954
        lea eax, ds:[esi+0xD0]
        push eax
        push 1
        push esi
        call public_6284370
        fstp dword ptr ds : [esi+0xDC]
        add esp, 0xC
        pop esi
        ret 
        public_62b7954 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639e850 @0x62b795a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e850
        push 0xC8
/*FIXUP push offset public_639e820 @0x62b7964*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e820
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62b796e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov ecx, esi
        pop esi
        jmp public_62b5ed0
        UNREACHABLE_TRAP(0x62b7930)
    }
}

#undef public_62b7954
