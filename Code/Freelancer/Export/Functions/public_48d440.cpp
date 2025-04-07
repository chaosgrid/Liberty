#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_48d474 _public_48d474
#define public_48d487 _public_48d487
#define public_48d496 _public_48d496

PROC_DECLARE(0x48d440, internal_48d440, public_48d440);
extern "C" NAKED register_t __cdecl internal_48d440()
{
    __asm
    {
        push edi
        mov edi, ecx
        call public_42d680
        fstp st(0)
        mov ecx, edi
        call public_5a17b0
        mov al, byte ptr ds : [edi+0x344]
        test al, al
        je public_48d496
        push 0
        mov byte ptr ds : [edi+0x344], 0
        call public_4424f0
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 4
        test eax, eax
        je public_48d487
        push esi
        public_48d474 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_48d474
        pop esi
        public_48d487 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_48d496 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x48d440)
    }
}

#undef public_48d474
#undef public_48d487
#undef public_48d496
