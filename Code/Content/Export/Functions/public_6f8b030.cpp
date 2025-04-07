#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f8b030);

#define public_6f8b047 _public_6f8b047
#define public_6f8b055 _public_6f8b055
#define public_6f8b057 _public_6f8b057
#define public_6f8b070 _public_6f8b070
#define public_6f8b086 _public_6f8b086
#define public_6f8b08a _public_6f8b08a
#define public_6f8b08f _public_6f8b08f
#define public_6f8b0a4 _public_6f8b0a4
#define public_6f8b0a9 _public_6f8b0a9
#define public_6f8b0c0 _public_6f8b0c0
#define public_6f8b0cc _public_6f8b0cc
#define public_6f8b101 _public_6f8b101

PROC_DECLARE(0x6f8b030, internal_6f8b030, public_6f8b030);
extern "C" NAKED register_t __cdecl internal_6f8b030()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [esi+0x80]
        cmp eax, ecx
        push edi
        je public_6f8b055
        mov edx, dword ptr ss : [esp+0x14]
        public_6f8b047 : nop
        mov edi, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+0x34], edx
        je public_6f8b086
        add eax, 4
        cmp eax, ecx
        jne public_6f8b047
        public_6f8b055 : nop
        mov ebp, ecx
        public_6f8b057 : nop
        cmp ebp, ecx
        je public_6f8b101
        mov eax, dword ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp edi, eax
        je public_6f8b08f
        lea ebx, ds:[ebx]
        public_6f8b070 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 5
        je public_6f8b08a
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x6C]
        jne public_6f8b070
        jmp public_6f8b08f
        public_6f8b086 : nop
        mov ebp, eax
        jmp public_6f8b057
        public_6f8b08a : nop
        mov ebx, 1
        public_6f8b08f : nop
        mov ecx, dword ptr ds : [esi+0x7C]
        mov eax, ebp
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [ecx]
        sar eax, 2
        add eax, ebx
        test eax, eax
        jle public_6f8b0a9
        public_6f8b0a4 : nop
        dec eax
        mov edi, dword ptr ds : [edi]
        jne public_6f8b0a4
        public_6f8b0a9 : nop
        mov ecx, dword ptr ds : [esi+0x80]
        lea eax, ss:[ebp+4]
        cmp eax, ecx
        je public_6f8b0cc
        mov edx, ebp
        sub edx, eax
        lea ebx, ds:[ebx]
        public_6f8b0c0 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebx
        add eax, 4
        cmp eax, ecx
        jne public_6f8b0c0
        public_6f8b0cc : nop
        mov edx, dword ptr ds : [esi+0x80]
        push ecx
        add edx, 0xFFFFFFFC
        mov eax, esp
        mov dword ptr ds : [esi+0x80], edx
        push edi
        lea ecx, ds:[esi+0x64]
        mov dword ptr ds : [eax], 0
        call public_6f1cb80
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x74], 1
        call dword ptr ds : [edx+0x40]
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6f8b101 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f8b030)
    }
}

#undef public_6f8b047
#undef public_6f8b055
#undef public_6f8b057
#undef public_6f8b070
#undef public_6f8b086
#undef public_6f8b08a
#undef public_6f8b08f
#undef public_6f8b0a4
#undef public_6f8b0a9
#undef public_6f8b0c0
#undef public_6f8b0cc
#undef public_6f8b101
