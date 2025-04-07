#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62956d0);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);

#define public_629a0d5 _public_629a0d5
#define public_629a0fa _public_629a0fa
#define public_629a11e _public_629a11e
#define public_629a125 _public_629a125

PROC_DECLARE(0x629a0a0, internal_629a0a0, public_629a0a0);
extern "C" NAKED register_t __cdecl internal_629a0a0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x4C]
        mov cl, byte ptr ds : [eax+0x78]
        test cl, cl
        je public_629a11e
        push 0x10000
        lea ecx, ss:[esp+8]
        call public_629b990
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xE4
        call public_629b440
        test eax, eax
        je public_629a0fa
        public_629a0d5 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [edx+8]
        cmp edx, dword ptr ds : [ecx+8]
        je public_629a125
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+4]
        push eax
        add ecx, 0xE4
        call public_629b440
        test eax, eax
        jne public_629a0d5
        public_629a0fa : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push 0x197
/*FIXUP push offset public_639d304 @0x629a104*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d304
        mov eax, 0x100002
/*FIXUP push offset public_639d368 @0x629a10e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d368
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_629a11e : nop
        pop esi
        add esp, 0x10
        ret 4
        public_629a125 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, eax
        call public_62956d0
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x629a0a0)
    }
}

#undef public_629a0d5
#undef public_629a0fa
#undef public_629a11e
#undef public_629a125
