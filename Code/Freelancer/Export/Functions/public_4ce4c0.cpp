#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4cbb40);
CLANG_FORWARD_PROC_SYMBOL(public_4cbc40);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc10);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc60);
CLANG_FORWARD_PROC_SYMBOL(public_4cdfc0);
CLANG_FORWARD_PROC_SYMBOL(public_4ce000);
CLANG_FORWARD_PROC_SYMBOL(public_4ce4c0);
CLANG_FORWARD_PROC_SYMBOL(public_4ce810);

#define public_4ce4f5 _public_4ce4f5
#define public_4ce580 _public_4ce580
#define public_4ce5a4 _public_4ce5a4
#define public_4ce5b0 _public_4ce5b0
#define public_4ce622 _public_4ce622
#define public_4ce63d _public_4ce63d
#define public_4ce649 _public_4ce649
#define public_4ce68f _public_4ce68f
#define public_4ce6cc _public_4ce6cc
#define public_4ce6da _public_4ce6da
#define public_4ce709 _public_4ce709
#define public_4ce710 _public_4ce710
#define public_4ce742 _public_4ce742
#define public_4ce75d _public_4ce75d
#define public_4ce769 _public_4ce769
#define public_4ce78b _public_4ce78b
#define public_4ce7ae _public_4ce7ae
#define public_4ce7fa _public_4ce7fa

