#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_6284ca0);
CLANG_FORWARD_PROC_SYMBOL(public_628a510);
CLANG_FORWARD_PROC_SYMBOL(public_628a700);
CLANG_FORWARD_PROC_SYMBOL(public_630e6a0);

#define public_628a77f _public_628a77f
#define public_628a7a0 _public_628a7a0
#define public_628a7c7 _public_628a7c7

PROC_DECLARE(0x628a700, internal_628a700, public_628a700);
extern "C" NAKED register_t __cdecl internal_628a700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, eax
        test esi, esi
        je public_628a77f
        cmp esi, ebx
        je public_628a77f
        mov edi, dword ptr ss : [esp+0x1C]
        push 0
        push edi
        push esi
        call public_628a510
        mov edx, dword ptr ds : [public_6399040]
        mov ebx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edx]
        mov ebp, dword ptr ds : [eax]
        push ebx
        call public_630e6a0
        mov ecx, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push eax
        push edx
        call dword ptr ss : [ebp+0x80]
        push esi
        push eax
        call public_6284ca0
        mov al, byte ptr ds : [edi+0x1D]
        add esp, 8
        test al, al
        je public_628a7c7
        mov ecx, dword ptr ds : [esi+0x84]
        push 1
        push 1
        call public_6281510
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_628a77f : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_628a7c7
        mov ebp, dword ptr ss : [esp+0x1C]
        nop 
        public_628a7a0 : nop
        push ebp
        push esi
        push ebx
        call public_628a700
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push esi
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_628a7a0
        public_628a7c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x628a700)
    }
}

#undef public_628a77f
#undef public_628a7a0
#undef public_628a7c7
