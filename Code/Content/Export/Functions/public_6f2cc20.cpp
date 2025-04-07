#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2cc38 _public_6f2cc38
#define public_6f2cc50 _public_6f2cc50
#define public_6f2cc62 _public_6f2cc62
#define public_6f2cc66 _public_6f2cc66
#define public_6f2cc93 _public_6f2cc93
#define public_6f2cc95 _public_6f2cc95
#define public_6f2cc9d _public_6f2cc9d

PROC_DECLARE(0x6f2cc20, internal_6f2cc20, public_6f2cc20);
extern "C" NAKED register_t __cdecl internal_6f2cc20()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+8], eax
        je public_6f2cc9d
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        public_6f2cc38 : nop
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, dword ptr ds : [ebx+8]
        jne public_6f2cc93
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f2cc66
        mov edi, edi
        public_6f2cc50 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [edx+8]
        jne public_6f2cc62
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov edx, dword ptr ds : [edx]
        jne public_6f2cc50
        jmp public_6f2cc66
        public_6f2cc62 : nop
        cmp eax, ecx
        jne public_6f2cc93
        public_6f2cc66 : nop
        mov esi, edi
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_6f15350
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+8], eax
        jmp public_6f2cc95
        public_6f2cc93 : nop
        mov edi, dword ptr ds : [edi]
        public_6f2cc95 : nop
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_6f2cc38
        pop esi
        pop ebx
        public_6f2cc9d : nop
        pop edi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f2cc20)
    }
}

#undef public_6f2cc38
#undef public_6f2cc50
#undef public_6f2cc62
#undef public_6f2cc66
#undef public_6f2cc93
#undef public_6f2cc95
#undef public_6f2cc9d
