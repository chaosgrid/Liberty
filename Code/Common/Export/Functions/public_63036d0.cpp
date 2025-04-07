#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63036d0);

#define public_63036f8 _public_63036f8
#define public_630370f _public_630370f

PROC_DECLARE(0x63036d0, internal_63036d0, public_63036d0);
extern "C" NAKED register_t __cdecl internal_63036d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        sub esp, 8
        push ebx
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        xor bl, bl
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_63036f8
        mov eax, offset public_63997b0
        public_63036f8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        mov al, 1
        je public_630370f
        mov al, bl
        public_630370f : nop
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63036d0)
    }
}

#undef public_63036f8
#undef public_630370f
