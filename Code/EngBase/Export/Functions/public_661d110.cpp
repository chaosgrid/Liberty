#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661b420);

PROC_DECLARE(0x661d110, internal_661d110, public_661d110);
extern "C" NAKED register_t __cdecl internal_661d110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [esp+4], eax
        jmp public_661b420
        UNREACHABLE_TRAP(0x661d110)
    }
}
