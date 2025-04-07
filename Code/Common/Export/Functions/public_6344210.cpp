#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344210);

PROC_DECLARE(0x6344210, internal_6344210, public_6344210);
extern "C" NAKED register_t __cdecl internal_6344210()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 6
        mov edi, edx
        rep stosd
        mov eax, 0x3F000000
        mov dword ptr ds : [edx+0xC], eax
        mov dword ptr ds : [edx+0x10], eax
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6344210)
    }
}
