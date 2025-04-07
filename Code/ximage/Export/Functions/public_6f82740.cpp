#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82740);

#define public_6f82755 _public_6f82755

PROC_DECLARE(0x6f82740, internal_6f82740, public_6f82740);
extern "C" NAKED register_t __cdecl internal_6f82740()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f82755
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f82755 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f82740)
    }
}

#undef public_6f82755
