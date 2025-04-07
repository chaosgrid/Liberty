#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7900);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7930);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef79a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef79c3 _public_6ef79c3
#define public_6ef79c7 _public_6ef79c7
#define public_6ef7a24 _public_6ef7a24
#define public_6ef7a2b _public_6ef7a2b
#define public_6ef7a40 _public_6ef7a40
#define public_6ef7a68 _public_6ef7a68
#define public_6ef7aca _public_6ef7aca
#define public_6ef7b1c _public_6ef7b1c
#define public_6ef7b41 _public_6ef7b41
#define public_6ef7b62 _public_6ef7b62
#define public_6ef7b65 _public_6ef7b65
#define public_6ef7bc5 _public_6ef7bc5

PROC_DECLARE(0x6ef79a0, internal_6ef79a0, public_6ef79a0);
extern "C" NAKED register_t __cdecl internal_6ef79a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        cmp ecx, eax
        je public_6ef7bc5
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, ds:[ecx+0x2C]
        lea edi, ds:[eax+0x1C]
        jmp public_6ef79c7
        public_6ef79c3 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6ef79c7 : nop
        mov edx, dword ptr ds : [eax-0x80]
        mov ecx, dword ptr ss : [esp+0x28]
        sub eax, 0x80
        sub ecx, 0x80
        mov dword ptr ds : [ecx], edx
        sub esi, 0x80
        sub edi, 0x80
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi-0x18]
        mov dword ptr ds : [esi-0x28], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [edi-0x14]
        mov dword ptr ds : [esi-0x24], ecx
        mov edx, dword ptr ds : [edi-0x10]
        mov dword ptr ds : [esi-0x20], edx
        mov eax, dword ptr ds : [edi-0xC]
        mov dword ptr ds : [esi-0x1C], eax
        mov ecx, dword ptr ds : [esi-0x10]
        mov edx, dword ptr ds : [esi-0x14]
        push ecx
        lea ebp, ds:[esi-0x18]
        push edx
        mov ecx, ebp
        call public_6ef6750
        mov eax, dword ptr ds : [edi-4]
        test eax, eax
        jne public_6ef7a24
        xor ecx, ecx
        jmp public_6ef7a2b
        public_6ef7a24 : nop
        mov ecx, dword ptr ds : [edi]
        sub ecx, eax
        sar ecx, 3
        public_6ef7a2b : nop
        push ecx
        mov ecx, ebp
        call public_6ef7860
        mov ebx, dword ptr ds : [edi-4]
        cmp ebx, dword ptr ds : [edi]
        je public_6ef7a68
        lea ebx, ds:[ebx]
        public_6ef7a40 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi-0x10]
        push 1
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        mov ecx, ebp
        call public_6f96770
        mov eax, dword ptr ds : [edi]
        add ebx, 8
        cmp ebx, eax
        jne public_6ef7a40
        public_6ef7a68 : nop
        mov ecx, dword ptr ds : [edi+8]
        lea ebx, ds:[edi+0xC]
        lea edx, ds:[esi-4]
        cmp edx, ebx
        mov dword ptr ds : [esi-8], ecx
        je public_6ef7b65
        lea ebp, ds:[esi-4]
        mov ecx, ebp
        call public_6ef7900
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], eax
        call public_6ef7900
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        ja public_6ef7aca
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [edi+0x10]
        push edx
        push eax
        push ecx
        call public_6ef8af0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, ebp
        call public_6ef7930
        lea ecx, ds:[edi+0xC]
        call public_6ef7900
        imul eax, 0x38
        add eax, dword ptr ds : [esi]
        jmp public_6ef7b62
        public_6ef7aca : nop
        mov ecx, ebp
        call public_6ef8ac0
        lea ecx, ds:[edi+0xC]
        mov ebx, eax
        call public_6ef7900
        cmp eax, ebx
        mov ecx, ebp
        ja public_6ef7b1c
        call public_6ef7900
        mov edx, dword ptr ds : [esi]
        mov ebx, eax
        mov eax, dword ptr ds : [edi+0x10]
        imul ebx, 0x38
        push edx
        add ebx, eax
        push ebx
        push eax
        call public_6ef8af0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+0x14]
        add esp, 0xC
        push eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6ef7960
        lea ecx, ds:[edi+0xC]
        call public_6ef7900
        imul eax, 0x38
        add eax, dword ptr ds : [esi]
        jmp public_6ef7b62
        public_6ef7b1c : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        call public_6ef7930
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi+0xC]
        call public_6ef7900
        test eax, eax
        jge public_6ef7b41
        xor eax, eax
        public_6ef7b41 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [edi+0x10]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6ef7960
        mov dword ptr ds : [esi+8], eax
        public_6ef7b62 : nop
        mov dword ptr ds : [esi+4], eax
        public_6ef7b65 : nop
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x24]
        lea edx, ds:[edi+0x28]
        mov dword ptr ds : [esi+0x14], ecx
        push edx
        lea ecx, ds:[esi+0x18]
        call public_6ef87b0
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x2C], eax
        mov ecx, dword ptr ds : [edi+0x40]
        lea edx, ds:[edi+0x44]
        mov dword ptr ds : [esi+0x30], ecx
        push edx
        lea ecx, ds:[esi+0x34]
        call public_6eb6560
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x44], eax
        mov cl, byte ptr ds : [edi+0x58]
        mov byte ptr ds : [esi+0x48], cl
        mov edx, dword ptr ds : [edi+0x5C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x4C], edx
        mov eax, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0x50], eax
        cmp dword ptr ss : [esp+0x24], ecx
        jne public_6ef79c3
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6ef7bc5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef79a0)
    }
}

#undef public_6ef79c3
#undef public_6ef79c7
#undef public_6ef7a24
#undef public_6ef7a2b
#undef public_6ef7a40
#undef public_6ef7a68
#undef public_6ef7aca
#undef public_6ef7b1c
#undef public_6ef7b41
#undef public_6ef7b62
#undef public_6ef7b65
#undef public_6ef7bc5
