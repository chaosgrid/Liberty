#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29040);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c29060 _public_6c29060
#define public_6c2908a _public_6c2908a

PROC_DECLARE(0x6c29040, internal_6c29040, public_6c29040);
extern "C" NAKED register_t __cdecl internal_6c29040()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        je public_6c2908a
        mov eax, dword ptr ds : [edi+0x34]
        push esi
        push eax
        call public_6c34ea0
        add esp, 4
        mov dword ptr ds : [edi+0x34], 0
        xor esi, esi
        public_6c29060 : nop
        mov ecx, dword ptr ds : [edi+0x38]
        add ecx, esi
        push ecx
        call public_6c23dc0
        add esi, 0x14
        add esp, 4
        cmp esi, 0x50
        jl public_6c29060
        mov edx, dword ptr ds : [edi+0x38]
        push edx
        call public_6c34ea0
        add esp, 4
        mov dword ptr ds : [edi+0x38], 0
        pop esi
        public_6c2908a : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6c29040)
    }
}

#undef public_6c29060
#undef public_6c2908a
