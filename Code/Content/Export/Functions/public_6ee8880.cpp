#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ed9330);
CLANG_FORWARD_PROC_SYMBOL(public_6edf7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8880);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabbce);

#define public_6ee88d7 _public_6ee88d7
#define public_6ee88f5 _public_6ee88f5
#define public_6ee890d _public_6ee890d
#define public_6ee892e _public_6ee892e
#define public_6ee8936 _public_6ee8936
#define public_6ee8941 _public_6ee8941
#define public_6ee8996 _public_6ee8996
#define public_6ee8998 _public_6ee8998
#define public_6ee89fd _public_6ee89fd
#define public_6ee89ff _public_6ee89ff
#define public_6ee8a26 _public_6ee8a26
#define public_6ee8a34 _public_6ee8a34
#define public_6ee8a39 _public_6ee8a39
#define public_6ee8a47 _public_6ee8a47
#define public_6ee8a4e _public_6ee8a4e

PROC_DECLARE(0x6ee8880, internal_6ee8880, public_6ee8880);
extern "C" NAKED register_t __cdecl internal_6ee8880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabbce @0x6ee8882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabbce
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+4]
        xor ebx, ebx
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [edi+0x14], bl
        mov dword ptr ds : [edi], offset public_6fb7470
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x28], ebx
        je public_6ee88d7
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jae public_6ee8941
        public_6ee88d7 : nop
        push 8
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6ee890d
        public_6ee88f5 : nop
        push ebp
        push ebx
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x1C]
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, eax
        jne public_6ee88f5
        public_6ee890d : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edx+8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ee892e
        xor eax, eax
        jmp public_6ee8936
        public_6ee892e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ee8936 : nop
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        xor ebx, ebx
        public_6ee8941 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+0x1C], edx
        mov ecx, dword ptr ds : [eax+0xC]
        lea ebp, ds:[edi+0x20]
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [eax+0x14]
        push 0x30
        mov dword ptr ds : [edi+0x28], eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x28], 1
        je public_6ee8996
        mov ecx, dword ptr ds : [edi+0x28]
        mov edx, dword ptr ss : [ebp]
        push ecx
        mov ecx, dword ptr ds : [edi+0x1C]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        push ecx
        push edx
        mov ecx, eax
        call public_6ed9330
        jmp public_6ee8998
        public_6ee8996 : nop
        xor eax, eax
        public_6ee8998 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x28], 0
        call dword ptr ds : [edx+4]
        test al, al
        je public_6ee8a39
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        call public_6f937c0
        push ebp
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6ee8a4e
        push 0x30
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x28], 2
        je public_6ee89fd
        mov edx, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ss : [ebp]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        push ecx
        push edx
        mov ecx, eax
        call public_6edf7a0
        jmp public_6ee89ff
        public_6ee89fd : nop
        xor eax, eax
        public_6ee89ff : nop
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x28], bl
        call dword ptr ds : [edx+4]
        test al, al
        je public_6ee8a26
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        jmp public_6ee8a4e
        public_6ee8a26 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        je public_6ee8a34
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6ee8a34 : nop
        mov dword ptr ds : [edi+0x18], ebx
        jmp public_6ee8a4e
        public_6ee8a39 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_6ee8a47
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ee8a47 : nop
        mov dword ptr ds : [edi+0x18], 0
        public_6ee8a4e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6ee8880)
    }
}

#undef public_6ee88d7
#undef public_6ee88f5
#undef public_6ee890d
#undef public_6ee892e
#undef public_6ee8936
#undef public_6ee8941
#undef public_6ee8996
#undef public_6ee8998
#undef public_6ee89fd
#undef public_6ee89ff
#undef public_6ee8a26
#undef public_6ee8a34
#undef public_6ee8a39
#undef public_6ee8a47
#undef public_6ee8a4e
