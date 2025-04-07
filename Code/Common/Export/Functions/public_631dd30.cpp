#include "Common-PCH.h"

PROC_DECLARE(0x631dd30, internal_631dd30, public_631dd30);
extern "C" NAKED register_t __cdecl internal_631dd30()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ds : [public_6399308]
        call esi
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_63997d0]
        fstp dword ptr ss : [esp+8]
        call esi
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63997d0]
        fstp dword ptr ss : [esp+0xC]
        call esi
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        fmul dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        pop esi
        fmul dword ptr ds : [public_63997d0]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631dd30)
    }
}
