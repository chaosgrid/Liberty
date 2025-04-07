#include "SoundManager-PCH.h"


#define public_6ee207f _public_6ee207f

PROC_DECLARE(0x6ee2050, internal_6ee2050, public_6ee2050);
extern "C" NAKED register_t __cdecl internal_6ee2050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x12C]
        test eax, eax
        je public_6ee207f
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 1
        jb public_6ee207f
        cmp ecx, 0xB
        jae public_6ee207f
        mov ecx, dword ptr ds : [ecx*4+public_6ee9100]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        xor eax, eax
        ret 8
        public_6ee207f : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6ee2050)
    }
}

#undef public_6ee207f
