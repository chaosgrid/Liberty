#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecad0);

#define public_62ecae5 _public_62ecae5

PROC_DECLARE(0x62ecad0, internal_62ecad0, public_62ecad0);
extern "C" NAKED register_t __cdecl internal_62ecad0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC5]
        test al, al
        jne public_62ecae5
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_62ecae5
        add eax, 0xFFFFFFF8
        ret 
        public_62ecae5 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62ecad0)
    }
}

#undef public_62ecae5
