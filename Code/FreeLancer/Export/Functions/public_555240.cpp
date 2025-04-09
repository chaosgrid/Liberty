#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_555240);

#define public_555294 _public_555294
#define public_5552b5 _public_5552b5
#define public_5552c3 _public_5552c3
#define public_5552ca _public_5552ca

PROC_DECLARE(0x555240, internal_555240, public_555240);
extern "C" NAKED register_t __cdecl internal_555240()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        xor bl, bl
        call public_54baf0
        test eax, eax
        je public_5552c3
        add eax, 0xC
        test eax, eax
        je public_5552c3
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5552c3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_5552c3
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        mov edi, eax
        test edi, edi
        je public_5552c3
        mov eax, dword ptr ds : [edi+0x824]
        xor ebp, ebp
        test eax, eax
        jle public_5552c3
        lea esi, ds:[edi+0x24]
        public_555294 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5552b5
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_5552b5
        push eax
        call public_54baf0
        push eax
        call public_45a490
        add esp, 8
        cmp eax, 0xFFFFFFFF
        je public_5552ca
        public_5552b5 : nop
        mov eax, dword ptr ds : [edi+0x824]
        inc ebp
        add esi, 8
        cmp ebp, eax
        jl public_555294
        public_5552c3 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 
        public_5552ca : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x555240)
    }
}

#undef public_555294
#undef public_5552b5
#undef public_5552c3
#undef public_5552ca
