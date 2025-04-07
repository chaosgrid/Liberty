#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_628a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_628a990);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);

#define public_628a820 _public_628a820
#define public_628a844 _public_628a844
#define public_628a861 _public_628a861
#define public_628a887 _public_628a887
#define public_628a8ab _public_628a8ab

PROC_DECLARE(0x628a7d0, internal_628a7d0, public_628a7d0);
extern "C" NAKED register_t __cdecl internal_628a7d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ebx+0x54]
        push edi
        mov dword ptr ds : [ebx+0x54], 0
        mov dword ptr ds : [ebx+0x50], 0
        call public_6345450
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, 0xFFFFFFFF
        je public_628a8ab
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_628a8ab
        push esi
        lea esp, ss:[esp]
        public_628a820 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        test eax, eax
        je public_628a844
        cmp eax, ebx
        je public_628a844
        push eax
        call public_628a990
        add esp, 4
        jmp public_628a887
        public_628a844 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_628a887
        public_628a861 : nop
        push esi
        push ebx
        call public_628a8b0
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push esi
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_628a861
        public_628a887 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push edi
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_628a820
        pop esi
        public_628a8ab : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x628a7d0)
    }
}

#undef public_628a820
#undef public_628a844
#undef public_628a861
#undef public_628a887
#undef public_628a8ab
