#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dea5f);
CLANG_FORWARD_PROC_SYMBOL(public_65dea8d);
CLANG_FORWARD_PROC_SYMBOL(public_65df3da);

#define public_65dea74 _public_65dea74
#define public_65dea89 _public_65dea89

PROC_DECLARE(0x65dea5f, internal_65dea5f, public_65dea5f);
extern "C" NAKED register_t __cdecl internal_65dea5f()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_65dea8d
        test eax, eax
        pop ecx
        je public_65dea74
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_65dea74 : nop
        test byte ptr ds : [esi+0xD], 0x40
        je public_65dea89
        push dword ptr ds : [esi+0x10]
        call public_65df3da
        neg eax
        pop ecx
        pop esi
        sbb eax, eax
        ret 
        public_65dea89 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dea5f)
    }
}

#undef public_65dea74
#undef public_65dea89
