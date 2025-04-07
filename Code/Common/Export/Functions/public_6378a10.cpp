#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63480a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348150);
CLANG_FORWARD_PROC_SYMBOL(public_6378a10);

PROC_DECLARE(0x6378a10, internal_6378a10, public_6378a10);
extern "C" NAKED register_t __cdecl internal_6378a10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x28]
        push esi
        push edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x1C]
        lea esi, ds:[ecx+0x88]
        push edx
        push eax
        mov ecx, esi
        call public_63480a0
        mov ecx, esi
        call public_6348150
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6378a10)
    }
}
