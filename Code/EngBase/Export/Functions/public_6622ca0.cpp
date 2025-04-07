#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6622ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6624130);
CLANG_FORWARD_PROC_SYMBOL(public_6624530);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6622ce4 _public_6622ce4
#define public_6622ce9 _public_6622ce9
#define public_6622d0a _public_6622d0a
#define public_6622d31 _public_6622d31
#define public_6622d3a _public_6622d3a
#define public_6622d62 _public_6622d62
#define public_6622d6b _public_6622d6b
#define public_6622d84 _public_6622d84
#define public_6622d95 _public_6622d95
#define public_6622da1 _public_6622da1

PROC_DECLARE(0x6622ca0, internal_6622ca0, public_6622ca0);
extern "C" NAKED register_t __cdecl internal_6622ca0()
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
        je public_6622ce4
        mov ecx, eax
        cmp eax, ecx
        jne public_6622ce4
        mov eax, dword ptr ds : [edi+4]
        mov ecx, esi
        push eax
        call public_6624530
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6622d0a
        public_6622ce4 : nop
        cmp eax, edi
        je public_6622d0a
        push ebx
        public_6622ce9 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_66252f0
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        mov ecx, esi
        call public_6624130
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6622ce9
        pop ebx
        public_6622d0a : nop
        mov ecx, dword ptr ds : [public_662b198]
        mov eax, dword ptr ds : [esi+4]
        mov edi, 0x40
        cmp ecx, edi
        jge public_6622d31
        mov ecx, dword ptr ds : [public_662b18c]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_662b18c], eax
        inc dword ptr ds : [public_662b198]
        jmp public_6622d3a
        public_6622d31 : nop
        push eax
        call public_66281d0
        add esp, 4
        public_6622d3a : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ds : [public_662b198]
        cmp ecx, edi
        jge public_6622d62
        mov edx, dword ptr ds : [public_662b18c]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [public_662b18c], eax
        inc dword ptr ds : [public_662b198]
        jmp public_6622d6b
        public_6622d62 : nop
        push eax
        call public_66281d0
        add esp, 4
        public_6622d6b : nop
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [public_662b190]
        dec eax
        mov dword ptr ds : [public_662b190], eax
        jne public_6622da1
        mov eax, dword ptr ds : [public_662b18c]
        cmp eax, ebp
        je public_6622d95
        public_6622d84 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_66281d0
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_6622d84
        public_6622d95 : nop
        mov dword ptr ds : [public_662b18c], ebp
        mov dword ptr ds : [public_662b198], ebp
        public_6622da1 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6622ca0)
    }
}

#undef public_6622ce4
#undef public_6622ce9
#undef public_6622d0a
#undef public_6622d31
#undef public_6622d3a
#undef public_6622d62
#undef public_6622d6b
#undef public_6622d84
#undef public_6622d95
#undef public_6622da1
