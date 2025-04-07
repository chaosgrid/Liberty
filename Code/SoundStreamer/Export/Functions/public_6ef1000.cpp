#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1000);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3fb0);

#define public_6ef1037 _public_6ef1037

PROC_DECLARE(0x6ef1000, internal_6ef1000, public_6ef1000);
extern "C" NAKED register_t __cdecl internal_6ef1000()
{
    __asm
    {
/*FIXUP push offset public_6efe0e0 @0x6ef1000*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe0e0
        call public_6ef3fb0
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_6f010a0], eax
        jne public_6ef1037
/*FIXUP push offset public_6efe0bc @0x6ef1016*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe0bc
        push 0x32
/*FIXUP push offset public_6efe070 @0x6ef101d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef1027*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        mov eax, dword ptr ds : [public_6efc004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6ef1037 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef1000)
    }
}

#undef public_6ef1037
