#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7900);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7930);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8560);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef85ab _public_6ef85ab
#define public_6ef85b3 _public_6ef85b3
#define public_6ef85c3 _public_6ef85c3
#define public_6ef85ec _public_6ef85ec
#define public_6ef860d _public_6ef860d
#define public_6ef8629 _public_6ef8629
#define public_6ef8634 _public_6ef8634
#define public_6ef864c _public_6ef864c
#define public_6ef8684 _public_6ef8684
#define public_6ef86d6 _public_6ef86d6
#define public_6ef86fe _public_6ef86fe
#define public_6ef8720 _public_6ef8720
#define public_6ef8724 _public_6ef8724
#define public_6ef8727 _public_6ef8727

PROC_DECLARE(0x6ef8560, internal_6ef8560, public_6ef8560);
extern "C" NAKED register_t __cdecl internal_6ef8560()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [ebp+0x18]
        lea ebx, ss:[ebp+0x14]
        push edx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], ebp
        call public_6ef6750
        mov ecx, dword ptr ds : [edi+0x18]
        test ecx, ecx
        jne public_6ef85ab
        xor eax, eax
        jmp public_6ef85b3
        public_6ef85ab : nop
        mov eax, dword ptr ds : [edi+0x1C]
        sub eax, ecx
        sar eax, 3
        public_6ef85b3 : nop
        push eax
        mov ecx, ebx
        call public_6ef7860
        mov esi, dword ptr ds : [edi+0x18]
        cmp esi, dword ptr ds : [edi+0x1C]
        je public_6ef85ec
        public_6ef85c3 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 1
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edx
        call public_6f96770
        mov eax, dword ptr ds : [edi+0x1C]
        add esi, 8
        cmp esi, eax
        jne public_6ef85c3
        public_6ef85ec : nop
        mov edx, dword ptr ds : [edi+0x24]
        lea ebx, ds:[edi+0x28]
        lea esi, ss:[ebp+0x28]
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x24], edx
        je public_6ef8727
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ef860d
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6ef8629
        public_6ef860d : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x20], edx
        public_6ef8629 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ef8634
        xor edx, edx
        jmp public_6ef864c
        public_6ef8634 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ef864c : nop
        cmp dword ptr ss : [esp+0x20], edx
        ja public_6ef8684
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push eax
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6ef8af0
        mov edx, dword ptr ds : [esi+8]
        add esp, 0xC
        push edx
        push eax
        mov ecx, esi
        call public_6ef7930
        mov ecx, ebx
        call public_6ef7900
        imul eax, 0x38
        add eax, dword ptr ds : [esi+4]
        jmp public_6ef8724
        public_6ef8684 : nop
        mov ecx, esi
        call public_6ef8ac0
        mov ecx, ebx
        mov ebp, eax
        call public_6ef7900
        cmp eax, ebp
        ja public_6ef86d6
        mov ecx, esi
        call public_6ef7900
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, eax
        mov eax, dword ptr ds : [ebx+4]
        imul ebp, 0x38
        push ecx
        add ebp, eax
        push ebp
        push eax
        call public_6ef8af0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx+8]
        add esp, 0xC
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_6ef7960
        mov ecx, ebx
        call public_6ef7900
        imul eax, 0x38
        add eax, dword ptr ds : [esi+4]
        jmp public_6ef8720
        public_6ef86d6 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ef7930
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebx
        call public_6ef7900
        test eax, eax
        jge public_6ef86fe
        xor eax, eax
        public_6ef86fe : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6ef7960
        mov dword ptr ds : [esi+0xC], eax
        public_6ef8720 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ef8724 : nop
        mov dword ptr ds : [esi+8], eax
        public_6ef8727 : nop
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ss : [ebp+0x38], ecx
        mov edx, dword ptr ds : [edi+0x3C]
        lea ecx, ds:[edi+0x44]
        mov dword ptr ss : [ebp+0x3C], edx
        mov eax, dword ptr ds : [edi+0x40]
        push ecx
        lea ecx, ss:[ebp+0x44]
        mov dword ptr ss : [ebp+0x40], eax
        call public_6ef87b0
        mov edx, dword ptr ds : [edi+0x58]
        lea ecx, ds:[edi+0x60]
        mov dword ptr ss : [ebp+0x58], edx
        mov eax, dword ptr ds : [edi+0x5C]
        push ecx
        lea ecx, ss:[ebp+0x60]
        mov dword ptr ss : [ebp+0x5C], eax
        call public_6eb6560
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ss : [ebp+0x70], edx
        mov al, byte ptr ds : [edi+0x74]
        mov byte ptr ss : [ebp+0x74], al
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [edi+0x7C]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x7C], edx
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ef8560)
    }
}

#undef public_6ef85ab
#undef public_6ef85b3
#undef public_6ef85c3
#undef public_6ef85ec
#undef public_6ef860d
#undef public_6ef8629
#undef public_6ef8634
#undef public_6ef864c
#undef public_6ef8684
#undef public_6ef86d6
#undef public_6ef86fe
#undef public_6ef8720
#undef public_6ef8724
#undef public_6ef8727
