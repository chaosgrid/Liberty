#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6150);

#define public_62e618b _public_62e618b

PROC_DECLARE(0x62e6150, internal_62e6150, public_62e6150);
extern "C" NAKED register_t __cdecl internal_62e6150()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor edx, edx
        sub esp, 0xC
        cmp ecx, edx
        je public_62e618b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+8]
        fxch 
        fchs 
        fstp dword ptr ds : [eax]
        fchs 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ds : [eax+8]
        add esp, 0xC
        ret 
        public_62e618b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e6150)
    }
}

#undef public_62e618b
