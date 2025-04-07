#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad05ae);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0603);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3db2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3e29);

PROC_DECLARE(0x6ad05ae, internal_6ad05ae, public_6ad05ae);
extern "C" NAKED register_t __cdecl internal_6ad05ae()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        lea eax, ss:[ebp-0x28]
        push esi
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push ecx
        fld qword ptr ds : [eax]
        fstp qword ptr ss : [esp]
        call public_6ad3e29
        mov esi, dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0x10]
        push eax
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, esi
        push eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0x10], 0x2D
        sete al
        add eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6ad3db2
        lea eax, ss:[ebp-0x10]
        push 0
        push eax
        push esi
        push dword ptr ss : [ebp+0xC]
        call public_6ad0603
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 0x2C
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad05ae)
    }
}
