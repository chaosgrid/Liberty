#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355020);

PROC_DECLARE(0x6355020, internal_6355020, public_6355020);
extern "C" NAKED register_t __cdecl internal_6355020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+8]
        fadd dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fadd dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        ret 8
        UNREACHABLE_TRAP(0x6355020)
    }
}
