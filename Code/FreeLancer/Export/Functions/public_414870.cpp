#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_414891 _public_414891

PROC_DECLARE(0x414870, internal_414870, public_414870);
extern "C" NAKED register_t __cdecl internal_414870()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        dec ecx
        push edi
        mov edi, ecx
        test edi, edi
        mov dword ptr ds : [esi+0x10], ecx
        jg public_414891
        mov ecx, esi
        call public_414c50
        push esi
        call public_5b7e1d
        add esp, 4
        public_414891 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x414870)
    }
}

#undef public_414891
