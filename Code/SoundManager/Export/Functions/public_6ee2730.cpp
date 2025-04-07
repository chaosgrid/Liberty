#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2730, internal_6ee2730, public_6ee2730);
extern "C" NAKED register_t __cdecl internal_6ee2730()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        lea eax, ds:[ecx+0xA8]
        mov edx, eax
        mov edi, dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        fild dword ptr ds : [ecx+0xA4]
        fmul dword ptr ds : [eax+8]
        fst dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        fchs 
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        fchs 
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[ecx+0xB4]
        mov edx, eax
        mov edi, dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        fild dword ptr ds : [ecx+0xA4]
        pop edi
        pop esi
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ee2730)
    }
}
