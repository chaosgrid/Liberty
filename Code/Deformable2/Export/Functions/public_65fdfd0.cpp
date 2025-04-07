#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fdfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65fe016 _public_65fe016

PROC_DECLARE(0x65fdfd0, internal_65fdfd0, public_65fdfd0);
extern "C" NAKED register_t __cdecl internal_65fdfd0()
{
    __asm
    {
        push esi
        push 0xC
        call public_6600bb6
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_65fe016
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_66014dc
        mov dword ptr ds : [esi], offset public_66014e8
        call dword ptr ds : [public_6601000]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_66014dc @0x65fe002*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66014dc
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_65fe016 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65fdfd0)
    }
}

#undef public_65fe016
