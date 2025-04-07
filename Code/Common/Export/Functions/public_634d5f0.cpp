#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_634d510);
CLANG_FORWARD_PROC_SYMBOL(public_634d5f0);

#define public_634d5ff _public_634d5ff
#define public_634d616 _public_634d616
#define public_634d621 _public_634d621
#define public_634d638 _public_634d638

PROC_DECLARE(0x634d5f0, internal_634d5f0, public_634d5f0);
extern "C" NAKED register_t __cdecl internal_634d5f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        test eax, eax
        jle public_634d621
        push edi
        xor edi, edi
        public_634d5ff : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, edi
        add eax, edx
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_634d616
        push eax
        call public_634d510
        add esp, 4
        public_634d616 : nop
        mov eax, dword ptr ds : [esi]
        inc ebx
        add edi, 0x70
        cmp ebx, eax
        jl public_634d5ff
        pop edi
        public_634d621 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_634d638
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        public_634d638 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x634d5f0)
    }
}

#undef public_634d5ff
#undef public_634d616
#undef public_634d621
#undef public_634d638
