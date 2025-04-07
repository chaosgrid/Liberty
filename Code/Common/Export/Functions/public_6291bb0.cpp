#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6303250);

#define public_6291c25 _public_6291c25
#define public_6291c46 _public_6291c46
#define public_6291c61 _public_6291c61

PROC_DECLARE(0x6291bb0, internal_6291bb0, public_6291bb0);
extern "C" NAKED register_t __cdecl internal_6291bb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+0x2E0]
        sub esp, 0x400
        test cl, cl
        je public_6291c61
        mov edx, dword ptr ss : [esp+0x408]
        lea ecx, ss:[esp+0x40C]
        push ecx
        push edx
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [public_63991f4]
        add esp, 0xC
        call public_6303250
        test al, al
        jne public_6291c25
        push esi
/*FIXUP push offset public_639c46c @0x6291bf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c46c
/*FIXUP push offset public_639c458 @0x6291bf5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c458
        call dword ptr ds : [public_6399288]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov esi, eax
/*FIXUP push offset public_639c454 @0x6291c07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c454
        push esi
        call dword ptr ds : [public_63991e8]
        push esi
        call dword ptr ds : [public_63992d4]
        add esp, 0x18
        pop esi
        add esp, 0x400
        ret 
        public_6291c25 : nop
        mov eax, dword ptr ds : [public_63fc104]
        test eax, eax
        jne public_6291c46
/*FIXUP push offset public_639c450 @0x6291c2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c450
/*FIXUP push offset public_639c438 @0x6291c33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c438
        call dword ptr ds : [public_6399288]
        add esp, 8
        mov dword ptr ds : [public_63fc104], eax
        public_6291c46 : nop
        push eax
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [public_63992d8]
        mov eax, dword ptr ds : [public_63fc104]
        push eax
        call dword ptr ds : [public_63992dc]
        add esp, 0xC
        public_6291c61 : nop
        add esp, 0x400
        ret 
        UNREACHABLE_TRAP(0x6291bb0)
    }
}

#undef public_6291c25
#undef public_6291c46
#undef public_6291c61
