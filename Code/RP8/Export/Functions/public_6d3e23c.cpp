#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c83f);

PROC_DECLARE(0x6d3e23c, internal_6d3e23c, public_6d3e23c);
extern "C" NAKED register_t __cdecl internal_6d3e23c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push dword ptr ss : [ebp+0xC]
        lea eax, ss:[ebp-0x14]
        push eax
        call public_6d3c83f
        fld dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+8]
        fmul dword ptr ds : [public_6d5f1fc]
        lea eax, ds:[ecx+0xC]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp+0xC]
        fstp dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp+8]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp-0x14]
        fmul dword ptr ss : [ebp+0xC]
        mov eax, ecx
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp+0xC]
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp+0xC]
        fstp dword ptr ds : [ecx+8]
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3e23c)
    }
}
