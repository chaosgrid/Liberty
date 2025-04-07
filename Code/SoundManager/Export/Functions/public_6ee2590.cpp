#include "SoundManager-PCH.h"


#define public_6ee25b5 _public_6ee25b5

PROC_DECLARE(0x6ee2590, internal_6ee2590, public_6ee2590);
extern "C" NAKED register_t __cdecl internal_6ee2590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0xE8]
        mov eax, dword ptr ds : [eax+0x128]
        test eax, eax
        je public_6ee25b5
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6ee25b5 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee2590)
    }
}

#undef public_6ee25b5
