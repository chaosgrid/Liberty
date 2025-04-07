#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);

#define public_628a910 _public_628a910
#define public_628a93d _public_628a93d
#define public_628a960 _public_628a960
#define public_628a986 _public_628a986

PROC_DECLARE(0x628a8b0, internal_628a8b0, public_628a8b0);
extern "C" NAKED register_t __cdecl internal_628a8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        push ebx
        push eax
        call dword ptr ds : [ecx+0x80]
        mov ebp, dword ptr ss : [esp+0x14]
        mov edi, eax
        xor eax, eax
        cmp edi, eax
        je public_628a93d
        cmp edi, ebp
        je public_628a93d
        mov ecx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [edi+0x54], eax
        mov dword ptr ds : [edi+0x50], eax
        call public_6345450
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0xFFFFFFFF
        je public_628a986
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_628a986
        public_628a910 : nop
        push esi
        push edi
        call public_628a8b0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        push esi
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_628a910
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_628a93d : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_628a986
        lea esp, ss:[esp]
        public_628a960 : nop
        push esi
        push ebp
        call public_628a8b0
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push esi
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_628a960
        public_628a986 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x628a8b0)
    }
}

#undef public_628a910
#undef public_628a93d
#undef public_628a960
#undef public_628a986
