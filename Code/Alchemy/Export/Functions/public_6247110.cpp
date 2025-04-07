#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6247110);

#define public_6247132 _public_6247132

PROC_DECLARE(0x6247110, internal_6247110, public_6247110);
extern "C" NAKED register_t __cdecl internal_6247110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6247132
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0xC]
        public_6247132 : nop
        ret 
        UNREACHABLE_TRAP(0x6247110)
    }
}

#undef public_6247132
