#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66f450f _public_66f450f
#define public_66f4528 _public_66f4528

PROC_DECLARE(0x66f4500, internal_66f4500, public_66f4500);
extern "C" NAKED register_t __cdecl internal_66f4500()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_66f450f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_66f450f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_66f4528
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6700710
        add esp, 4
        xor eax, eax
        public_66f4528 : nop
        ret 4
        UNREACHABLE_TRAP(0x66f4500)
    }
}

#undef public_66f450f
#undef public_66f4528
