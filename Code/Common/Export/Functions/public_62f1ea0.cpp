#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1ea0);

#define public_62f1ea7 _public_62f1ea7
#define public_62f1eb0 _public_62f1eb0
#define public_62f1eb2 _public_62f1eb2
#define public_62f1ebf _public_62f1ebf

PROC_DECLARE(0x62f1ea0, internal_62f1ea0, public_62f1ea0);
extern "C" NAKED register_t __cdecl internal_62f1ea0()
{
    __asm
    {
        mov dx, word ptr ss : [esp+4]
        xor eax, eax
        public_62f1ea7 : nop
        test eax, eax
        jne public_62f1eb0
        mov eax, dword ptr ds : [ecx+0x5C]
        jmp public_62f1eb2
        public_62f1eb0 : nop
        mov eax, dword ptr ds : [eax]
        public_62f1eb2 : nop
        test eax, eax
        je public_62f1ebf
        cmp word ptr ds : [eax+4], dx
        jne public_62f1ea7
        ret 4
        public_62f1ebf : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62f1ea0)
    }
}

#undef public_62f1ea7
#undef public_62f1eb0
#undef public_62f1eb2
#undef public_62f1ebf
