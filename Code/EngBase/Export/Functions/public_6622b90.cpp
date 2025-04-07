#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6622b90);
CLANG_FORWARD_PROC_SYMBOL(public_6623cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66240d0);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6622bd4 _public_6622bd4
#define public_6622bd9 _public_6622bd9
#define public_6622bfa _public_6622bfa
#define public_6622c21 _public_6622c21
#define public_6622c2a _public_6622c2a
#define public_6622c52 _public_6622c52
#define public_6622c5b _public_6622c5b
#define public_6622c74 _public_6622c74
#define public_6622c85 _public_6622c85
#define public_6622c91 _public_6622c91

PROC_DECLARE(0x6622b90, internal_6622b90, public_6622b90);
extern "C" NAKED register_t __cdecl internal_6622b90()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6622bd4
        mov ecx, eax
        cmp eax, ecx
        jne public_6622bd4
        mov eax, dword ptr ds : [edi+4]
        mov ecx, esi
        push eax
        call public_66240d0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6622bfa
        public_6622bd4 : nop
        cmp eax, edi
        je public_6622bfa
        push ebx
        public_6622bd9 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_66252f0
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        mov ecx, esi
        call public_6623cd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6622bd9
        pop ebx
        public_6622bfa : nop
        mov ecx, dword ptr ds : [public_662b1a8]
        mov eax, dword ptr ds : [esi+4]
        mov edi, 0x80
        cmp ecx, edi
        jge public_6622c21
        mov ecx, dword ptr ds : [public_662b19c]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_662b19c], eax
        inc dword ptr ds : [public_662b1a8]
        jmp public_6622c2a
        public_6622c21 : nop
        push eax
        call public_66281d0
        add esp, 4
        public_6622c2a : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ds : [public_662b1a8]
        cmp ecx, edi
        jge public_6622c52
        mov edx, dword ptr ds : [public_662b19c]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [public_662b19c], eax
        inc dword ptr ds : [public_662b1a8]
        jmp public_6622c5b
        public_6622c52 : nop
        push eax
        call public_66281d0
        add esp, 4
        public_6622c5b : nop
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [public_662b1a0]
        dec eax
        mov dword ptr ds : [public_662b1a0], eax
        jne public_6622c91
        mov eax, dword ptr ds : [public_662b19c]
        cmp eax, ebp
        je public_6622c85
        public_6622c74 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_66281d0
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_6622c74
        public_6622c85 : nop
        mov dword ptr ds : [public_662b19c], ebp
        mov dword ptr ds : [public_662b1a8], ebp
        public_6622c91 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6622b90)
    }
}

#undef public_6622bd4
#undef public_6622bd9
#undef public_6622bfa
#undef public_6622c21
#undef public_6622c2a
#undef public_6622c52
#undef public_6622c5b
#undef public_6622c74
#undef public_6622c85
#undef public_6622c91
