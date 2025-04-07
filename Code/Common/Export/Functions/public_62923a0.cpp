#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6291e10);
CLANG_FORWARD_PROC_SYMBOL(public_62923a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348f50);

PROC_DECLARE(0x62923a0, internal_62923a0, public_62923a0);
extern "C" NAKED register_t __cdecl internal_62923a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6291e10
        mov ecx, dword ptr ds : [esi-0x74]
        mov edx, dword ptr ds : [esi-0x7C]
        push ecx
        mov ecx, dword ptr ds : [edx+0x90]
        call public_6348f50
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x62923a0)
    }
}
