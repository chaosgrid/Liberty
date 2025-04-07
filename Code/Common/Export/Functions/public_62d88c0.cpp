#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d88c0);

PROC_DECLARE(0x62d88c0, internal_62d88c0, public_62d88c0);
extern "C" NAKED register_t __cdecl internal_62d88c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0x58]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov byte ptr ds : [ecx+0x64], 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d88c0)
    }
}
