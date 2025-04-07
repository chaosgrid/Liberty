#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438160);
CLANG_FORWARD_PROC_SYMBOL(public_4381c0);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_482d80);
CLANG_FORWARD_PROC_SYMBOL(public_482e00);
CLANG_FORWARD_PROC_SYMBOL(public_4c55d0);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);

#define public_482e2e _public_482e2e
#define public_482e38 _public_482e38
#define public_482e72 _public_482e72
#define public_482ea1 _public_482ea1
#define public_482eb6 _public_482eb6
#define public_482ed2 _public_482ed2
#define public_482f06 _public_482f06

PROC_DECLARE(0x482e00, internal_482e00, public_482e00);
extern "C" NAKED register_t __cdecl internal_482e00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+0x978], 3
        jne public_482f06
        mov eax, dword ptr ds : [public_66873c]
        test eax, eax
        jbe public_482e2e
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov esi, eax
        test esi, esi
        jne public_482e38
        public_482e2e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_482e38 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        mov ecx, esi
        call public_438160
        fstp dword ptr ss : [esp+0x10]
        call public_4c55d0
        mov ebp, eax
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_4381c0
        fcomp dword ptr ds : [edi+0x990]
        fnstsw ax
        test ah, 0x41
        jne public_482e72
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_482e72 : nop
        test ebp, ebp
        jl public_482ea1
        cmp ebp, 0x3E7
        jge public_482ea1
        fild dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_482ea1
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_482ea1
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_482ea1 : nop
        mov eax, dword ptr ds : [edi+0x974]
        mov ecx, dword ptr ds : [eax+0x32C]
        test ecx, ecx
        je public_482eb6
        cmp ecx, 2
        jne public_482ed2
        public_482eb6 : nop
        mov ecx, dword ptr ds : [eax+0x330]
        push 1
        push ebx
        call public_585f20
        test eax, eax
        jne public_482ed2
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_482ed2 : nop
        mov eax, dword ptr ds : [edi+0x974]
        cmp dword ptr ds : [eax+0x32C], 1
        jne public_482f06
        push ebx
        call dword ptr ds : [public_5c6360]
        mov ecx, dword ptr ds : [edi+0x974]
        push eax
        add ecx, 0x34C
        push ecx
        call public_482d80
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_482f06 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x482e00)
    }
}

#undef public_482e2e
#undef public_482e38
#undef public_482e72
#undef public_482ea1
#undef public_482eb6
#undef public_482ed2
#undef public_482f06
