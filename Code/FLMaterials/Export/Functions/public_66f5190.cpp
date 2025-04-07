#include "FLMaterials-PCH.h"


#define public_66f519f _public_66f519f
#define public_66f51bb _public_66f51bb
#define public_66f51bd _public_66f51bd

PROC_DECLARE(0x66f5190, internal_66f5190, public_66f5190);
extern "C" NAKED register_t __cdecl internal_66f5190()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_66f519f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_66f519f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_66f51bd
        mov dword ptr ds : [ecx+4], 1
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_66f51bb
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x54]
        public_66f51bb : nop
        xor eax, eax
        public_66f51bd : nop
        ret 4
        UNREACHABLE_TRAP(0x66f5190)
    }
}

#undef public_66f519f
#undef public_66f51bb
#undef public_66f51bd
