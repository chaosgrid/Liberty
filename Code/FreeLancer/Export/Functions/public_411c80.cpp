#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c80);

PROC_DECLARE(0x411c80, internal_411c80, public_411c80);
extern "C" NAKED register_t __cdecl internal_411c80()
{
    __asm
    {
        push ecx
        movzx eax, byte ptr ds : [ecx+2]
        movzx edx, byte ptr ds : [ecx+1]
        mov dword ptr ss : [esp], eax
        movzx eax, byte ptr ds : [ecx]
        fild dword ptr ss : [esp]
        mov dword ptr ss : [esp], edx
        fmul dword ptr ds : [public_5c7f68]
        fild dword ptr ss : [esp]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c7f68]
        fild dword ptr ss : [esp]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x411c80)
    }
}
