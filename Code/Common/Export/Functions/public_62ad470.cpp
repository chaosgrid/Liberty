#include "Common-PCH.h"


#define public_62ad4af _public_62ad4af

PROC_DECLARE(0x62ad470, internal_62ad470, public_62ad470);
extern "C" NAKED register_t __cdecl internal_62ad470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x58]
        test eax, eax
        je public_62ad4af
        mov edx, dword ptr ss : [esp+4]
        add eax, 8
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ss : [esp+0xC]
        add ecx, 0x14
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov al, 1
        pop esi
        ret 8
        public_62ad4af : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x62ad470)
    }
}

#undef public_62ad4af
