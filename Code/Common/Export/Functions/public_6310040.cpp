#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310040);

#define public_6310057 _public_6310057
#define public_631005a _public_631005a
#define public_6310060 _public_6310060

PROC_DECLARE(0x6310040, internal_6310040, public_6310040);
extern "C" NAKED register_t __cdecl internal_6310040()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        mov eax, dword ptr ds : [public_63991d0]
        je public_6310057
        mov ecx, dword ptr ds : [ecx+0x142C]
        jmp public_631005a
        public_6310057 : nop
        mov ecx, dword ptr ds : [ecx+4]
        public_631005a : nop
        test ecx, ecx
        je public_6310060
        mov eax, ecx
        public_6310060 : nop
        ret 
        UNREACHABLE_TRAP(0x6310040)
    }
}

#undef public_6310057
#undef public_631005a
#undef public_6310060
