#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afac0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5b60);

PROC_DECLARE(0x62afac0, internal_62afac0, public_62afac0);
extern "C" NAKED register_t __cdecl internal_62afac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+0x5C]
        mov dword ptr ds : [esi+0xE4], ecx
        push eax
        mov ecx, esi
        call public_62b5b60
        mov eax, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [eax+0x70]
        mov dword ptr ds : [esi+0xE8], edx
        mov eax, dword ptr ds : [eax+0x74]
        mov dword ptr ds : [esi+0xEC], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62afac0)
    }
}
