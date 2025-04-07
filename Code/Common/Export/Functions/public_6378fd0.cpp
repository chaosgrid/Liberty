#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378fd0);

PROC_DECLARE(0x6378fd0, internal_6378fd0, public_6378fd0);
extern "C" NAKED register_t __cdecl internal_6378fd0()
{
    __asm
    {
        mov edx, ecx
        xor eax, eax
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], eax
        push edi
        mov dword ptr ds : [edx+0x10], eax
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, 8
        mov edi, edx
        rep stosd
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        mov eax, edx
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x6378fd0)
    }
}
