#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cc880);

#define public_4cc8ac _public_4cc8ac
#define public_4cc8ca _public_4cc8ca

PROC_DECLARE(0x4cc880, internal_4cc880, public_4cc880);
extern "C" NAKED register_t __cdecl internal_4cc880()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6748f8]
        test ecx, ecx
        je public_4cc8ca
        mov eax, dword ptr ds : [ecx+0x284]
        test eax, eax
        mov edx, dword ptr ss : [esp+4]
        je public_4cc8ac
        add eax, 0xFFFFFF64
        test eax, eax
        je public_4cc8ac
        cmp dword ptr ds : [eax+0xB0], edx
        jne public_4cc8ac
        mov al, 1
        ret 
        public_4cc8ac : nop
        mov eax, dword ptr ds : [ecx+0xB4]
        test eax, eax
        je public_4cc8ca
        add eax, 0xFFFFFF64
        test eax, eax
        je public_4cc8ca
        cmp dword ptr ds : [eax+0xB0], edx
        jne public_4cc8ca
        mov al, 1
        ret 
        public_4cc8ca : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x4cc880)
    }
}

#undef public_4cc8ac
#undef public_4cc8ca
