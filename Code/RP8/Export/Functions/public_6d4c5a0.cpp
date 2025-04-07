#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c5a0);

#define public_6d4c5d1 _public_6d4c5d1
#define public_6d4c604 _public_6d4c604
#define public_6d4c608 _public_6d4c608
#define public_6d4c61a _public_6d4c61a
#define public_6d4c62a _public_6d4c62a
#define public_6d4c664 _public_6d4c664

PROC_DECLARE(0x6d4c5a0, internal_6d4c5a0, public_6d4c5a0);
extern "C" NAKED register_t __cdecl internal_6d4c5a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [ebx+0x19C]
        mov eax, dword ptr ds : [esi+0x5C]
        cmp eax, dword ptr ds : [ebx+0x110]
        push edi
        jl public_6d4c608
        and dword ptr ss : [ebp+8], 0
        cmp dword ptr ds : [ebx+0x20], 0
        mov eax, dword ptr ds : [ebx+0xC4]
        mov dword ptr ss : [ebp-4], eax
        jle public_6d4c604
        lea edi, ds:[esi+0xC]
        public_6d4c5d1 : nop
        mov eax, dword ptr ds : [edi+0x58]
        mov ecx, dword ptr ss : [ebp+0x10]
        imul eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx+edx*4]
        push edi
        lea eax, ds:[ecx+eax*4]
        push eax
        push dword ptr ss : [ebp-4]
        push ebx
        call dword ptr ds : [edi+0x28]
        add dword ptr ss : [ebp-4], 0x54
        add esp, 0x10
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        add edi, 4
        cmp eax, dword ptr ds : [ebx+0x20]
        jl public_6d4c5d1
        public_6d4c604 : nop
        and dword ptr ds : [esi+0x5C], 0
        public_6d4c608 : nop
        mov edi, dword ptr ds : [ebx+0x110]
        sub edi, dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ds : [esi+0x60]
        cmp edi, eax
        jbe public_6d4c61a
        mov edi, eax
        public_6d4c61a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [eax]
        sub dword ptr ss : [ebp+0x20], eax
        cmp edi, dword ptr ss : [ebp+0x20]
        jbe public_6d4c62a
        mov edi, dword ptr ss : [ebp+0x20]
        public_6d4c62a : nop
        mov edx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [ebx+0x1A0]
        push edi
        lea eax, ds:[edx+eax*4]
        push eax
        push dword ptr ds : [esi+0x5C]
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0x1C]
        add dword ptr ds : [eax], edi
        sub dword ptr ds : [esi+0x60], edi
        add dword ptr ds : [esi+0x5C], edi
        mov esi, dword ptr ds : [esi+0x5C]
        add esp, 0x14
        cmp esi, dword ptr ds : [ebx+0x110]
        pop edi
        pop esi
        pop ebx
        jl public_6d4c664
        mov eax, dword ptr ss : [ebp+0x10]
        inc dword ptr ds : [eax]
        public_6d4c664 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c5a0)
    }
}

#undef public_6d4c5d1
#undef public_6d4c604
#undef public_6d4c608
#undef public_6d4c61a
#undef public_6d4c62a
#undef public_6d4c664
