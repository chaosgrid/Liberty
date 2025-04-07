#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40bba);
CLANG_FORWARD_PROC_SYMBOL(public_6d40df6);
CLANG_FORWARD_PROC_SYMBOL(public_6d4165b);
CLANG_FORWARD_PROC_SYMBOL(public_6d41865);
CLANG_FORWARD_PROC_SYMBOL(public_6d41a52);
CLANG_FORWARD_PROC_SYMBOL(public_6d41bbf);
CLANG_FORWARD_PROC_SYMBOL(public_6d41be9);

#define public_6d41c32 _public_6d41c32

PROC_DECLARE(0x6d41be9, internal_6d41be9, public_6d41be9);
extern "C" NAKED register_t __cdecl internal_6d41be9()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push 0x5C
        push 0
        push esi
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x190], eax
        mov dword ptr ds : [eax], offset _public_6d41bbf
        mov eax, dword ptr ds : [esi+0x190]
        mov dword ptr ds : [eax+4], offset _public_6d41865
        mov eax, dword ptr ds : [esi+0x190]
        mov dword ptr ds : [eax+8], offset _public_6d41a52
        mov eax, dword ptr ds : [esi+0x190]
        add esp, 0xC
        mov ecx, offset _public_6d4165b
        push 0x10
        mov dword ptr ds : [eax+0xC], ecx
        pop eax
        public_6d41c32 : nop
        mov edx, dword ptr ds : [esi+0x190]
        mov dword ptr ds : [eax+edx], ecx
        add eax, 4
        cmp eax, 0x50
        jl public_6d41c32
        mov eax, dword ptr ds : [esi+0x190]
        mov dword ptr ds : [eax+0x10], offset _public_6d40bba
        mov eax, dword ptr ds : [esi+0x190]
        push esi
        mov dword ptr ds : [eax+0x48], offset _public_6d40df6
        call public_6d41bbf
        pop ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d41be9)
    }
}

#undef public_6d41c32
