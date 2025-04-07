#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_63345f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6334606 _public_6334606
#define public_633461d _public_633461d

PROC_DECLARE(0x63345f0, internal_63345f0, public_63345f0);
extern "C" NAKED register_t __cdecl internal_63345f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ds : [esi], offset public_639a0a8
        jle public_633461d
        public_6334606 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+edi*4]
        push ecx
        call public_6334430
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        inc edi
        cmp edi, eax
        jl public_6334606
        public_633461d : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov dword ptr ds : [esi+8], ebx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6391d5a
        add esp, 0xC
        or eax, 0xFFFFFFFF
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63345f0)
    }
}

#undef public_6334606
#undef public_633461d
