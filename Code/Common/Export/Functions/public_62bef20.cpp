#include "Common-PCH.h"

PROC_DECLARE(0x62bef20, internal_62bef20, public_62bef20);
extern "C" NAKED register_t __cdecl internal_62bef20()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+4], ecx
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+8], 0xBF800000
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+4]
        fmulp 
        fadd dword ptr ss : [esp+4]
        fst dword ptr ds : [esi+4]
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62bef20)
    }
}
