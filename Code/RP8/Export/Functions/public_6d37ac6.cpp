#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

PROC_DECLARE(0x6d37ac6, internal_6d37ac6, public_6d37ac6);
extern "C" NAKED register_t __cdecl internal_6d37ac6()
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
        mov dword ptr ds : [public_6d72920], eax
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d37ac6)
    }
}
