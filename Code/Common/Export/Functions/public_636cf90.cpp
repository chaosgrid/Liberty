#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_636cf90);

PROC_DECLARE(0x636cf90, internal_636cf90, public_636cf90);
extern "C" NAKED register_t __cdecl internal_636cf90()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a58f8
        jmp public_63522f0
        UNREACHABLE_TRAP(0x636cf90)
    }
}
