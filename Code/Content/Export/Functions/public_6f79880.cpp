#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f79880);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f79890 _public_6f79890
#define public_6f7989e _public_6f7989e

PROC_DECLARE(0x6f79880, internal_6f79880, public_6f79880);
extern "C" NAKED register_t __cdecl internal_6f79880()
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
        je public_6f7989e
        nop 
        public_6f79890 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x14
        cmp esi, ebx
        jne public_6f79890
        public_6f7989e : nop
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
        UNREACHABLE_TRAP(0x6f79880)
    }
}

#undef public_6f79890
#undef public_6f7989e
