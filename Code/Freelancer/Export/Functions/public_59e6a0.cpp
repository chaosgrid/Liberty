#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59e6a0);

#define public_59e6b0 _public_59e6b0
#define public_59e6ca _public_59e6ca
#define public_59e6d1 _public_59e6d1
#define public_59e6d5 _public_59e6d5

PROC_DECLARE(0x59e6a0, internal_59e6a0, public_59e6a0);
extern "C" NAKED register_t __cdecl internal_59e6a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_67dbe8]
        test esi, esi
        je public_59e6d1
        nop 
        lea esp, ss:[esp]
        public_59e6b0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_59e6ca
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_59e6ca
        mov cl, byte ptr ds : [eax+0x2D0]
        test cl, cl
        jne public_59e6d5
        public_59e6ca : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_59e6b0
        public_59e6d1 : nop
        xor al, al
        pop esi
        ret 
        public_59e6d5 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59e6a0)
    }
}

#undef public_59e6b0
#undef public_59e6ca
#undef public_59e6d1
#undef public_59e6d5
