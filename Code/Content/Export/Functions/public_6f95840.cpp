#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f95840);
CLANG_FORWARD_PROC_SYMBOL(public_6f95ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f95852 _public_6f95852
#define public_6f95866 _public_6f95866

PROC_DECLARE(0x6f95840, internal_6f95840, public_6f95840);
extern "C" NAKED register_t __cdecl internal_6f95840()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6fd3c14]
        push edi
        mov edi, dword ptr ds : [public_6fd3c18]
        cmp esi, edi
        je public_6f95866
        public_6f95852 : nop
        mov ecx, esi
        call public_6f95ca0
        add esi, 0x34
        cmp esi, edi
        jne public_6f95852
        mov esi, dword ptr ds : [public_6fd3c14]
        public_6f95866 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd3c14], eax
        mov dword ptr ds : [public_6fd3c18], eax
        mov dword ptr ds : [public_6fd3c1c], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f95840)
    }
}

#undef public_6f95852
#undef public_6f95866
