#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

PROC_DECLARE(0x6361460, internal_6361460, public_6361460);
extern "C" NAKED register_t __cdecl internal_6361460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0xAC]
        mov dword ptr ss : [esp+4], ecx
        lea ecx, ds:[eax+0xB4]
        call public_6347e60
        fadd st(0), st
        fmul dword ptr ss : [esp+4]
        ret 8
        UNREACHABLE_TRAP(0x6361460)
    }
}
