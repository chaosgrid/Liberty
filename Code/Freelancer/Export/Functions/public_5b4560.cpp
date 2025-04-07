#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022b0);
CLANG_FORWARD_PROC_SYMBOL(public_5488a0);

#define public_5b457c _public_5b457c
#define public_5b457e _public_5b457e
#define public_5b459d _public_5b459d
#define public_5b45af _public_5b45af

PROC_DECLARE(0x5b4560, internal_5b4560, public_5b4560);
extern "C" NAKED register_t __cdecl internal_5b4560()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        fcomp qword ptr ds : [public_5debf8]
        push edi
        mov edi, ecx
        fnstsw ax
        test ah, 5
        jp public_5b457c
        mov eax, 1
        jmp public_5b457e
        public_5b457c : nop
        xor eax, eax
        public_5b457e : nop
        test al, al
        fld dword ptr ss : [esp+0xC]
        mov byte ptr ds : [edi+0x20], al
        jne public_5b459d
        fsub qword ptr ds : [public_5debf8]
        fmul qword ptr ds : [public_5db628]
        fadd qword ptr ds : [public_5c89b8]
        jmp public_5b45af
        public_5b459d : nop
        fmul qword ptr ds : [public_5e6fd8]
        fmul qword ptr ds : [public_5c75e8]
        fadd qword ptr ds : [public_5c75e8]
        public_5b45af : nop
        fstp dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edi+0x24]
        push ecx
        push eax
        call public_4022b0
        lea esi, ds:[edi+0x1C]
        push esi
        call dword ptr ds : [public_5c6b9c]
        push esi
        call dword ptr ds : [public_5c6b98]
        push esi
        call dword ptr ds : [public_5c6b88]
        push esi
        call dword ptr ds : [public_5c6b94]
        mov edx, dword ptr ds : [edi+0x24]
        push edx
        call public_5488a0
        add esp, 0x1C
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5b4560)
    }
}

#undef public_5b457c
#undef public_5b457e
#undef public_5b459d
#undef public_5b45af
