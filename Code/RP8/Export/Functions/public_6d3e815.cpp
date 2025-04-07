#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e66b);

#define public_6d3e852 _public_6d3e852
#define public_6d3e898 _public_6d3e898

PROC_DECLARE(0x6d3e815, internal_6d3e815, public_6d3e815);
extern "C" NAKED register_t __cdecl internal_6d3e815()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        fld dword ptr ss : [ebp+0x18]
        push esi
        fadd dword ptr ss : [ebp+0x1C]
        push ecx
        push ecx
        fstp dword ptr ss : [ebp+0x18]
        fldz 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x18]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        je public_6d3e852
        mov esi, dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [ebp+8], esi
        je public_6d3e898
        push edi
        mov edi, dword ptr ss : [ebp+8]
        movsd 
        movsd 
        movsd 
        movsd 
        pop edi
        jmp public_6d3e898
        public_6d3e852 : nop
        fld dword ptr ss : [ebp+0x18]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0x20]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6d3e66b
        fld dword ptr ss : [ebp+0x18]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [ebp+0x14]
        lea eax, ss:[ebp-0x10]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6d3e66b
        fld dword ptr ss : [ebp+0x1C]
        fdiv dword ptr ss : [ebp+0x18]
        push ecx
        lea eax, ss:[ebp-0x10]
        fstp dword ptr ss : [esp]
        push eax
        lea eax, ss:[ebp-0x20]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d3e66b
        public_6d3e898 : nop
        mov eax, dword ptr ss : [ebp+8]
        pop esi
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d3e815)
    }
}

#undef public_6d3e852
#undef public_6d3e898
