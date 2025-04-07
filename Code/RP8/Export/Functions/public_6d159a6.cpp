#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d159a6);

#define public_6d159d3 _public_6d159d3
#define public_6d159fb _public_6d159fb

PROC_DECLARE(0x6d159a6, internal_6d159a6, public_6d159a6);
extern "C" NAKED register_t __cdecl internal_6d159a6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        push 1
        push 2
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        push 1
        push 0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [eax+0x28]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d159d3
        xor al, al
        jmp public_6d159fb
        public_6d159d3 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        push 1
        push 0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [eax+0x30]
        mov dword ptr ss : [ebp-4], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-4], 0
        setge al
        public_6d159fb : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d159a6)
    }
}

#undef public_6d159d3
#undef public_6d159fb
