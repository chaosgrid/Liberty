#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661b070);

#define public_661c6f9 _public_661c6f9

PROC_DECLARE(0x661c6d0, internal_661c6d0, public_661c6d0);
extern "C" NAKED register_t __cdecl internal_661c6d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x60]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x60]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x64]
        fstp dword ptr ds : [ecx+0x64]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x68]
        fstp dword ptr ds : [ecx+0x68]
        test byte ptr ds : [ecx+0x34], 1
        je public_661c6f9
        call public_661b070
        public_661c6f9 : nop
        ret 4
        UNREACHABLE_TRAP(0x661c6d0)
    }
}

#undef public_661c6f9
