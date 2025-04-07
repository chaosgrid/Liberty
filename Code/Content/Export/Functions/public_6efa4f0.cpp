#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef73c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8560);
CLANG_FORWARD_PROC_SYMBOL(public_6efa4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6efa720);
CLANG_FORWARD_PROC_SYMBOL(public_6efac00);
CLANG_FORWARD_PROC_SYMBOL(public_6efae40);
CLANG_FORWARD_PROC_SYMBOL(public_6efae60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efa54f _public_6efa54f
#define public_6efa557 _public_6efa557
#define public_6efa562 _public_6efa562
#define public_6efa56a _public_6efa56a
#define public_6efa581 _public_6efa581
#define public_6efa5a5 _public_6efa5a5
#define public_6efa5b2 _public_6efa5b2
#define public_6efa5c9 _public_6efa5c9
#define public_6efa5e2 _public_6efa5e2
#define public_6efa5fa _public_6efa5fa
#define public_6efa659 _public_6efa659
#define public_6efa681 _public_6efa681
#define public_6efa6a3 _public_6efa6a3
#define public_6efa6a6 _public_6efa6a6
#define public_6efa6aa _public_6efa6aa
#define public_6efa6c7 _public_6efa6c7
#define public_6efa6cf _public_6efa6cf
#define public_6efa6e0 _public_6efa6e0
#define public_6efa707 _public_6efa707

PROC_DECLARE(0x6efa4f0, internal_6efa4f0, public_6efa4f0);
extern "C" NAKED register_t __cdecl internal_6efa4f0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        lea ecx, ds:[ebx+0x18]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx+0x14], edx
        call public_6efac00
        mov ecx, dword ptr ss : [ebp+0x28]
        lea edi, ss:[ebp+0x2C]
        lea esi, ds:[ebx+0x2C]
        cmp esi, edi
        mov dword ptr ds : [ebx+0x28], ecx
        je public_6efa6aa
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        jne public_6efa54f
        xor edx, edx
        jmp public_6efa557
        public_6efa54f : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebx
        sar edx, 7
        public_6efa557 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6efa562
        xor eax, eax
        jmp public_6efa56a
        public_6efa562 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 7
        public_6efa56a : nop
        cmp edx, eax
        ja public_6efa5fa
        mov eax, dword ptr ds : [edi+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], ecx
        je public_6efa5a5
        public_6efa581 : nop
        push ebx
        call public_6ef8560
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        add edx, 0x80
        add ebx, 0x80
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], edx
        mov ecx, edx
        jne public_6efa581
        public_6efa5a5 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], eax
        mov ebx, ecx
        je public_6efa5c9
        public_6efa5b2 : nop
        push 0
        mov ecx, ebx
        call public_6efa720
        mov eax, dword ptr ss : [esp+0x20]
        add ebx, 0x80
        cmp ebx, eax
        jne public_6efa5b2
        public_6efa5c9 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6efa5e2
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        shl edi, 7
        add edi, eax
        mov dword ptr ds : [esi+8], edi
        jmp public_6efa6a6
        public_6efa5e2 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [esi+4]
        sar edi, 7
        shl edi, 7
        add edi, eax
        mov dword ptr ds : [esi+8], edi
        jmp public_6efa6a6
        public_6efa5fa : nop
        mov ecx, edi
        call public_6ef6b30
        mov ecx, esi
        mov ebx, eax
        call public_6efae40
        cmp ebx, eax
        ja public_6efa659
        mov edx, dword ptr ds : [edi+4]
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], edx
        call public_6ef6b30
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        shl ebx, 7
        push eax
        add ebx, edx
        push ebx
        push ecx
        call public_6efae60
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_6ef73c0
        mov ecx, edi
        call public_6ef6b30
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 7
        add eax, ecx
        jmp public_6efa6a3
        public_6efa659 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ef6b50
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6ef6b30
        test eax, eax
        jge public_6efa681
        xor eax, eax
        public_6efa681 : nop
        shl eax, 7
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6ef73c0
        mov dword ptr ds : [esi+0xC], eax
        public_6efa6a3 : nop
        mov dword ptr ds : [esi+8], eax
        public_6efa6a6 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6efa6aa : nop
        mov ecx, dword ptr ds : [ebx+0x44]
        mov edx, dword ptr ds : [ebx+0x40]
        lea edi, ds:[ebx+0x3C]
        push ecx
        push edx
        mov ecx, edi
        call public_6ef6750
        mov ecx, dword ptr ss : [ebp+0x40]
        test ecx, ecx
        jne public_6efa6c7
        xor eax, eax
        jmp public_6efa6cf
        public_6efa6c7 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        sub eax, ecx
        sar eax, 3
        public_6efa6cf : nop
        push eax
        mov ecx, edi
        call public_6ef7860
        mov esi, dword ptr ss : [ebp+0x40]
        cmp esi, dword ptr ss : [ebp+0x44]
        je public_6efa707
        nop 
        public_6efa6e0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+8]
        push edx
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        mov ecx, edi
        call public_6ef6bb0
        mov eax, dword ptr ss : [ebp+0x44]
        add esi, 8
        cmp esi, eax
        jne public_6efa6e0
        public_6efa707 : nop
        mov ecx, dword ptr ss : [ebp+0x4C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x4C], ecx
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6efa4f0)
    }
}

#undef public_6efa54f
#undef public_6efa557
#undef public_6efa562
#undef public_6efa56a
#undef public_6efa581
#undef public_6efa5a5
#undef public_6efa5b2
#undef public_6efa5c9
#undef public_6efa5e2
#undef public_6efa5fa
#undef public_6efa659
#undef public_6efa681
#undef public_6efa6a3
#undef public_6efa6a6
#undef public_6efa6aa
#undef public_6efa6c7
#undef public_6efa6cf
#undef public_6efa6e0
#undef public_6efa707
