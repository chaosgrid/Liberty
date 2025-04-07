#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);

PROC_DECLARE(0x62c85e0, internal_62c85e0, public_62c85e0);
extern "C" NAKED register_t __cdecl internal_62c85e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x30]
        lea ecx, ds:[esi+0x30]
        mov byte ptr ds : [esi+0x2B5], 0
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x110]
        lea ecx, ds:[esi+0x110]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x1AC]
        lea ecx, ds:[esi+0x1AC]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x28C]
        lea ecx, ds:[esi+0x28C]
        call dword ptr ds : [edx+0x10]
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62c85e0)
    }
}
