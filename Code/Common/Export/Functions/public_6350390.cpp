#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350390);

PROC_DECLARE(0x6350390, internal_6350390, public_6350390);
extern "C" NAKED register_t __cdecl internal_6350390()
{
    __asm
    {
        mov edx, ecx
        xor eax, eax
        push edi
        mov word ptr ds : [edx+0xC], ax
        mov word ptr ds : [edx+0xE], ax
        mov dword ptr ds : [edx+0x10], eax
        mov ecx, 6
        mov edi, edx
        rep stosd
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], eax
        mov eax, edx
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6350390)
    }
}
