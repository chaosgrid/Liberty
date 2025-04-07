#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_628ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628ea50 _public_628ea50
#define public_628ea5e _public_628ea5e

PROC_DECLARE(0x628ea40, internal_628ea40, public_628ea40);
extern "C" NAKED register_t __cdecl internal_628ea40()
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
        je public_628ea5e
        nop 
        public_628ea50 : nop
        mov ecx, esi
        call public_62881d0
        add esi, 8
        cmp esi, ebx
        jne public_628ea50
        public_628ea5e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x628ea40)
    }
}

#undef public_628ea50
#undef public_628ea5e
