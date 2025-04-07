#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62f0611 _public_62f0611
#define public_62f063a _public_62f063a

PROC_DECLARE(0x62f05d0, internal_62f05d0, public_62f05d0);
extern "C" NAKED register_t __cdecl internal_62f05d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        cmp eax, 0xFFFFFFFF
        push esi
        jne public_62f063a
        mov eax, dword ptr ds : [ecx+0xC]
        mov dl, byte ptr ds : [eax]
        add ecx, 8
        test dl, dl
        mov esi, 0x100001
        jne public_62f0611
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x218
/*FIXUP push offset public_63a123c @0x62f05fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a1320 @0x62f05ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1320
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_62f0611 : nop
        push eax
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x21E
/*FIXUP push offset public_63a123c @0x62f0623*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a12b0 @0x62f0628*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a12b0
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x18
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_62f063a : nop
        mov edx, dword ptr ds : [public_6399040]
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x5C]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f05d0)
    }
}

#undef public_62f0611
#undef public_62f063a
