#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5784a0);

#define public_5784b4 _public_5784b4
#define public_5784bf _public_5784bf
#define public_5784c6 _public_5784c6
#define public_5784e0 _public_5784e0
#define public_5784f9 _public_5784f9
#define public_578508 _public_578508
#define public_578517 _public_578517
#define public_578539 _public_578539
#define public_578540 _public_578540
#define public_578545 _public_578545
#define public_578552 _public_578552
#define public_578567 _public_578567
#define public_578574 _public_578574

PROC_DECLARE(0x5784a0, internal_5784a0, public_5784a0);
extern "C" NAKED register_t __cdecl internal_5784a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67c258]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push ebx
        push ebp
        push esi
        push edi
        je public_5784bf
        mov edx, dword ptr ss : [esp+0x14]
        public_5784b4 : nop
        cmp edx, dword ptr ds : [eax+8]
        je public_5784c6
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_5784b4
        public_5784bf : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_5784c6 : nop
        add eax, 8
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_5784bf
        mov ebp, dword ptr ds : [eax+0x14]
        cmp ebp, dword ptr ds : [eax+0x18]
        je public_5784bf
        lea esp, ss:[esp]
        public_5784e0 : nop
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [ebp]
        push 0x10
        xor esi, esi
        call dword ptr ds : [public_5c7280]
        test ah, ah
        jns public_5784f9
        mov esi, 1
        public_5784f9 : nop
        push 0x11
        call dword ptr ds : [public_5c7280]
        test ah, ah
        jns public_578508
        or esi, 4
        public_578508 : nop
        push 0x12
        call dword ptr ds : [public_5c7280]
        test ah, ah
        jns public_578517
        or esi, 0x10
        public_578517 : nop
        and esi, ebx
        cmp esi, ebx
        jne public_578552
        test edi, edi
        jge public_578567
        xor eax, eax
        cmp edi, 0xFFFFFFFD
        je public_578540
        cmp edi, 0xFFFFFFFE
        je public_578539
        cmp edi, 0xFFFFFFFF
        jne public_578545
        mov eax, 1
        jmp public_578545
        public_578539 : nop
        mov eax, 2
        jmp public_578545
        public_578540 : nop
        mov eax, 4
        public_578545 : nop
        test dword ptr ds : [public_616850], eax
        setne al
        test al, al
        jne public_578574
        public_578552 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        add ebp, 8
        cmp ebp, ecx
        jne public_5784e0
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_578567 : nop
        push edi
        call dword ptr ds : [public_5c7280]
        test ah, ah
        js public_578574
        jmp public_578552
        public_578574 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5784a0)
    }
}

#undef public_5784b4
#undef public_5784bf
#undef public_5784c6
#undef public_5784e0
#undef public_5784f9
#undef public_578508
#undef public_578517
#undef public_578539
#undef public_578540
#undef public_578545
#undef public_578552
#undef public_578567
#undef public_578574
