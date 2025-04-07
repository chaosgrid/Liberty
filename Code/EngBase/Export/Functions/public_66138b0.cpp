#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66138b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66138ca _public_66138ca
#define public_66138ed _public_66138ed
#define public_6613905 _public_6613905
#define public_661390b _public_661390b
#define public_661392d _public_661392d
#define public_6613947 _public_6613947
#define public_6613955 _public_6613955
#define public_6613977 _public_6613977
#define public_661397a _public_661397a
#define public_6613990 _public_6613990
#define public_6613993 _public_6613993
#define public_66139a1 _public_66139a1

PROC_DECLARE(0x66138b0, internal_66138b0, public_66138b0);
extern "C" NAKED register_t __cdecl internal_66138b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        xor ebp, ebp
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov dword ptr ds : [ebx], eax
        je public_66138ca
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66138ca : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], eax
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], ecx
        mov dl, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [ebx+0x10], dl
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, ebp
        jne public_66138ed
        xor eax, eax
        jmp public_6613905
        public_66138ed : nop
        mov ecx, dword ptr ds : [edi+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6613905 : nop
        cmp eax, ebp
        jge public_661390b
        xor eax, eax
        public_661390b : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_66281dc
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov edi, dword ptr ds : [edi+0x14]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov esi, eax
        je public_66139a1
        public_661392d : nop
        cmp esi, ebp
        je public_6613993
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_6613947
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], ebp
        public_6613947 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        je public_6613955
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6613955 : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebp
        je public_6613977
        push eax
        call dword ptr ds : [public_662906c]
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        jmp public_661397a
        public_6613977 : nop
        mov dword ptr ds : [esi+0xC], ebp
        public_661397a : nop
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebp
        je public_6613990
        push eax
        call dword ptr ds : [public_662906c]
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6613993
        public_6613990 : nop
        mov dword ptr ds : [esi+0x10], ebp
        public_6613993 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0x14
        add esi, 0x14
        cmp edi, eax
        jne public_661392d
        public_66139a1 : nop
        mov dword ptr ds : [ebx+0x18], esi
        mov dword ptr ds : [ebx+0x1C], esi
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66138b0)
    }
}

#undef public_66138ca
#undef public_66138ed
#undef public_6613905
#undef public_661390b
#undef public_661392d
#undef public_6613947
#undef public_6613955
#undef public_6613977
#undef public_661397a
#undef public_6613990
#undef public_6613993
#undef public_66139a1
