#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad570);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5ad580 _public_5ad580
#define public_5ad591 _public_5ad591

PROC_DECLARE(0x5ad570, internal_5ad570, public_5ad570);
extern "C" NAKED register_t __cdecl internal_5ad570()
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
        je public_5ad591
        nop 
        public_5ad580 : nop
        mov ecx, esi
        call public_5686b0
        add esi, 0x9C
        cmp esi, ebx
        jne public_5ad580
        public_5ad591 : nop
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
        UNREACHABLE_TRAP(0x5ad570)
    }
}

#undef public_5ad580
#undef public_5ad591
