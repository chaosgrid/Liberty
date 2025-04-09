#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_474520);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_474584 _public_474584

PROC_DECLARE(0x474520, internal_474520, public_474520);
extern "C" NAKED register_t __cdecl internal_474520()
{
    __asm
    {
        sub esp, 0xC
        push esi
/*FIXUP push offset public_5d052c @0x474524*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d052c
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_474584
        push eax
        push eax
/*FIXUP push offset public_5d052c @0x474537*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d052c
/*FIXUP push offset public_5d052c @0x47453c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d052c
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_474584
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+8]
        push ecx
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        public_474584 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x474520)
    }
}

#undef public_474584
