#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee27c0, internal_6ee27c0, public_6ee27c0);
extern "C" NAKED register_t __cdecl internal_6ee27c0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        fild dword ptr ds : [eax+0xA4]
        push esi
        lea ecx, ds:[eax+0xCC]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xC], esi
        fmul dword ptr ss : [esp+0xC]
        mov esi, eax
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], edx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], edx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6ee27c0)
    }
}
