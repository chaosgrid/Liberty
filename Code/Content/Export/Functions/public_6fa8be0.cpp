#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef73c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8560);
CLANG_FORWARD_PROC_SYMBOL(public_6efa720);
CLANG_FORWARD_PROC_SYMBOL(public_6efac00);
CLANG_FORWARD_PROC_SYMBOL(public_6efae40);
CLANG_FORWARD_PROC_SYMBOL(public_6efae60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8be0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa8c03 _public_6fa8c03
#define public_6fa8c07 _public_6fa8c07
#define public_6fa8c5a _public_6fa8c5a
#define public_6fa8c62 _public_6fa8c62
#define public_6fa8c6c _public_6fa8c6c
#define public_6fa8c74 _public_6fa8c74
#define public_6fa8c83 _public_6fa8c83
#define public_6fa8c9f _public_6fa8c9f
#define public_6fa8ca6 _public_6fa8ca6
#define public_6fa8cb9 _public_6fa8cb9
#define public_6fa8ccd _public_6fa8ccd
#define public_6fa8d2a _public_6fa8d2a
#define public_6fa8d51 _public_6fa8d51
#define public_6fa8d71 _public_6fa8d71
#define public_6fa8d74 _public_6fa8d74
#define public_6fa8d91 _public_6fa8d91
#define public_6fa8d99 _public_6fa8d99
#define public_6fa8db0 _public_6fa8db0
#define public_6fa8dd7 _public_6fa8dd7
#define public_6fa8e03 _public_6fa8e03

PROC_DECLARE(0x6fa8be0, internal_6fa8be0, public_6fa8be0);
extern "C" NAKED register_t __cdecl internal_6fa8be0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0xC
        cmp eax, ecx
        je public_6fa8e03
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[eax+0x30]
        lea esi, ds:[ecx+0x30]
        jmp public_6fa8c07
        public_6fa8c03 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa8c07 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi-0x2C]
        mov dword ptr ds : [esi-0x2C], ecx
        mov edx, dword ptr ds : [edi-0x28]
        mov dword ptr ds : [esi-0x28], edx
        mov eax, dword ptr ds : [edi-0x24]
        mov dword ptr ds : [esi-0x24], eax
        mov ecx, dword ptr ds : [edi-0x20]
        mov dword ptr ds : [esi-0x20], ecx
        mov edx, dword ptr ds : [edi-0x1C]
        lea eax, ds:[edi-0x18]
        push eax
        lea ecx, ds:[esi-0x18]
        mov dword ptr ds : [esi-0x1C], edx
        call public_6efac00
        mov ecx, dword ptr ds : [edi-8]
        lea edx, ds:[esi-4]
        lea eax, ds:[edi-4]
        cmp edx, eax
        mov dword ptr ds : [esi-8], ecx
        lea ecx, ds:[edi-4]
        je public_6fa8d74
        mov ebx, dword ptr ds : [edi]
        test ebx, ebx
        jne public_6fa8c5a
        xor edx, edx
        jmp public_6fa8c62
        public_6fa8c5a : nop
        mov edx, dword ptr ds : [edi+4]
        sub edx, ebx
        sar edx, 7
        public_6fa8c62 : nop
        mov ebp, dword ptr ds : [esi]
        test ebp, ebp
        jne public_6fa8c6c
        xor eax, eax
        jmp public_6fa8c74
        public_6fa8c6c : nop
        mov eax, dword ptr ds : [esi+4]
        sub eax, ebp
        sar eax, 7
        public_6fa8c74 : nop
        cmp edx, eax
        ja public_6fa8ccd
        mov eax, dword ptr ds : [edi+4]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6fa8c9f
        public_6fa8c83 : nop
        push ebx
        mov ecx, ebp
        call public_6ef8560
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x80
        add ebp, 0x80
        cmp ebx, eax
        jne public_6fa8c83
        public_6fa8c9f : nop
        mov ebx, dword ptr ds : [esi+4]
        cmp ebp, ebx
        je public_6fa8cb9
        public_6fa8ca6 : nop
        push 0
        mov ecx, ebp
        call public_6efa720
        add ebp, 0x80
        cmp ebp, ebx
        jne public_6fa8ca6
        public_6fa8cb9 : nop
        lea ecx, ds:[edi-4]
        call public_6ef6b30
        mov ecx, dword ptr ds : [esi]
        shl eax, 7
        add eax, ecx
        jmp public_6fa8d71
        public_6fa8ccd : nop
        call public_6ef6b30
        lea ebp, ds:[esi-4]
        mov ecx, ebp
        mov ebx, eax
        call public_6efae40
        cmp ebx, eax
        ja public_6fa8d2a
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, ebp
        call public_6ef6b30
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ebx, eax
        mov eax, dword ptr ds : [edi]
        shl ebx, 7
        push edx
        add ebx, ecx
        push ebx
        push eax
        call public_6efae60
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+4]
        add esp, 0xC
        push ecx
        push edx
        push ebx
        mov ecx, ebp
        call public_6ef73c0
        lea ecx, ds:[edi-4]
        call public_6ef6b30
        mov ecx, dword ptr ds : [esi]
        shl eax, 7
        add eax, ecx
        jmp public_6fa8d71
        public_6fa8d2a : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, ebp
        call public_6ef6b50
        mov edx, dword ptr ds : [esi]
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi-4]
        call public_6ef6b30
        test eax, eax
        jge public_6fa8d51
        xor eax, eax
        public_6fa8d51 : nop
        shl eax, 7
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6ef73c0
        mov dword ptr ds : [esi+8], eax
        public_6fa8d71 : nop
        mov dword ptr ds : [esi+4], eax
        public_6fa8d74 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        push eax
        lea ebp, ds:[esi+0xC]
        push ecx
        mov ecx, ebp
        call public_6ef6750
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        jne public_6fa8d91
        xor eax, eax
        jmp public_6fa8d99
        public_6fa8d91 : nop
        mov eax, dword ptr ds : [edi+0x14]
        sub eax, ecx
        sar eax, 3
        public_6fa8d99 : nop
        push eax
        mov ecx, ebp
        call public_6ef7860
        mov ebx, dword ptr ds : [edi+0x10]
        cmp ebx, dword ptr ds : [edi+0x14]
        je public_6fa8dd7
        lea esp, ss:[esp]
        public_6fa8db0 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0x14]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], eax
        call public_6ef6bb0
        mov eax, dword ptr ds : [edi+0x14]
        add ebx, 8
        cmp ebx, eax
        jne public_6fa8db0
        public_6fa8dd7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x1C], eax
        add dword ptr ss : [esp+0x28], 0x50
        mov eax, dword ptr ss : [esp+0x20]
        add eax, 0x50
        add esi, 0x50
        add edi, 0x50
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6fa8c03
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6fa8e03 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6fa8be0)
    }
}

#undef public_6fa8c03
#undef public_6fa8c07
#undef public_6fa8c5a
#undef public_6fa8c62
#undef public_6fa8c6c
#undef public_6fa8c74
#undef public_6fa8c83
#undef public_6fa8c9f
#undef public_6fa8ca6
#undef public_6fa8cb9
#undef public_6fa8ccd
#undef public_6fa8d2a
#undef public_6fa8d51
#undef public_6fa8d71
#undef public_6fa8d74
#undef public_6fa8d91
#undef public_6fa8d99
#undef public_6fa8db0
#undef public_6fa8dd7
#undef public_6fa8e03
