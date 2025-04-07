#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1b80);

#define public_66f1b95 _public_66f1b95
#define public_66f1b9f _public_66f1b9f

PROC_DECLARE(0x66f1b80, internal_66f1b80, public_66f1b80);
extern "C" NAKED register_t __cdecl internal_66f1b80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], eax
        je public_66f1b95
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66f1b95 : nop
        test esi, esi
        je public_66f1b9f
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_66f1b9f : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66f1b80)
    }
}

#undef public_66f1b95
#undef public_66f1b9f
