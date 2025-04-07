#include "x86math-PCH.h"

PROC_DECLARE(0x6f728b0, internal_6f728b0, public_6f728b0);
extern "C" NAKED register_t __cdecl internal_6f728b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, 0x5F000000
        mov ecx, eax
        mov dword ptr ss : [esp], eax
        shr ecx, 0x17
        and ecx, 0xFF
        shl ecx, 0x16
        shr eax, 0xE
        sub edx, ecx
        and eax, 0x3FF
        xor ecx, ecx
        and edx, 0xFF800000
        mov cl, byte ptr ds : [eax+public_6f74030]
        shl ecx, 0xF
        or edx, ecx
        xor eax, eax
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0x10]
        fsubr dword ptr ds : [public_6f73108]
        fmul dword ptr ss : [esp]
        fmul dword ptr ds : [public_6f73100]
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fsubr dword ptr ds : [public_6f73108]
        fmul st, st(1)
        fmul dword ptr ds : [public_6f73100]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        fstp st(0)
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f728b0)
    }
}
