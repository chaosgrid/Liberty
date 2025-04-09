#include "FreeLancer-PCH.h"

PROC_DECLARE(0x444970, internal_444970, public_444970);
extern "C" NAKED register_t __cdecl internal_444970()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx+0x30]
        push esi
        lea esi, ss:[esp+4]
        push esi
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x444970)
    }
}
