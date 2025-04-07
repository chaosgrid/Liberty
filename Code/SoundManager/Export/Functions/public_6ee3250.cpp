#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);

#define public_6ee32b6 _public_6ee32b6
#define public_6ee32c3 _public_6ee32c3
#define public_6ee32c9 _public_6ee32c9

PROC_DECLARE(0x6ee3250, internal_6ee3250, public_6ee3250);
extern "C" NAKED register_t __cdecl internal_6ee3250()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        je public_6ee32c9
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6ee31d0
        test al, al
        je public_6ee32c3
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        push edi
/*FIXUP push offset public_6eea240 @0x6ee3278*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea240
        push esi
        call dword ptr ds : [edx]
        test eax, eax
        je public_6ee32b6
/*FIXUP push offset public_6eea214 @0x6ee3284*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea214
        push 0x627
/*FIXUP push offset public_6eea070 @0x6ee328e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee3298*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        add esp, 0x14
        push esi
        call dword ptr ds : [ecx+8]
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6ee32b6 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_6ee32c3 : nop
        mov dword ptr ds : [edi], 0
        public_6ee32c9 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ee3250)
    }
}

#undef public_6ee32b6
#undef public_6ee32c3
#undef public_6ee32c9
