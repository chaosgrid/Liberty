#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e750);

#define public_630e780 _public_630e780
#define public_630e7a4 _public_630e7a4
#define public_630e7da _public_630e7da
#define public_630e7e4 _public_630e7e4

PROC_DECLARE(0x630e750, internal_630e750, public_630e750);
extern "C" NAKED register_t __cdecl internal_630e750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push 0xFFFFFFFF
        push 1
        push ebp
        push eax
        or edi, 0xFFFFFFFF
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_630e7da
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_630e780 : nop
        cmp edi, 0xFFFFFFFF
        jne public_630e7da
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_630e7a4
        mov eax, offset public_63997b0
        public_630e7a4 : nop
        push ebx
        push eax
        call dword ptr ds : [public_63991e4]
        add esp, 8
        test eax, eax
        je public_630e7e4
        push ebx
        push esi
        call public_630e750
        add esp, 8
        push esi
        mov edi, eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_630e780
        public_630e7da : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_630e7e4 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x630e750)
    }
}

#undef public_630e780
#undef public_630e7a4
#undef public_630e7da
#undef public_630e7e4
