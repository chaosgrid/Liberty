#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4254e);
CLANG_FORWARD_PROC_SYMBOL(public_6d42671);
CLANG_FORWARD_PROC_SYMBOL(public_6d48465);

#define public_6d4268f _public_6d4268f
#define public_6d42698 _public_6d42698
#define public_6d426a4 _public_6d426a4
#define public_6d426b8 _public_6d426b8
#define public_6d426c6 _public_6d426c6
#define public_6d426d8 _public_6d426d8
#define public_6d426f0 _public_6d426f0

PROC_DECLARE(0x6d42671, internal_6d42671, public_6d42671);
extern "C" NAKED register_t __cdecl internal_6d42671()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        xor ecx, ecx
        push esi
        xor esi, esi
        cmp eax, ecx
        push edi
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp-8], ecx
        je public_6d4268f
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], eax
        public_6d4268f : nop
        mov edi, dword ptr ss : [ebp+0xC]
        cmp edi, ecx
        je public_6d42698
        mov esi, dword ptr ds : [edi]
        public_6d42698 : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        cmp ebx, ecx
        je public_6d426a4
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-8], eax
        public_6d426a4 : nop
        cmp dword ptr ss : [ebp-4], ecx
        je public_6d426b8
        push dword ptr ss : [ebp-8]
        push esi
        push dword ptr ss : [ebp-4]
        call public_6d4254e
        add esp, 0xC
        public_6d426b8 : nop
        test esi, esi
        je public_6d426c6
        push esi
        call public_6d48465
        and dword ptr ds : [edi], 0
        pop ecx
        public_6d426c6 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d426d8
        push dword ptr ss : [ebp-8]
        call public_6d48465
        and dword ptr ds : [ebx], 0
        pop ecx
        public_6d426d8 : nop
        cmp dword ptr ss : [ebp-4], 0
        pop edi
        pop esi
        pop ebx
        je public_6d426f0
        push dword ptr ss : [ebp-4]
        call public_6d48465
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ds : [eax], 0
        pop ecx
        public_6d426f0 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d42671)
    }
}

#undef public_6d4268f
#undef public_6d42698
#undef public_6d426a4
#undef public_6d426b8
#undef public_6d426c6
#undef public_6d426d8
#undef public_6d426f0
