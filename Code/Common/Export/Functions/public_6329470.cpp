#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632949e _public_632949e
#define public_63294a9 _public_63294a9

PROC_DECLARE(0x6329470, internal_6329470, public_6329470);
extern "C" NAKED register_t __cdecl internal_6329470()
{
    __asm
    {
        push esi
        push edi
        push 0xC
        mov edi, ecx
        call public_6391d9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_63294a9
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi], offset public_63a4074
        jge public_632949e
        push edi
        call dword ptr ds : [public_6399238]
        add esp, 4
        public_632949e : nop
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_63294a9 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6329470)
    }
}

#undef public_632949e
#undef public_63294a9