PROC_DECLARE(0x4ce4c0, internal_4ce4c0, public_4ce4c0);
extern "C" NAKED register_t __cdecl internal_4ce4c0()
{
    __asm
    {
        sub esp, 0x13C
        mov eax, dword ptr ss : [esp+0x144]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x148]
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        call public_4cbc40
        xor ebx, ebx
        cmp al, bl
        mov byte ptr ss : [esp+0x13], al
        je public_4ce4f5
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ss : [ebp+0xC], bl
        public_4ce4f5 : nop
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0xBC], ebx
        mov dword ptr ss : [esp+0xC0], ebx
        mov dword ptr ss : [esp+0xC4], ebx
        mov dword ptr ss : [esp+0xC8], ebx
        mov dword ptr ss : [esp+0xEC], ebx
        mov dword ptr ss : [esp+0x138], 1
        mov dword ptr ss : [esp+0x13C], ebx
        mov dword ptr ss : [esp+0x144], 0
        cmp dword ptr ds : [eax], ebx
        jbe public_4ce7fa
        add eax, 4
        push eax
        lea ecx, ss:[esp+0xB8]
        call public_4ce810
        mov ecx, dword ptr ss : [esp+0xF0]
        push ecx
        mov dword ptr ss : [esp+0x18], 0xFFFFFF9C
        call public_430ab0
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_4ce5b0
        mov eax, dword ptr ss : [esp+0x138]
        xor edi, edi
        cmp eax, ebx
        jle public_4ce5b0
        nop 
        lea esp, ss:[esp]
        public_4ce580 : nop
        mov eax, dword ptr ss : [esp+edi*4+0xF8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        cmp eax, ebx
        je public_4ce5a4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x38]
        cmp eax, dword ptr ss : [esp+0x14]
        jle public_4ce5a4
        mov dword ptr ss : [esp+0x14], eax
        public_4ce5a4 : nop
        mov eax, dword ptr ss : [esp+0x138]
        inc edi
        cmp edi, eax
        jl public_4ce580
        public_4ce5b0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x12], bl
        jge public_4ce68f
        cmp byte ptr ss : [ebp+0xC], bl
        je public_4ce68f
        cmp eax, dword ptr ss : [ebp+8]
        jge public_4ce68f
        mov edi, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0xA0], 1
        mov dword ptr ss : [esp+0xA4], ebx
        mov dword ptr ss : [esp+0xAC], 0
        cmp dword ptr ds : [edi], ebx
        jbe public_4ce649
        lea esi, ds:[edi+4]
        push esi
        lea ecx, ss:[esp+0x20]
        call public_4ce810
        mov eax, dword ptr ds : [edi]
        mov ebp, 1
        cmp eax, ebp
        jbe public_4ce63d
        public_4ce622 : nop
        lea eax, ds:[esi+0x98]
        push eax
        mov ecx, esi
        call public_4ce810
        mov eax, dword ptr ds : [edi]
        inc ebp
        add esi, 0x98
        cmp ebp, eax
        jb public_4ce622
        public_4ce63d : nop
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x150]
        dec eax
        mov dword ptr ds : [edi], eax
        public_4ce649 : nop
        mov byte ptr ss : [esp+0x12], 1
        mov dword ptr ss : [esp+0xB0], 2
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4ce68f
        mov eax, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ss : [esp+eax*4+0x60]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call dword ptr ds : [edx+0xFC]
        public_4ce68f : nop
        cmp byte ptr ss : [ebp+0xC], bl
        je public_4ce710
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        jge public_4ce710
        cmp dword ptr ss : [esp+0x14], eax
        jle public_4ce710
        mov esi, dword ptr ss : [ebp+4]
        cmp byte ptr ds : [esi+0x38], bl
        je public_4ce6da
        cmp byte ptr ds : [esi+0x85], bl
        jne public_4ce6da
        mov byte ptr ds : [esi+0x84], bl
        mov byte ptr ds : [esi+0x85], 1
        cmp dword ptr ds : [esi+0x170], ebx
        je public_4ce6cc
        mov dword ptr ds : [esi+0x170], ebx
        public_4ce6cc : nop
        mov eax, dword ptr ds : [esi+0x1BC]
        cmp eax, ebx
        je public_4ce6da
        and byte ptr ds : [eax+0x6C], 0xFC
        public_4ce6da : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4ce709
        mov eax, dword ptr ds : [esi+0x1CC]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push 2
        push eax
        mov eax, dword ptr ds : [esi+0x1C8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C4]
        push eax
        call dword ptr ds : [edx+0xFC]
        public_4ce709 : nop
        mov ecx, esi
        call public_4cbb40
        public_4ce710 : nop
        cmp byte ptr ss : [esp+0x12], bl
        jne public_4ce7fa
        cmp byte ptr ss : [esp+0x13], bl
        je public_4ce78b
        mov edi, dword ptr ss : [ebp]
        cmp dword ptr ds : [edi], ebx
        jbe public_4ce769
        lea esi, ds:[edi+4]
        push esi
        lea ecx, ss:[esp+0xB8]
        call public_4ce810
        mov eax, dword ptr ds : [edi]
        mov ebp, 1
        cmp eax, ebp
        jbe public_4ce75d
        public_4ce742 : nop
        lea ecx, ds:[esi+0x98]
        push ecx
        mov ecx, esi
        call public_4ce810
        mov eax, dword ptr ds : [edi]
        inc ebp
        add esi, 0x98
        cmp ebp, eax
        jb public_4ce742
        public_4ce75d : nop
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x150]
        dec eax
        mov dword ptr ds : [edi], eax
        public_4ce769 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0xB4]
        push edx
        push ebp
        call public_4ce000
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xD], bl
        pop ebp
        pop ebx
        add esp, 0x13C
        ret 8
        public_4ce78b : nop
        mov eax, dword ptr ds : [public_5c64b8]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax]
        jle public_4ce7ae
        cmp byte ptr ss : [ebp+0xD], bl
        jne public_4ce7fa
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xD], 1
        pop ebp
        pop ebx
        add esp, 0x13C
        ret 8
        public_4ce7ae : nop
        lea ecx, ss:[esp+0x24]
        call public_4cdc10
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0xA4], 1
        mov dword ptr ss : [esp+0xA8], ebx
        mov dword ptr ss : [esp+0xB0], 0
        call public_4cdc60
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0xB4], 2
        call public_4cdfc0
        public_4ce7fa : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x13C
        ret 8
        UNREACHABLE_TRAP(0x4ce4c0)
    }
}

#undef public_4ce4f5
#undef public_4ce580
#undef public_4ce5a4
#undef public_4ce5b0
#undef public_4ce622
#undef public_4ce63d
#undef public_4ce649
#undef public_4ce68f
#undef public_4ce6cc
#undef public_4ce6da
#undef public_4ce709
#undef public_4ce710
#undef public_4ce742
#undef public_4ce75d
#undef public_4ce769
#undef public_4ce78b
#undef public_4ce7ae
#undef public_4ce7fa
