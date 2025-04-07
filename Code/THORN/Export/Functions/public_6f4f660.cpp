#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);

#define public_6f4f689 _public_6f4f689

PROC_DECLARE(0x6f4f660, internal_6f4f660, public_6f4f660);
extern "C" NAKED register_t __cdecl internal_6f4f660()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b4c0
        add esp, 8
        test eax, eax
        jne public_6f4f689
/*FIXUP push offset public_6f60948 @0x6f4f67b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60948
        push edi
        call public_6f4f570
        add esp, 8
        public_6f4f689 : nop
        push esi
        call public_6f4b540
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f660)
    }
}

#undef public_6f4f689
