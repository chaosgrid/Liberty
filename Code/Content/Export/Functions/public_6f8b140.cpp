#include "Content-PCH.h"

PROC_DECLARE(0x6f8b140, internal_6f8b140, public_6f8b140);
extern "C" NAKED register_t __cdecl internal_6f8b140()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax]
        test al, al
        setne al
        ret 8
        UNREACHABLE_TRAP(0x6f8b140)
    }
}
