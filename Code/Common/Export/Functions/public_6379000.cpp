#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6379000);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_637901b _public_637901b
#define public_637902e _public_637902e
#define public_6379035 _public_6379035
#define public_637904c _public_637904c
#define public_6379066 _public_6379066
#define public_6379076 _public_6379076
#define public_637907b _public_637907b
#define public_6379087 _public_6379087
#define public_63790a8 _public_63790a8
#define public_63790af _public_63790af
#define public_63790b6 _public_63790b6
#define public_63790c3 _public_63790c3
#define public_63790c8 _public_63790c8
#define public_63790d4 _public_63790d4
#define public_63790f1 _public_63790f1

PROC_DECLARE(0x6379000, internal_6379000, public_6379000);
extern "C" NAKED register_t __cdecl internal_6379000()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor ebp, ebp
        cmp eax, ebp
        je public_637901b
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [edi+0x18], ebp
        public_637901b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        je public_637902e
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [edi+0x1C], ebp
        public_637902e : nop
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebp
        je public_63790af
        public_6379035 : nop
        mov ebx, dword ptr ds : [esi+8]
        cmp ebx, ebp
        je public_637904c
        mov ecx, ebx
        call public_62a8920
        push ebx
        call public_6391d5a
        add esp, 4
        public_637904c : nop
        mov ebx, dword ptr ds : [esi+0xC]
        cmp ebx, ebp
        mov dword ptr ds : [esi+8], ebp
        je public_6379066
        mov ecx, ebx
        call public_62a8920
        push ebx
        call public_6391d5a
        add esp, 4
        public_6379066 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        mov dword ptr ds : [esi+0xC], ebp
        je public_6379076
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        jmp public_637907b
        public_6379076 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi+8], edx
        public_637907b : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_6379087
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_6379087 : nop
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov ecx, dword ptr ds : [edi+0xC]
        dec ecx
        cmp esi, ebp
        mov dword ptr ds : [edi+0xC], ecx
        je public_63790a8
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_63790a8 : nop
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebp
        jne public_6379035
        public_63790af : nop
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebp
        je public_63790f1
        public_63790b6 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebp
        je public_63790c3
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        jmp public_63790c8
        public_63790c3 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x10], ecx
        public_63790c8 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, ebp
        je public_63790d4
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_63790d4 : nop
        mov dword ptr ds : [eax], 0xFFFFFFFF
        mov ebx, dword ptr ds : [edi+0x14]
        dec ebx
        push eax
        mov dword ptr ds : [edi+0x14], ebx
        call public_6391d5a
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 4
        cmp eax, ebp
        jne public_63790b6
        public_63790f1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6379000)
    }
}

#undef public_637901b
#undef public_637902e
#undef public_6379035
#undef public_637904c
#undef public_6379066
#undef public_6379076
#undef public_637907b
#undef public_6379087
#undef public_63790a8
#undef public_63790af
#undef public_63790b6
#undef public_63790c3
#undef public_63790c8
#undef public_63790d4
#undef public_63790f1
