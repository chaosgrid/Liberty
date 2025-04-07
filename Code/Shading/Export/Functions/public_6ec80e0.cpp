#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8240);
CLANG_FORWARD_PROC_SYMBOL(public_6eca7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec80f2 _public_6ec80f2
#define public_6ec8130 _public_6ec8130
#define public_6ec8159 _public_6ec8159
#define public_6ec8182 _public_6ec8182
#define public_6ec8186 _public_6ec8186
#define public_6ec81a6 _public_6ec81a6
#define public_6ec81aa _public_6ec81aa
#define public_6ec81d3 _public_6ec81d3
#define public_6ec81d6 _public_6ec81d6

PROC_DECLARE(0x6ec80e0, internal_6ec80e0, public_6ec80e0);
extern "C" NAKED register_t __cdecl internal_6ec80e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 8
        test eax, eax
        jbe public_6ec80f2
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ec80f2 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ec81d6
        push ebp
        mov ebp, dword ptr ds : [ecx+8]
        test ebp, ebp
        mov dword ptr ds : [ecx+4], 1
        je public_6ec81d3
        mov ecx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        push ebx
        push esi
        lea esi, ss:[ebp+8]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ec8182
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ec8159
        public_6ec8130 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ec7ad0
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6ec8240
        push ebx
        call public_6ed0c50
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ec8130
        public_6ec8159 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6eca7e0
        jmp public_6ec81aa
        public_6ec8182 : nop
        cmp eax, edi
        je public_6ec81a6
        public_6ec8186 : nop
        lea ecx, ss:[esp+0x1C]
        mov ebx, eax
        call public_6ec5e20
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6ec76e0
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edi
        jne public_6ec8186
        public_6ec81a6 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_6ec81aa : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        push eax
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x10], edi
        call public_6ed0c50
        push ebp
        mov dword ptr ds : [esi+8], edi
        call public_6ed0c50
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        public_6ec81d3 : nop
        xor eax, eax
        pop ebp
        public_6ec81d6 : nop
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ec80e0)
    }
}

#undef public_6ec80f2
#undef public_6ec8130
#undef public_6ec8159
#undef public_6ec8182
#undef public_6ec8186
#undef public_6ec81a6
#undef public_6ec81aa
#undef public_6ec81d3
#undef public_6ec81d6
