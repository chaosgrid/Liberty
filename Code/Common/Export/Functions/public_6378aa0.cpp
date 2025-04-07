#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378aa0);

PROC_DECLARE(0x6378aa0, internal_6378aa0, public_6378aa0);
extern "C" NAKED register_t __cdecl internal_6378aa0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 7
        mov edi, edx
        rep stosd
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+0x10], eax
        mov eax, edx
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6378aa0)
    }
}
