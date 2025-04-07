#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b42c0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

PROC_DECLARE(0x62b42c0, internal_62b42c0, public_62b42c0);
extern "C" NAKED register_t __cdecl internal_62b42c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        push 2
        lea ecx, ds:[esi+0x230]
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov ecx, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [ecx+0x110]
        fdivp 
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b42c0)
    }
}
