#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_52a7d0);

#define public_52a7b0 _public_52a7b0
#define public_52a7c4 _public_52a7c4

PROC_DECLARE(0x52a7a0, internal_52a7a0, public_52a7a0);
extern "C" NAKED register_t __cdecl internal_52a7a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6880]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_52a7c4
        public_52a7b0 : nop
        lea ecx, ds:[esi+0xC]
        push ecx
        mov ecx, offset public_675400
        call public_52a7d0
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_52a7b0
        public_52a7c4 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x52a7a0)
    }
}

#undef public_52a7b0
#undef public_52a7c4
