#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62857a0);

PROC_DECLARE(0x62857a0, internal_62857a0, public_62857a0);
extern "C" NAKED register_t __cdecl internal_62857a0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [ecx+0x98]
        mov edx, dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [eax+0x98]
        add eax, 0x94
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ss : [esp]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62857a0)
    }
}
