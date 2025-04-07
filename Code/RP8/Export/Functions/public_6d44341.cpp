#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44341);

PROC_DECLARE(0x6d44341, internal_6d44341, public_6d44341);
extern "C" NAKED register_t __cdecl internal_6d44341()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        fld dword ptr ds : [public_6d5f61c]
        mov dx, cx
        shr dx, 0xB
        movzx edx, dx
        mov dword ptr ss : [ebp-4], edx
        mov edx, ecx
        shr edx, 5
        fild dword ptr ss : [ebp-4]
        and edx, 0x3F
        mov dword ptr ss : [ebp-4], edx
        and ecx, 0x1F
        fmul st, st(1)
        fstp dword ptr ds : [eax]
        fild dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-4], ecx
        fmul dword ptr ds : [public_6d5f618]
        fstp dword ptr ds : [eax+4]
        fild dword ptr ss : [ebp-4]
        fmul st, st(1)
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        fld1 
        fstp dword ptr ds : [eax+0xC]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d44341)
    }
}
