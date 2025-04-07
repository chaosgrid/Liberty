#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f275b0);

PROC_DECLARE(0x6f275b0, internal_6f275b0, public_6f275b0);
extern "C" NAKED register_t __cdecl internal_6f275b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x118], edx
        mov dword ptr ds : [ecx+0x11C], eax
        ret 8
        UNREACHABLE_TRAP(0x6f275b0)
    }
}
