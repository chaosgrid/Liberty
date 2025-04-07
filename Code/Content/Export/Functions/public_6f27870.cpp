#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f27870);

PROC_DECLARE(0x6f27870, internal_6f27870, public_6f27870);
extern "C" NAKED register_t __cdecl internal_6f27870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x118], edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x11C], edx
        mov dword ptr ds : [ecx+0x120], eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f27870)
    }
}
