#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712800);

PROC_DECLARE(0x6712800, internal_6712800, public_6712800);
extern "C" NAKED register_t __cdecl internal_6712800()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        lea eax, ds:[ecx+0x1C]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6712800)
    }
}
