#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4443b);

PROC_DECLARE(0x6d4443b, internal_6d4443b, public_6d4443b);
extern "C" NAKED register_t __cdecl internal_6d4443b()
{
    __asm
    {
        push ecx
        push ecx
        fnstcw word ptr ss : [esp]
        mov eax, dword ptr ss : [esp]
        or eax, 0xC00
        mov dword ptr ss : [esp+4], eax
        fldcw word ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp]
        mov dword ptr ds : [public_6d73504], eax
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d4443b)
    }
}
