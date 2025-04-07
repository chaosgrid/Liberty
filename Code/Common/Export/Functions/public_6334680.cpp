#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6334680);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6334690 _public_6334690
#define public_63346a7 _public_63346a7

PROC_DECLARE(0x6334680, internal_6334680, public_6334680);
extern "C" NAKED register_t __cdecl internal_6334680()
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
        jle public_63346a7
        public_6334690 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+edi*4]
        push ecx
        call public_6334430
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        inc edi
        cmp edi, eax
        jl public_6334690
        public_63346a7 : nop
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
        UNREACHABLE_TRAP(0x6334680)
    }
}

#undef public_6334690
#undef public_63346a7
