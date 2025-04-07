#include "Common-PCH.h"

PROC_DECLARE(0x6273d70, internal_6273d70, public_6273d70);
extern "C" NAKED register_t __cdecl internal_6273d70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0xE28]
        lea ecx, ds:[ecx+ecx*2]
        push esi
        mov esi, dword ptr ss : [esp+8]
        shl ecx, 4
        push edi
        lea edi, ds:[ecx+eax+0xE2C]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ds : [eax+0xE28]
        inc ecx
        pop edi
        mov dword ptr ds : [eax+0xE28], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6273d70)
    }
}
