#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9530);

#define public_6ec955e _public_6ec955e
#define public_6ec957c _public_6ec957c
#define public_6ec959a _public_6ec959a
#define public_6ec95b8 _public_6ec95b8
#define public_6ec95d6 _public_6ec95d6
#define public_6ec95f4 _public_6ec95f4
#define public_6ec9612 _public_6ec9612

PROC_DECLARE(0x6ec9530, internal_6ec9530, public_6ec9530);
extern "C" NAKED register_t __cdecl internal_6ec9530()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [public_6fb3294]
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb5d80 @0x6ec953c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5d80
        push eax
        mov dword ptr ss : [esp+0xC], 0xC0000000
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec955e
        fld dword ptr ds : [public_6fb4658]
        pop esi
        pop ecx
        ret 0x44
        public_6ec955e : nop
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_6fb5d68 @0x6ec9562*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5d68
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec957c
        fld dword ptr ds : [public_6fb465c]
        pop esi
        pop ecx
        ret 0x44
        public_6ec957c : nop
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_6fb5d54 @0x6ec9580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5d54
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec959a
        fld dword ptr ds : [public_6fb4660]
        pop esi
        pop ecx
        ret 0x44
        public_6ec959a : nop
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb5d48 @0x6ec959e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5d48
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec95b8
        fld dword ptr ds : [public_6fb4664]
        pop esi
        pop ecx
        ret 0x44
        public_6ec95b8 : nop
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_6fb5d30 @0x6ec95bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5d30
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec95d6
        fld dword ptr ds : [public_6fb4668]
        pop esi
        pop ecx
        ret 0x44
        public_6ec95d6 : nop
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_6fb5d18 @0x6ec95da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5d18
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec95f4
        fld dword ptr ds : [public_6fb466c]
        pop esi
        pop ecx
        ret 0x44
        public_6ec95f4 : nop
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb5d04 @0x6ec95f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5d04
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec9612
        fld dword ptr ds : [public_6fb4670]
        pop esi
        pop ecx
        ret 0x44
        public_6ec9612 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 0x44
        UNREACHABLE_TRAP(0x6ec9530)
    }
}

#undef public_6ec955e
#undef public_6ec957c
#undef public_6ec959a
#undef public_6ec95b8
#undef public_6ec95d6
#undef public_6ec95f4
#undef public_6ec9612
