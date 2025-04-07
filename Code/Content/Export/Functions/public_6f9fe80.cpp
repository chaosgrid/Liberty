#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fe80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9fe90 _public_6f9fe90
#define public_6f9fe9e _public_6f9fe9e

PROC_DECLARE(0x6f9fe80, internal_6f9fe80, public_6f9fe80);
extern "C" NAKED register_t __cdecl internal_6f9fe80()
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
        je public_6f9fe9e
        nop 
        public_6f9fe90 : nop
        mov ecx, esi
        call public_6ef05d0
        add esi, 0x14
        cmp esi, ebx
        jne public_6f9fe90
        public_6f9fe9e : nop
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
        UNREACHABLE_TRAP(0x6f9fe80)
    }
}

#undef public_6f9fe90
#undef public_6f9fe9e
