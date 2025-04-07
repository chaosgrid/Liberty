#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff260);

#define public_66ff281 _public_66ff281

PROC_DECLARE(0x66ff260, internal_66ff260, public_66ff260);
extern "C" NAKED register_t __cdecl internal_66ff260()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_66ff281
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        public_66ff281 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66ff260)
    }
}

#undef public_66ff281
