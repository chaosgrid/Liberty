#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63114a0);
CLANG_FORWARD_PROC_SYMBOL(public_6311fc0);
CLANG_FORWARD_PROC_SYMBOL(public_63123a0);
CLANG_FORWARD_PROC_SYMBOL(public_6312630);
CLANG_FORWARD_PROC_SYMBOL(public_6312780);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63114b0 _public_63114b0
#define public_63114e0 _public_63114e0
#define public_6311508 _public_6311508
#define public_631152d _public_631152d
#define public_6311531 _public_6311531
#define public_6311551 _public_6311551

PROC_DECLARE(0x63114a0, internal_63114a0, public_63114a0);
extern "C" NAKED register_t __cdecl internal_63114a0()
{
    __asm
    {
        mov ecx, offset public_63fd2a8
        jmp public_63114b0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_63114b0 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_631152d
        mov ecx, eax
        cmp eax, ecx
        jne public_631152d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6311508
        nop 
        lea esp, ss:[esp]
        public_63114e0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_63123a0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6312780
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_63114e0
        public_6311508 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6311551
        public_631152d : nop
        cmp eax, edi
        je public_6311551
        public_6311531 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6312630
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6311fc0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6311531
        public_6311551 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x63114a0)
    }
}

#undef public_63114b0
#undef public_63114e0
#undef public_6311508
#undef public_631152d
#undef public_6311531
#undef public_6311551
