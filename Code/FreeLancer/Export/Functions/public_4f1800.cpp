#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4f1800);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4f1858 _public_4f1858
#define public_4f18ad _public_4f18ad
#define public_4f18b2 _public_4f18b2
#define public_4f18c7 _public_4f18c7

PROC_DECLARE(0x4f1800, internal_4f1800, public_4f1800);
extern "C" NAKED register_t __cdecl internal_4f1800()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_42d680
        fadd dword ptr ds : [esi+0x42C]
        fst dword ptr ds : [esi+0x42C]
        fcom dword ptr ds : [public_5d8ef4]
        fnstsw ax
        test ah, 5
        jnp public_4f18c7
        fcomp dword ptr ds : [esi+0x430]
        fnstsw ax
        test ah, 1
        jne public_4f1858
        mov dword ptr ds : [esi+0x42C], 0
        mov eax, dword ptr ds : [public_5d8ef4]
        mov dword ptr ds : [esi+0x430], eax
        mov al, byte ptr ds : [esi+0x434]
        test al, al
        sete cl
        mov byte ptr ds : [esi+0x434], cl
        public_4f1858 : nop
        call public_54baf0
        test eax, eax
        je public_4f18ad
        add eax, 0xC
        test eax, eax
        je public_4f18ad
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4f18ad
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_4f18ad
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_4f18ad
        mov ecx, eax
        call dword ptr ds : [public_5c65b4]
        fcomp dword ptr ds : [public_5d8ef8]
        fnstsw ax
        test ah, 5
        jp public_4f18ad
        mov al, byte ptr ds : [esi+0x434]
        test al, al
        jne public_4f18ad
        xor eax, eax
        jmp public_4f18b2
        public_4f18ad : nop
        mov eax, 1
        public_4f18b2 : nop
        mov ecx, dword ptr ds : [esi+0x414]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        pop esi
        ret 
        public_4f18c7 : nop
        fstp st(0)
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4f1800)
    }
}

#undef public_4f1858
#undef public_4f18ad
#undef public_4f18b2
#undef public_4f18c7
