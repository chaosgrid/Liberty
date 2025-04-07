#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7630);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7900);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7930);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef7653 _public_6ef7653
#define public_6ef7657 _public_6ef7657
#define public_6ef7690 _public_6ef7690
#define public_6ef7698 _public_6ef7698
#define public_6ef76a8 _public_6ef76a8
#define public_6ef76d2 _public_6ef76d2
#define public_6ef7731 _public_6ef7731
#define public_6ef778f _public_6ef778f
#define public_6ef77b8 _public_6ef77b8
#define public_6ef77d9 _public_6ef77d9
#define public_6ef77dc _public_6ef77dc
#define public_6ef784d _public_6ef784d

PROC_DECLARE(0x6ef7630, internal_6ef7630, public_6ef7630);
extern "C" NAKED register_t __cdecl internal_6ef7630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 8
        cmp eax, ecx
        je public_6ef784d
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea ebp, ds:[edi+0x28]
        lea esi, ds:[eax+0x2C]
        jmp public_6ef7657
        public_6ef7653 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ef7657 : nop
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-0x28], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi-0x24], eax
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi-0x20], ecx
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi-0x1C], edx
        mov eax, dword ptr ds : [esi-0x10]
        mov ecx, dword ptr ds : [esi-0x14]
        push eax
        lea ebx, ds:[esi-0x18]
        push ecx
        mov ecx, ebx
        call public_6ef6750
        mov ecx, dword ptr ds : [edi+0x18]
        test ecx, ecx
        jne public_6ef7690
        xor eax, eax
        jmp public_6ef7698
        public_6ef7690 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        sub eax, ecx
        sar eax, 3
        public_6ef7698 : nop
        push eax
        mov ecx, ebx
        call public_6ef7860
        mov ebx, dword ptr ds : [edi+0x18]
        cmp ebx, dword ptr ds : [edi+0x1C]
        je public_6ef76d2
        public_6ef76a8 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi-0x10]
        push 1
        push edx
        lea ecx, ds:[esi-0x18]
        mov dword ptr ss : [esp+0x20], eax
        call public_6f96770
        mov eax, dword ptr ds : [edi+0x1C]
        add ebx, 8
        cmp ebx, eax
        jne public_6ef76a8
        public_6ef76d2 : nop
        mov eax, dword ptr ds : [edi+0x24]
        lea ecx, ds:[esi-4]
        cmp ecx, ebp
        mov dword ptr ds : [esi-8], eax
        je public_6ef77dc
        mov ecx, ebp
        lea ebx, ds:[esi-4]
        call public_6ef7900
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], eax
        call public_6ef7900
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, eax
        ja public_6ef7731
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push edx
        push eax
        push ecx
        call public_6ef8af0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        push ecx
        push eax
        lea ecx, ds:[esi-4]
        call public_6ef7930
        mov ecx, ebp
        call public_6ef7900
        imul eax, 0x38
        add eax, dword ptr ds : [esi]
        jmp public_6ef77d9
        public_6ef7731 : nop
        mov ecx, ebp
        call public_6ef7900
        lea ecx, ds:[esi-4]
        mov ebx, eax
        call public_6ef8ac0
        cmp ebx, eax
        ja public_6ef778f
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ds:[esi-4]
        mov dword ptr ss : [esp+0x24], edx
        call public_6ef7900
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [ebp+4]
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        imul ebx, 0x38
        push eax
        add ebx, edx
        push ebx
        push ecx
        call public_6ef8af0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        lea ecx, ds:[esi-4]
        call public_6ef7960
        mov ecx, ebp
        call public_6ef7900
        imul eax, 0x38
        add eax, dword ptr ds : [esi]
        jmp public_6ef77d9
        public_6ef778f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        lea ebx, ds:[esi-4]
        push edx
        mov ecx, ebx
        call public_6ef7930
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebp
        call public_6ef7900
        test eax, eax
        jge public_6ef77b8
        xor eax, eax
        public_6ef77b8 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6ef7960
        mov dword ptr ds : [esi+8], eax
        public_6ef77d9 : nop
        mov dword ptr ds : [esi+4], eax
        public_6ef77dc : nop
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [esi+0x14], eax
        lea eax, ds:[edi+0x44]
        push eax
        lea ecx, ds:[esi+0x18]
        call public_6ef87b0
        mov ecx, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x2C], ecx
        mov edx, dword ptr ds : [edi+0x5C]
        lea eax, ds:[edi+0x60]
        push eax
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [esi+0x30], edx
        call public_6eb6560
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x44], eax
        mov cl, byte ptr ds : [edi+0x74]
        mov byte ptr ds : [esi+0x48], cl
        mov edx, dword ptr ds : [edi+0x78]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x4C], edx
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x50], eax
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, 0x80
        add esi, 0x80
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6ef7653
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6ef784d : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ef7630)
    }
}

#undef public_6ef7653
#undef public_6ef7657
#undef public_6ef7690
#undef public_6ef7698
#undef public_6ef76a8
#undef public_6ef76d2
#undef public_6ef7731
#undef public_6ef778f
#undef public_6ef77b8
#undef public_6ef77d9
#undef public_6ef77dc
#undef public_6ef784d
