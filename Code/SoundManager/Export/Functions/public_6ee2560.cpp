#include "SoundManager-PCH.h"


#define public_6ee2585 _public_6ee2585

PROC_DECLARE(0x6ee2560, internal_6ee2560, public_6ee2560);
extern "C" NAKED register_t __cdecl internal_6ee2560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0xE4]
        mov eax, dword ptr ds : [eax+0x128]
        test eax, eax
        je public_6ee2585
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        public_6ee2585 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee2560)
    }
}

#undef public_6ee2585
