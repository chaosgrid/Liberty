#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7900);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7930);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef87b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8af0);
CLANG_FORWARD_PROC_SYMBOL(public_6efae60);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efae83 _public_6efae83
#define public_6efae87 _public_6efae87
#define public_6efaec4 _public_6efaec4
#define public_6efaecb _public_6efaecb
#define public_6efaee0 _public_6efaee0
#define public_6efaf08 _public_6efaf08
#define public_6efaf6a _public_6efaf6a
#define public_6efafc7 _public_6efafc7
#define public_6efafee _public_6efafee
#define public_6efb00f _public_6efb00f
#define public_6efb012 _public_6efb012
#define public_6efb096 _public_6efb096

PROC_DECLARE(0x6efae60, internal_6efae60, public_6efae60);
extern "C" NAKED register_t __cdecl internal_6efae60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0xC
        cmp eax, ecx
        je public_6efb096
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, ds:[ecx+0x2C]
        lea edi, ds:[eax+0x1C]
        jmp public_6efae87
        public_6efae83 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6efae87 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi-0x18]
        mov dword ptr ds : [esi-0x28], ecx
        mov edx, dword ptr ds : [edi-0x14]
        mov dword ptr ds : [esi-0x24], edx
        mov eax, dword ptr ds : [edi-0x10]
        mov dword ptr ds : [esi-0x20], eax
        mov ecx, dword ptr ds : [edi-0xC]
        mov dword ptr ds : [esi-0x1C], ecx
        mov edx, dword ptr ds : [esi-0x10]
        mov eax, dword ptr ds : [esi-0x14]
        push edx
        lea ebp, ds:[esi-0x18]
        push eax
        mov ecx, ebp
        call public_6ef6750
        mov ecx, dword ptr ds : [edi-4]
        test ecx, ecx
        jne public_6efaec4
        xor eax, eax
        jmp public_6efaecb
        public_6efaec4 : nop
        mov eax, dword ptr ds : [edi]
        sub eax, ecx
        sar eax, 3
        public_6efaecb : nop
        push eax
        mov ecx, ebp
        call public_6ef7860
        mov ebx, dword ptr ds : [edi-4]
        cmp ebx, dword ptr ds : [edi]
        je public_6efaf08
        lea ebx, ds:[ebx]
        public_6efaee0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi-0x10]
        push 1
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], edx
        call public_6f96770
        mov eax, dword ptr ds : [edi]
        add ebx, 8
        cmp ebx, eax
        jne public_6efaee0
        public_6efaf08 : nop
        mov edx, dword ptr ds : [edi+8]
        lea ebx, ds:[edi+0xC]
        lea eax, ds:[esi-4]
        cmp eax, ebx
        mov dword ptr ds : [esi-8], edx
        je public_6efb012
        lea ebp, ds:[esi-4]
        mov ecx, ebp
        call public_6ef7900
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], eax
        call public_6ef7900
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        ja public_6efaf6a
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
        jmp public_6efb00f
        public_6efaf6a : nop
        mov ecx, ebp
        call public_6ef8ac0
        lea ecx, ds:[edi+0xC]
        mov ebx, eax
        call public_6ef7900
        cmp eax, ebx
        ja public_6efafc7
        mov edx, dword ptr ds : [edi+0x10]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x10], edx
        call public_6ef7900
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x10]
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        imul ebx, 0x38
        push eax
        add ebx, edx
        push ebx
        push ecx
        call public_6ef8af0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+0x14]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, ebp
        call public_6ef7960
        lea ecx, ds:[edi+0xC]
        call public_6ef7900
        imul eax, 0x38
        add eax, dword ptr ds : [esi]
        jmp public_6efb00f
        public_6efafc7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ef7930
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi+0xC]
        call public_6ef7900
        test eax, eax
        jge public_6efafee
        xor eax, eax
        public_6efafee : nop
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
        public_6efb00f : nop
        mov dword ptr ds : [esi+4], eax
        public_6efb012 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [edi+0x20]
        lea ecx, ds:[edi+0x28]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [edi+0x24]
        push ecx
        lea ecx, ds:[esi+0x18]
        mov dword ptr ds : [esi+0x14], eax
        call public_6ef87b0
        mov edx, dword ptr ds : [edi+0x3C]
        lea ecx, ds:[edi+0x44]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [edi+0x40]
        push ecx
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [esi+0x30], eax
        call public_6eb6560
        mov edx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x44], edx
        mov al, byte ptr ds : [edi+0x58]
        mov byte ptr ds : [esi+0x48], al
        mov ecx, dword ptr ds : [edi+0x5C]
        mov eax, dword ptr ss : [esp+0x28]
        add eax, 0x80
        mov dword ptr ds : [esi+0x4C], ecx
        mov edx, dword ptr ds : [edi+0x60]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x20]
        add eax, 0x80
        mov dword ptr ds : [esi+0x50], edx
        add esi, 0x80
        add edi, 0x80
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6efae83
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6efb096 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6efae60)
    }
}

#undef public_6efae83
#undef public_6efae87
#undef public_6efaec4
#undef public_6efaecb
#undef public_6efaee0
#undef public_6efaf08
#undef public_6efaf6a
#undef public_6efafc7
#undef public_6efafee
#undef public_6efb00f
#undef public_6efb012
#undef public_6efb096
