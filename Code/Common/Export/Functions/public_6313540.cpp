#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313540);

PROC_DECLARE(0x6313540, internal_6313540, public_6313540);
extern "C" NAKED register_t __cdecl internal_6313540()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+8]
        mov eax, 4
        add edx, eax
        mov dword ptr ds : [ecx+8], edx
        add dword ptr ds : [ecx+0xC], 0xFFFFFFFC
        add dword ptr ds : [ecx+0x10], eax
        ret 4
        UNREACHABLE_TRAP(0x6313540)
    }
}
