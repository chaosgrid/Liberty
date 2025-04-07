#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4254e);
CLANG_FORWARD_PROC_SYMBOL(public_6d442b1);
CLANG_FORWARD_PROC_SYMBOL(public_6d4430d);
CLANG_FORWARD_PROC_SYMBOL(public_6d47f82);
CLANG_FORWARD_PROC_SYMBOL(public_6d484a8);

#define public_6d4256c _public_6d4256c
#define public_6d4257c _public_6d4257c
#define public_6d425db _public_6d425db
#define public_6d425ef _public_6d425ef
#define public_6d42609 _public_6d42609
#define public_6d4261f _public_6d4261f
#define public_6d4262d _public_6d4262d

PROC_DECLARE(0x6d4254e, internal_6d4254e, public_6d4254e);
extern "C" NAKED register_t __cdecl internal_6d4254e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp+0xC], edi
        je public_6d4256c
        push dword ptr ss : [ebp+0xC]
        push ebx
        call public_6d4430d
        pop ecx
        pop ecx
        public_6d4256c : nop
        cmp dword ptr ss : [ebp+0x10], edi
        je public_6d4257c
        push dword ptr ss : [ebp+0x10]
        push ebx
        call public_6d4430d
        pop ecx
        pop ecx
        public_6d4257c : nop
        push dword ptr ds : [ebx+0x9C]
        push ebx
        call public_6d484a8
        push dword ptr ds : [ebx+0xDC]
        push ebx
        call public_6d484a8
        push dword ptr ds : [ebx+0xD8]
        push ebx
        call public_6d484a8
        push dword ptr ds : [ebx+0x174]
        push ebx
        call public_6d484a8
        push dword ptr ds : [ebx+0x178]
        push ebx
        call public_6d484a8
        push dword ptr ds : [ebx+0x138]
        push ebx
        call public_6d484a8
        add esp, 0x30
        test byte ptr ds : [ebx+0x5D], 0x10
        je public_6d425db
        push dword ptr ds : [ebx+0x104]
        push ebx
        call public_6d442b1
        pop ecx
        pop ecx
        public_6d425db : nop
        test byte ptr ds : [ebx+0x5D], 0x20
        je public_6d425ef
        push dword ptr ds : [ebx+0x15C]
        push ebx
        call public_6d484a8
        pop ecx
        pop ecx
        public_6d425ef : nop
        cmp dword ptr ds : [ebx+0x144], edi
        je public_6d4262d
        push 8
        xor esi, esi
        pop ecx
        sub ecx, dword ptr ds : [ebx+0x12C]
        inc esi
        shl esi, cl
        cmp esi, edi
        jle public_6d4261f
        public_6d42609 : nop
        mov eax, dword ptr ds : [ebx+0x144]
        push dword ptr ds : [eax+edi*4]
        push ebx
        call public_6d484a8
        inc edi
        cmp edi, esi
        pop ecx
        pop ecx
        jl public_6d42609
        public_6d4261f : nop
        push dword ptr ds : [ebx+0x144]
        push ebx
        call public_6d484a8
        pop ecx
        pop ecx
        public_6d4262d : nop
        lea eax, ds:[ebx+0x64]
        push eax
        call public_6d47f82
        mov eax, dword ptr ds : [ebx+0x48]
        mov edx, dword ptr ds : [ebx+0x40]
        pop ecx
        push 0x10
        pop ecx
        push 0x67
        mov esi, ebx
        lea edi, ss:[ebp-0x40]
        rep movsd
        mov esi, dword ptr ds : [ebx+0x44]
        pop ecx
        mov dword ptr ss : [ebp+0xC], eax
        xor eax, eax
        mov edi, ebx
        rep stosd
        mov eax, dword ptr ss : [ebp+0xC]
        push 0x10
        mov dword ptr ds : [ebx+0x44], esi
        pop ecx
        mov edi, ebx
        lea esi, ss:[ebp-0x40]
        rep movsd
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x40], edx
        mov dword ptr ds : [ebx+0x48], eax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4254e)
    }
}

#undef public_6d4256c
#undef public_6d4257c
#undef public_6d425db
#undef public_6d425ef
#undef public_6d42609
#undef public_6d4261f
#undef public_6d4262d
