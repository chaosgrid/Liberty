#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef9e20 _public_6ef9e20
#define public_6ef9e2e _public_6ef9e2e

PROC_DECLARE(0x6ef9e10, internal_6ef9e10, public_6ef9e10);
extern "C" NAKED register_t __cdecl internal_6ef9e10()
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
        je public_6ef9e2e
        nop 
        public_6ef9e20 : nop
        mov ecx, esi
        call public_6eec8d0
        add esi, 0x14
        cmp esi, ebx
        jne public_6ef9e20
        public_6ef9e2e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef9e10)
    }
}

#undef public_6ef9e20
#undef public_6ef9e2e
