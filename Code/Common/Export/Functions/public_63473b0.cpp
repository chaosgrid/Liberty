#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63473b0);

PROC_DECLARE(0x63473b0, internal_63473b0, public_63473b0);
extern "C" NAKED register_t __cdecl internal_63473b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x1B4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        mov eax, edx
        mov dword ptr ds : [ecx+0x9C], eax
        mov dword ptr ss : [esp], edx
        fstp dword ptr ds : [ecx+0x94]
        push esi
        fstp dword ptr ds : [ecx+0x98]
        mov edx, dword ptr ds : [ecx+0x1B4]
        add edx, 0x10
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0xE4]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [ecx+0x1B4], 0
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63473b0)
    }
}
