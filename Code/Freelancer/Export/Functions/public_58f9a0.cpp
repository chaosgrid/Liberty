#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e360);
CLANG_FORWARD_PROC_SYMBOL(public_58f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_58f9b0 _public_58f9b0
#define public_58f9be _public_58f9be

PROC_DECLARE(0x58f9a0, internal_58f9a0, public_58f9a0);
extern "C" NAKED register_t __cdecl internal_58f9a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_58f9be
        nop 
        public_58f9b0 : nop
        mov ecx, esi
        call public_58e360
        add esi, 0x1C
        cmp esi, ebx
        jne public_58f9b0
        public_58f9be : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x58f9a0)
    }
}

#undef public_58f9b0
#undef public_58f9be
