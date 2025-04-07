#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613540);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6613563 _public_6613563
#define public_6613586 _public_6613586
#define public_661359e _public_661359e
#define public_66135a4 _public_66135a4
#define public_66135c6 _public_66135c6
#define public_66135e0 _public_66135e0
#define public_66135ee _public_66135ee
#define public_6613610 _public_6613610
#define public_6613613 _public_6613613
#define public_6613629 _public_6613629
#define public_661362c _public_661362c
#define public_661363a _public_661363a

PROC_DECLARE(0x6613540, internal_6613540, public_6613540);
extern "C" NAKED register_t __cdecl internal_6613540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        xor ebp, ebp
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov dword ptr ds : [ebx+4], eax
        je public_6613563
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6613563 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+8], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0x10], edx
        mov al, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [ebx+0x14], al
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, ebp
        jne public_6613586
        xor eax, eax
        jmp public_661359e
        public_6613586 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_661359e : nop
        cmp eax, ebp
        jge public_66135a4
        xor eax, eax
        public_66135a4 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_66281dc
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov edi, dword ptr ds : [edi+0x14]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov esi, eax
        je public_661363a
        public_66135c6 : nop
        cmp esi, ebp
        je public_661362c
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_66135e0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], ebp
        public_66135e0 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        je public_66135ee
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_66135ee : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebp
        je public_6613610
        push eax
        call dword ptr ds : [public_662906c]
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        jmp public_6613613
        public_6613610 : nop
        mov dword ptr ds : [esi+0xC], ebp
        public_6613613 : nop
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebp
        je public_6613629
        push eax
        call dword ptr ds : [public_662906c]
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        jmp public_661362c
        public_6613629 : nop
        mov dword ptr ds : [esi+0x10], ebp
        public_661362c : nop
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0x14
        add esi, 0x14
        cmp edi, eax
        jne public_66135c6
        public_661363a : nop
        mov dword ptr ds : [ebx+0x1C], esi
        mov dword ptr ds : [ebx+0x20], esi
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6613540)
    }
}

#undef public_6613563
#undef public_6613586
#undef public_661359e
#undef public_66135a4
#undef public_66135c6
#undef public_66135e0
#undef public_66135ee
#undef public_6613610
#undef public_6613613
#undef public_6613629
#undef public_661362c
#undef public_661363a
