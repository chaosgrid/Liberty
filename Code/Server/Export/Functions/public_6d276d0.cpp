#include "Server-PCH.h"

PROC_DECLARE(0x6d276d0, internal_6d276d0, public_6d276d0);
extern "C" NAKED register_t __cdecl internal_6d276d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x10]
        neg ecx
        shl ecx, 1
        add edx, ecx
        mov dword ptr ds : [eax+0x10], edx
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6d276d0)
    }
}
