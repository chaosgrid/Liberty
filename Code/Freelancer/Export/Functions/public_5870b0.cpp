#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5870b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5870c0 _public_5870c0
#define public_5870ce _public_5870ce

PROC_DECLARE(0x5870b0, internal_5870b0, public_5870b0);
extern "C" NAKED register_t __cdecl internal_5870b0()
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
        je public_5870ce
        nop 
        public_5870c0 : nop
        mov ecx, esi
        call public_455e90
        add esi, 0x20
        cmp esi, ebx
        jne public_5870c0
        public_5870ce : nop
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
        UNREACHABLE_TRAP(0x5870b0)
    }
}

#undef public_5870c0
#undef public_5870ce
