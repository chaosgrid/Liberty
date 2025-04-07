#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c0b1);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c268);

#define public_6d4c2a4 _public_6d4c2a4
#define public_6d4c2d9 _public_6d4c2d9

PROC_DECLARE(0x6d4c268, internal_6d4c268, public_6d4c268);
extern "C" NAKED register_t __cdecl internal_6d4c268()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+4]
        push 0x54
        push 1
        push esi
        call dword ptr ds : [eax]
        and dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [esi+0x198], eax
        mov dword ptr ds : [eax], offset _public_6d4c0b1
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 0xC
        cmp dword ptr ds : [esi+0x20], 0
        jle public_6d4c2d9
        push ebx
        add ecx, 0x50
        push edi
        mov dword ptr ss : [ebp+8], ecx
        lea ebx, ds:[eax+0x2C]
        public_6d4c2a4 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0x100
        push 1
        push esi
        call dword ptr ds : [eax]
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp+8], 0x54
        add esp, 0xC
        mov dword ptr ds : [eax], edi
        xor eax, eax
        push 0x40
        pop ecx
        rep stosd
        or dword ptr ds : [ebx], 0xFFFFFFFF
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        add ebx, 4
        cmp eax, dword ptr ds : [esi+0x20]
        jl public_6d4c2a4
        pop edi
        pop ebx
        public_6d4c2d9 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c268)
    }
}

#undef public_6d4c2a4
#undef public_6d4c2d9
