#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a100);

PROC_DECLARE(0x51a100, internal_51a100, public_51a100);
extern "C" NAKED register_t __cdecl internal_51a100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x18], eax
        ret 4
        UNREACHABLE_TRAP(0x51a100)
    }
}
