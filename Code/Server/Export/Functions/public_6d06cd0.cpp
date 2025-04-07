#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);

PROC_DECLARE(0x6d06cd0, internal_6d06cd0, public_6d06cd0);
extern "C" NAKED register_t __cdecl internal_6d06cd0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax]
        UNREACHABLE_TRAP(0x6d06cd0)
    }
}
