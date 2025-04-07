#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee71f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee7243 _public_6ee7243
#define public_6ee72a2 _public_6ee72a2
#define public_6ee72b2 _public_6ee72b2
#define public_6ee72d7 _public_6ee72d7

PROC_DECLARE(0x6ee71f0, internal_6ee71f0, public_6ee71f0);
extern "C" NAKED register_t __cdecl internal_6ee71f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        push esi
        push edi
        jne public_6ee72d7
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [public_6ee9018]
        mov edi, dword ptr ds : [public_6ee9004]
        call edi
        test eax, eax
        jne public_6ee7243
        mov ecx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eead5c @0x6ee721a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eead5c
        push 0x10B4
/*FIXUP push offset public_6eea070 @0x6ee7224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee722e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_6ee7243 : nop
        push 0xC
        call public_6ee8de2
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ee72b2
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6eea388
        mov dword ptr ds : [esi], offset public_6ee94a0
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6eea388 @0x6ee7270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea388
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6ee72a2
/*FIXUP push offset public_6eead24 @0x6ee727e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eead24
        push 0x10BA
/*FIXUP push offset public_6eea070 @0x6ee7288*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee7292*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6ee72a2 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_6ee72b2 : nop
        mov edx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eeace8 @0x6ee72b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeace8
        push 0x10C0
/*FIXUP push offset public_6eea070 @0x6ee72c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee72cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6ee72d7 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ee71f0)
    }
}

#undef public_6ee7243
#undef public_6ee72a2
#undef public_6ee72b2
#undef public_6ee72d7
