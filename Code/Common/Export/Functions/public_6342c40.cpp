#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342c40);

PROC_DECLARE(0x6342c40, internal_6342c40, public_6342c40);
extern "C" NAKED register_t __cdecl internal_6342c40()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 9
        mov edi, edx
        rep stosd
        mov eax, 0x49742400
        mov dword ptr ds : [edx+0x10], eax
        mov dword ptr ds : [edx+0x14], eax
        mov dword ptr ds : [edx+0x18], eax
        mov dword ptr ds : [edx+0x20], eax
        mov eax, 0x3F800000
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+0xC], eax
        mov dword ptr ds : [edx], 0x3F4CCCCD
        mov dword ptr ds : [edx+8], 0x3F4CCCCD
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6342c40)
    }
}
