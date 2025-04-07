#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad36b1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad36fc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad378e);

PROC_DECLARE(0x6ad36b1, internal_6ad36b1, public_6ad36b1);
extern "C" NAKED register_t __cdecl internal_6ad36b1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        wait 
        fnstcw word ptr ss : [ebp-4]
        push dword ptr ss : [ebp-4]
        call public_6ad36fc
        mov esi, eax
        mov eax, dword ptr ss : [ebp+0xC]
        not eax
        and esi, eax
        mov eax, dword ptr ss : [ebp+8]
        and eax, dword ptr ss : [ebp+0xC]
        or esi, eax
        push esi
        call public_6ad378e
        pop ecx
        mov dword ptr ss : [ebp+0xC], eax
        pop ecx
        fldcw word ptr ss : [ebp+0xC]
        mov eax, esi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad36b1)
    }
}
