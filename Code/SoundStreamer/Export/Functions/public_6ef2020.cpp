#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2020);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4000);
CLANG_FORWARD_PROC_SYMBOL(public_6ef400c);

#define public_6ef2087 _public_6ef2087

PROC_DECLARE(0x6ef2020, internal_6ef2020, public_6ef2020);
extern "C" NAKED register_t __cdecl internal_6ef2020()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        push edi
        lea edi, ds:[esi+0x28]
        je public_6ef2087
        push 0
        push eax
        call public_6ef4000
        mov ecx, dword ptr ds : [esi+0xD4]
        push 4
        push 0
        push 0
        push 0
        lea eax, ds:[esi+0xD8]
        push eax
        mov dword ptr ds : [edi], 0
        mov edx, dword ptr ds : [public_6f010a0]
        push ecx
        push edx
        push edi
        call public_6ef400c
        test eax, eax
        je public_6ef2087
/*FIXUP push offset public_6efe228 @0x6ef2063*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe228
        push 0x3FD
/*FIXUP push offset public_6efe070 @0x6ef206d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef2077*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        mov eax, dword ptr ds : [public_6efc004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6ef2087 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef2020)
    }
}

#undef public_6ef2087
