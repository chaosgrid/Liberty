#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b0880);

#define public_5b0897 _public_5b0897

PROC_DECLARE(0x5b0880, internal_5b0880, public_5b0880);
extern "C" NAKED register_t __cdecl internal_5b0880()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67ecac]
        test ecx, ecx
        je public_5b0897
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        cmp eax, 2
        jne public_5b0897
        mov al, 1
        ret 
        public_5b0897 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x5b0880)
    }
}

#undef public_5b0897
