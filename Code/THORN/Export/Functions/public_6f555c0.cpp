#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b470);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f555c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55610);

#define public_6f555f7 _public_6f555f7
#define public_6f5560a _public_6f5560a

PROC_DECLARE(0x6f555c0, internal_6f555c0, public_6f555c0);
extern "C" NAKED register_t __cdecl internal_6f555c0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        push edi
        call public_6f4b470
        add esp, 4
        test eax, eax
        je public_6f5560a
        push esi
        call public_6f55610
        push edi
        mov esi, eax
        call public_6f4b960
        lea ecx, ds:[esi-1]
        add esp, 4
        cmp eax, ecx
        jne public_6f555f7
/*FIXUP push offset public_6f6189c @0x6f555ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6189c
        call public_6f4c7f0
        add esp, 4
        public_6f555f7 : nop
        push edi
        call public_6f4b960
        sub eax, esi
        add esp, 4
        neg eax
        sbb eax, eax
        pop esi
        inc eax
        pop edi
        ret 
        public_6f5560a : nop
        xor eax, eax
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f555c0)
    }
}

#undef public_6f555f7
#undef public_6f5560a
