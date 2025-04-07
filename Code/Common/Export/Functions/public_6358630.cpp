#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6358560);
CLANG_FORWARD_PROC_SYMBOL(public_6358630);

PROC_DECLARE(0x6358630, internal_6358630, public_6358630);
extern "C" NAKED register_t __cdecl internal_6358630()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x108]
        push eax
        call public_6358560
        mov eax, dword ptr ds : [esi+0x108]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [esi+0xA8]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [esi+0xA4]
        faddp 
        fchs 
        fmul dword ptr ds : [esi+8]
        fadd st(0), st
        fld dword ptr ds : [esi+4]
        fadd dword ptr ds : [esi+8]
        fdivr dword ptr ds : [public_63a53d0]
        fmulp 
        fmul dword ptr ds : [esi+4]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6358630)
    }
}
