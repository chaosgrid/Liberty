#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362060);

#define public_6362193 _public_6362193

PROC_DECLARE(0x6362180, internal_6362180, public_6362180);
extern "C" NAKED register_t __cdecl internal_6362180()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx-4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6362193
        mov dword ptr ds : [ecx+4], eax
        add ecx, 0xFFFFFFE0
        jmp public_6362060
        public_6362193 : nop
        ret 
        UNREACHABLE_TRAP(0x6362180)
    }
}

#undef public_6362193
