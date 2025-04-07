#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_40d470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_40d480 _public_40d480
#define public_40d48e _public_40d48e

PROC_DECLARE(0x40d470, internal_40d470, public_40d470);
extern "C" NAKED register_t __cdecl internal_40d470()
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
        je public_40d48e
        nop 
        public_40d480 : nop
        mov ecx, esi
        call public_407000
        add esi, 0x24
        cmp esi, ebx
        jne public_40d480
        public_40d48e : nop
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
        UNREACHABLE_TRAP(0x40d470)
    }
}

#undef public_40d480
#undef public_40d48e
