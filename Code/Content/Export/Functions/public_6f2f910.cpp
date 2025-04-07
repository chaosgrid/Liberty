#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f910);
CLANG_FORWARD_PROC_SYMBOL(public_6f30830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2f920 _public_6f2f920
#define public_6f2f92e _public_6f2f92e

PROC_DECLARE(0x6f2f910, internal_6f2f910, public_6f2f910);
extern "C" NAKED register_t __cdecl internal_6f2f910()
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
        je public_6f2f92e
        nop 
        public_6f2f920 : nop
        mov ecx, esi
        call public_6f30830
        add esi, 0x5C
        cmp esi, ebx
        jne public_6f2f920
        public_6f2f92e : nop
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
        UNREACHABLE_TRAP(0x6f2f910)
    }
}

#undef public_6f2f920
#undef public_6f2f92e
