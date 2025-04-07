#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8560);

#define public_6ec857e _public_6ec857e
#define public_6ec8592 _public_6ec8592

PROC_DECLARE(0x6ec8560, internal_6ec8560, public_6ec8560);
extern "C" NAKED register_t __cdecl internal_6ec8560()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        mov edi, dword ptr ds : [public_6ed1054]
        je public_6ec857e
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_6ec857e : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6ec8592
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        public_6ec8592 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec8560)
    }
}

#undef public_6ec857e
#undef public_6ec8592
