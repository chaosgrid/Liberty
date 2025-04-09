#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ad30);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);

#define public_41ad68 _public_41ad68
#define public_41ad6c _public_41ad6c
#define public_41ad73 _public_41ad73
#define public_41ad97 _public_41ad97
#define public_41adc8 _public_41adc8

PROC_DECLARE(0x41ad30, internal_41ad30, public_41ad30);
extern "C" NAKED register_t __cdecl internal_41ad30()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        push 1
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], 0
        call public_5b3510
        fcomp dword ptr ds : [public_5c75dc]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_41ad68
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov bl, 1
        jne public_41ad6c
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 8
        public_41ad68 : nop
        xor bl, bl
        jmp public_41ad97
        public_41ad6c : nop
        jge public_41ad73
        mov esi, 0x80
        public_41ad73 : nop
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 4
        push eax
        call dword ptr ds : [ecx+0xC]
        public_41ad97 : nop
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        add edi, 4
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test bl, bl
        mov esi, eax
        je public_41adc8
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0xC]
        public_41adc8 : nop
        xor eax, eax
        pop edi
        test esi, esi
        pop esi
        setge al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x41ad30)
    }
}

#undef public_41ad68
#undef public_41ad6c
#undef public_41ad73
#undef public_41ad97
#undef public_41adc8
