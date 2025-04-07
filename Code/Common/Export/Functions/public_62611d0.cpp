#include "Common-PCH.h"

PROC_DECLARE(0x62611d0, internal_62611d0, public_62611d0);
extern "C" NAKED register_t __cdecl internal_62611d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax]
        mov edx, ecx
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[ecx+0xC]
        mov ecx, 9
        mov dword ptr ds : [edx+8], eax
        rep movsd
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62611d0)
    }
}
