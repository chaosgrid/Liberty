#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_414fa1 _public_414fa1

PROC_DECLARE(0x414f80, internal_414f80, public_414f80);
extern "C" NAKED register_t __cdecl internal_414f80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        dec ecx
        push edi
        mov edi, ecx
        test edi, edi
        mov dword ptr ds : [esi+0x18], ecx
        jg public_414fa1
        mov ecx, esi
        call public_4154f0
        push esi
        call public_5b7e1d
        add esp, 4
        public_414fa1 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x414f80)
    }
}

#undef public_414fa1
