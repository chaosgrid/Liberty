#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145a0);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);

#define public_4145b5 _public_4145b5
#define public_4145c0 _public_4145c0

PROC_DECLARE(0x4145a0, internal_4145a0, public_4145a0);
extern "C" NAKED register_t __cdecl internal_4145a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, dword ptr ds : [public_6105b0]
        je public_4145b5
        mov ecx, esi
        call public_4155c0
        public_4145b5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        jne public_4145c0
        xor eax, eax
        pop esi
        ret 
        public_4145c0 : nop
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 3
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4145a0)
    }
}

#undef public_4145b5
#undef public_4145c0
