#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c60a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c60e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c60b0 _public_4c60b0
#define public_4c60be _public_4c60be

PROC_DECLARE(0x4c60a0, internal_4c60a0, public_4c60a0);
extern "C" NAKED register_t __cdecl internal_4c60a0()
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
        je public_4c60be
        nop 
        public_4c60b0 : nop
        mov ecx, esi
        call public_4c60e0
        add esi, 0x1C
        cmp esi, ebx
        jne public_4c60b0
        public_4c60be : nop
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
        UNREACHABLE_TRAP(0x4c60a0)
    }
}

#undef public_4c60b0
#undef public_4c60be
