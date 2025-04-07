#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad048b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad04ec);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3db2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3e29);

PROC_DECLARE(0x6ad048b, internal_6ad048b, public_6ad048b);
extern "C" NAKED register_t __cdecl internal_6ad048b()
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
        mov edx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[esi+1]
        push eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0x10], 0x2D
        sete al
        xor ecx, ecx
        test esi, esi
        setg cl
        add edx, eax
        add ecx, edx
        push ecx
        call public_6ad3db2
        lea eax, ss:[ebp-0x10]
        push 0
        push eax
        push dword ptr ss : [ebp+0x14]
        push esi
        push dword ptr ss : [ebp+0xC]
        call public_6ad04ec
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 0x30
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad048b)
    }
}
