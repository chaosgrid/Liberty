#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208a40);

PROC_DECLARE(0x6208a40, internal_6208a40, public_6208a40);
extern "C" NAKED register_t __cdecl internal_6208a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+0x14], edx
        ret 0x18
        UNREACHABLE_TRAP(0x6208a40)
    }
}
