#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488970);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_4889d9 _public_4889d9

PROC_DECLARE(0x488970, internal_488970, public_488970);
extern "C" NAKED register_t __cdecl internal_488970()
{
    __asm
    {
        sub esp, 0xC
        push esi
/*FIXUP push offset public_5d1d38 @0x488974*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1d38
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_4889d9
        lea eax, ss:[esp+0x14]
        push eax
        push 0
/*FIXUP push offset public_5d1d38 @0x48898c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1d38
/*FIXUP push offset public_5d1d38 @0x488991*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1d38
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_4889d9
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+8]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        public_4889d9 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x488970)
    }
}

#undef public_4889d9
