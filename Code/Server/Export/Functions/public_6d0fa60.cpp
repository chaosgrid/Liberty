#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0fa60);
CLANG_FORWARD_PROC_SYMBOL(public_6d10b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d10f60);
CLANG_FORWARD_PROC_SYMBOL(public_6d11570);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0fa70 _public_6d0fa70
#define public_6d0faa0 _public_6d0faa0
#define public_6d0fac8 _public_6d0fac8
#define public_6d0faed _public_6d0faed
#define public_6d0faf1 _public_6d0faf1
#define public_6d0fb11 _public_6d0fb11

PROC_DECLARE(0x6d0fa60, internal_6d0fa60, public_6d0fa60);
extern "C" NAKED register_t __cdecl internal_6d0fa60()
{
    __asm
    {
        mov ecx, offset public_6d8da2c
        jmp public_6d0fa70
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6d0fa70 : nop
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
        je public_6d0faed
        mov ecx, eax
        cmp eax, ecx
        jne public_6d0faed
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d0fac8
        nop 
        lea esp, ss:[esp]
        public_6d0faa0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d10f60
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6d11570
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d0faa0
        public_6d0fac8 : nop
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
        call public_6d5c540
        jmp public_6d0fb11
        public_6d0faed : nop
        cmp eax, edi
        je public_6d0fb11
        public_6d0faf1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d00db0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6d10b10
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d0faf1
        public_6d0fb11 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d0fa60)
    }
}

#undef public_6d0fa70
#undef public_6d0faa0
#undef public_6d0fac8
#undef public_6d0faed
#undef public_6d0faf1
#undef public_6d0fb11
