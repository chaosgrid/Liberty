#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad91de);

PROC_DECLARE(0x6ad91de, internal_6ad91de, public_6ad91de);
extern "C" NAKED register_t __cdecl internal_6ad91de()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        wait 
        fnstcw word ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, eax
        and eax, dword ptr ss : [ebp+8]
        not ecx
        and ecx, dword ptr ss : [ebp-4]
        or ecx, eax
        mov dword ptr ss : [ebp+0xC], ecx
        fldcw word ptr ss : [ebp+0xC]
        movsx eax, word ptr ss : [ebp-4]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad91de)
    }
}
