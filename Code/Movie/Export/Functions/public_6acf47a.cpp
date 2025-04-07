#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf47a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0a8d);

PROC_DECLARE(0x6acf47a, internal_6acf47a, public_6acf47a);
extern "C" NAKED register_t __cdecl internal_6acf47a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 4
        push ebx
        push esi
        push edi
        cld 
        mov dword ptr ss : [ebp-4], eax
        xor eax, eax
        push eax
        push eax
        push eax
        push dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ad0a8d
        add esp, 0x20
        mov dword ptr ss : [ebp+0x14], eax
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr ss : [ebp+0x14]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6acf47a)
    }
}
