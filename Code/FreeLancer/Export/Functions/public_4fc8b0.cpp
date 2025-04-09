#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fc8b0);

#define public_4fc8d0 _public_4fc8d0

PROC_DECLARE(0x4fc8b0, internal_4fc8b0, public_4fc8b0);
extern "C" NAKED register_t __cdecl internal_4fc8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        test eax, eax
        je public_4fc8d0
        fld dword ptr ds : [eax+0x68]
        fadd dword ptr ds : [eax+0x64]
        fadd dword ptr ds : [public_5d9e0c]
        fdiv dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x80]
        ret 4
        public_4fc8d0 : nop
        fld dword ptr ds : [public_5d440c]
        fdiv dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x80]
        ret 4
        UNREACHABLE_TRAP(0x4fc8b0)
    }
}

#undef public_4fc8d0
