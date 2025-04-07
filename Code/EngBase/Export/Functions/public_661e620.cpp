#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661e620);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661e664 _public_661e664

PROC_DECLARE(0x661e620, internal_661e620, public_661e620);
extern "C" NAKED register_t __cdecl internal_661e620()
{
    __asm
    {
        push esi
        push 0xC
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_661e664
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_662a040
        mov dword ptr ds : [esi], offset public_6629568
        call dword ptr ds : [public_6629000]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_662a040 @0x661e652*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a040
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop esi
        ret 
        public_661e664 : nop
        xor esi, esi
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x661e620)
    }
}

#undef public_661e664
