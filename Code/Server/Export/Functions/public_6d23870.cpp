#include "Server-PCH.h"

PROC_DECLARE(0x6d23870, internal_6d23870, public_6d23870);
extern "C" NAKED register_t __cdecl internal_6d23870()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d68a40]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6d68a44]
        mov dword ptr ds : [eax+4], edx
        ret 8
        UNREACHABLE_TRAP(0x6d23870)
    }
}
