#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415850);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_440ac0);
CLANG_FORWARD_PROC_SYMBOL(public_441700);
CLANG_FORWARD_PROC_SYMBOL(public_449d10);
CLANG_FORWARD_PROC_SYMBOL(public_44c4a0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);

#define public_43ee9a _public_43ee9a
#define public_43eea5 _public_43eea5
#define public_43eee8 _public_43eee8
#define public_43eef8 _public_43eef8
#define public_43ef13 _public_43ef13
#define public_43ef29 _public_43ef29
#define public_43ef35 _public_43ef35
#define public_43ef3f _public_43ef3f
#define public_43ef78 _public_43ef78
#define public_43ef96 _public_43ef96
#define public_43efb3 _public_43efb3
#define public_43efbb _public_43efbb

PROC_DECLARE(0x43ee80, internal_43ee80, public_43ee80);
extern "C" NAKED register_t __cdecl internal_43ee80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        cmp eax, 0x26
        push ebx
        push esi
        push edi
        mov ebx, ecx
        jne public_43ee9a
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        je public_43eea5
        public_43ee9a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        public_43eea5 : nop
        lea ecx, ds:[ebx+0x32C]
        call public_55e280
        test al, al
        jne public_43efbb
        lea ecx, ds:[ebx+0x34C]
        call public_55e280
        test al, al
        jne public_43efbb
        mov ecx, offset public_668708
        call public_43a460
        test eax, eax
        je public_43eee8
        mov ecx, eax
        call public_44c4a0
        test al, al
        jne public_43efbb
        public_43eee8 : nop
        mov ecx, dword ptr ds : [ebx+0x380]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_43ee9a
        mov edx, dword ptr ss : [esp+0x1C]
        public_43eef8 : nop
        mov edi, dword ptr ds : [eax+0x20]
        cmp edi, edx
        lea esi, ds:[eax+8]
        je public_43ef13
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_43eef8
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        public_43ef13 : nop
        mov al, byte ptr ds : [esi+1]
        test al, al
        jne public_43ef78
        mov eax, dword ptr ds : [esi+0x30]
        cmp eax, 5
        jne public_43ef29
        mov edi, 2
        jmp public_43ef3f
        public_43ef29 : nop
        cmp eax, 7
        jne public_43ef35
        mov edi, 3
        jmp public_43ef3f
        public_43ef35 : nop
        cmp eax, 8
        jne public_43ef78
        mov edi, 4
        public_43ef3f : nop
        mov ecx, offset public_668708
        call public_43a460
        push edi
        mov ecx, eax
        call public_449d10
        mov edi, eax
        test edi, edi
        je public_43ef78
        mov esi, dword ptr ds : [edi]
        lea ecx, ss:[esp+0xC]
        call public_415850
        push eax
        push 0
        mov ecx, edi
        call dword ptr ds : [esi+0x30]
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 8
        ret 0xC
        public_43ef78 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_43efb3
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        je public_43efb3
        mov eax, dword ptr ds : [ebx+0x3B8]
        test eax, eax
        jne public_43ef96
        mov dword ptr ds : [ebx+0x3B8], esi
        public_43ef96 : nop
        mov eax, dword ptr ds : [ebx+0x3B8]
        push esi
        push eax
        mov ecx, ebx
        call public_441700
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 8
        ret 0xC
        public_43efb3 : nop
        push esi
        mov ecx, ebx
        call public_440ac0
        public_43efbb : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x43ee80)
    }
}

#undef public_43ee9a
#undef public_43eea5
#undef public_43eee8
#undef public_43eef8
#undef public_43ef13
#undef public_43ef29
#undef public_43ef35
#undef public_43ef3f
#undef public_43ef78
#undef public_43ef96
#undef public_43efb3
#undef public_43efbb
