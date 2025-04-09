#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_4bb695 _public_4bb695
#define public_4bb6a6 _public_4bb6a6
#define public_4bb6ae _public_4bb6ae

PROC_DECLARE(0x4bb680, internal_4bb680, public_4bb680);
extern "C" NAKED register_t __cdecl internal_4bb680()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        jne public_4bb695
        call public_42d740
        test al, al
        je public_4bb6a6
/*FIXUP public_4bb695 : nop
        push offset public_5d0234 @0x4bb695*/
  FIXUP public_4bb695 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        call public_59da10
        add esp, 4
        test eax, eax
        je public_4bb6ae
        public_4bb6a6 : nop
        mov ecx, esi
        pop esi
        jmp public_5a0760
        public_4bb6ae : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4bb680)
    }
}

#undef public_4bb695
#undef public_4bb6a6
#undef public_4bb6ae
