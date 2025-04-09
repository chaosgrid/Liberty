#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6650);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f6668 _public_4f6668
#define public_4f667a _public_4f667a
#define public_4f6689 _public_4f6689
#define public_4f669c _public_4f669c
#define public_4f66d3 _public_4f66d3
#define public_4f66e0 _public_4f66e0
#define public_4f66f6 _public_4f66f6
#define public_4f6716 _public_4f6716
#define public_4f671f _public_4f671f
#define public_4f6734 _public_4f6734
#define public_4f6748 _public_4f6748
#define public_4f6764 _public_4f6764
#define public_4f6785 _public_4f6785
#define public_4f67a2 _public_4f67a2

PROC_DECLARE(0x4f6650, internal_4f6650, public_4f6650);
extern "C" NAKED register_t __cdecl internal_4f6650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp edi, eax
        je public_4f67a2
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        public_4f6668 : nop
        mov eax, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        jae public_4f667a
        mov ebx, esi
        public_4f667a : nop
        cmp ebp, edi
        jne public_4f66e0
        cmp dword ptr ss : [ebp+8], ebx
        jae public_4f6689
        call dword ptr ds : [public_5c7064]
        public_4f6689 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_4f669c
        mov esi, eax
        public_4f669c : nop
        test esi, esi
        jbe public_4f66d3
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f66d3
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_4f66d3 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        jmp public_4f6785
        public_4f66e0 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_4f6748
        cmp ebx, eax
        jne public_4f6748
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_4f66f6
        mov eax, dword ptr ds : [public_5c7078]
        public_4f66f6 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4f6748
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_4f671f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4f6716
        cmp cl, 0xFF
        je public_4f6716
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4f671f
        public_4f6716 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4f671f : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_4f6734
        mov eax, dword ptr ds : [public_5c7078]
        public_4f6734 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_4f6785
        public_4f6748 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f6785
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_4f6764
        mov esi, dword ptr ds : [public_5c7078]
        public_4f6764 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_4f6785 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0x10
        add ebp, 0x10
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jne public_4f6668
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        ret 
        public_4f67a2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4f6650)
    }
}

#undef public_4f6668
#undef public_4f667a
#undef public_4f6689
#undef public_4f669c
#undef public_4f66d3
#undef public_4f66e0
#undef public_4f66f6
#undef public_4f6716
#undef public_4f671f
#undef public_4f6734
#undef public_4f6748
#undef public_4f6764
#undef public_4f6785
#undef public_4f67a2
