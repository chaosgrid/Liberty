#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3890);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);

#define public_6ef38e7 _public_6ef38e7
#define public_6ef3900 _public_6ef3900

PROC_DECLARE(0x6ef3890, internal_6ef3890, public_6ef3890);
extern "C" NAKED register_t __cdecl internal_6ef3890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        push esi
        je public_6ef38e7
        dec eax
        jne public_6ef3900
        push 0xC
        call public_6ef4a65
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ef3900
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6efe3c8
        mov dword ptr ds : [esi], offset public_6efc1e4
        call dword ptr ds : [public_6efc000]
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6efe3c8 @0x6ef38ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe3c8
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov eax, 1
        pop esi
        ret 0xC
        public_6ef38e7 : nop
        mov ecx, dword ptr ds : [public_6f010a4]
        test ecx, ecx
        je public_6ef3900
        call public_6ef2bb0
        mov dword ptr ds : [public_6f010a4], 0
        public_6ef3900 : nop
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3890)
    }
}

#undef public_6ef38e7
#undef public_6ef3900
