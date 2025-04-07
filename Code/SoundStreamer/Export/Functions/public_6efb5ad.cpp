#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb5ad);
CLANG_FORWARD_PROC_SYMBOL(public_6efb5e8);
CLANG_FORWARD_PROC_SYMBOL(public_6efb64d);
CLANG_FORWARD_PROC_SYMBOL(public_6efbb1e);

#define public_6efb5bf _public_6efb5bf
#define public_6efb5cf _public_6efb5cf
#define public_6efb5e4 _public_6efb5e4

PROC_DECLARE(0x6efb5ad, internal_6efb5ad, public_6efb5ad);
extern "C" NAKED register_t __cdecl internal_6efb5ad()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6efb5bf
        push esi
        call public_6efb64d
        pop ecx
        pop esi
        ret 
        public_6efb5bf : nop
        push esi
        call public_6efb5e8
        test eax, eax
        pop ecx
        je public_6efb5cf
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6efb5cf : nop
        test byte ptr ds : [esi+0xD], 0x40
        je public_6efb5e4
        push dword ptr ds : [esi+0x10]
        call public_6efbb1e
        neg eax
        pop ecx
        pop esi
        sbb eax, eax
        ret 
        public_6efb5e4 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efb5ad)
    }
}

#undef public_6efb5bf
#undef public_6efb5cf
#undef public_6efb5e4
