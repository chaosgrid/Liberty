#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);

PROC_DECLARE(0x6343fc0, internal_6343fc0, public_6343fc0);
extern "C" NAKED register_t __cdecl internal_6343fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        lea ecx, ds:[eax+esi+8]
        push ecx
        call public_6343f70
        mov ecx, eax
        lea eax, ds:[ecx+esi+7]
        neg esi
        and eax, esi
        add esp, 4
        mov dword ptr ds : [ecx], 0x65981234
        mov dword ptr ds : [eax-4], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6343fc0)
    }
}
