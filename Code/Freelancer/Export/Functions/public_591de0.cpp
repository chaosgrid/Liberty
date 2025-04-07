#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591de0);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);

#define public_591dfe _public_591dfe
#define public_591e10 _public_591e10
#define public_591e1e _public_591e1e

PROC_DECLARE(0x591de0, internal_591de0, public_591de0);
extern "C" NAKED register_t __cdecl internal_591de0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x88]
        test ecx, ecx
        je public_591dfe
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x88], 0
        public_591dfe : nop
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_591e1e
        mov edi, edi
        public_591e10 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_591e10
        public_591e1e : nop
        push edi
        call public_59dc00
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x591de0)
    }
}

#undef public_591dfe
#undef public_591e10
#undef public_591e1e
