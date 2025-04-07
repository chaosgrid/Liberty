#include "SoundManager-PCH.h"


#define public_6ee4aaf _public_6ee4aaf

PROC_DECLARE(0x6ee4a90, internal_6ee4a90, public_6ee4a90);
extern "C" NAKED register_t __cdecl internal_6ee4a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x12C]
        test eax, eax
        je public_6ee4aaf
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 8
        public_6ee4aaf : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6ee4a90)
    }
}

#undef public_6ee4aaf
