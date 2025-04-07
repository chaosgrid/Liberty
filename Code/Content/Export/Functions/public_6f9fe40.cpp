#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fe40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9fe50 _public_6f9fe50
#define public_6f9fe5e _public_6f9fe5e

PROC_DECLARE(0x6f9fe40, internal_6f9fe40, public_6f9fe40);
extern "C" NAKED register_t __cdecl internal_6f9fe40()
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
        je public_6f9fe5e
        nop 
        public_6f9fe50 : nop
        mov ecx, esi
        call public_6f956a0
        add esi, 0x24
        cmp esi, ebx
        jne public_6f9fe50
        public_6f9fe5e : nop
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
        UNREACHABLE_TRAP(0x6f9fe40)
    }
}

#undef public_6f9fe50
#undef public_6f9fe5e
