#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f70480);
CLANG_FORWARD_PROC_SYMBOL(public_6f70580);

PROC_DECLARE(0x6f70480, internal_6f70480, public_6f70480);
extern "C" NAKED register_t __cdecl internal_6f70480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        jmp public_6f70580
        UNREACHABLE_TRAP(0x6f70480)
    }
}
