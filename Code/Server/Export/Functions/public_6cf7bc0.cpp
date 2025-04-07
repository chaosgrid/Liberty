#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf7bd0 _public_6cf7bd0
#define public_6cf7c00 _public_6cf7c00
#define public_6cf7c1f _public_6cf7c1f
#define public_6cf7c44 _public_6cf7c44
#define public_6cf7c48 _public_6cf7c48
#define public_6cf7c68 _public_6cf7c68

PROC_DECLARE(0x6cf7bc0, internal_6cf7bc0, public_6cf7bc0);
extern "C" NAKED register_t __cdecl internal_6cf7bc0()
{
    __asm
    {
        mov ecx, offset public_6d8d820
        jmp public_6cf7bd0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6cf7bd0 : nop
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
        je public_6cf7c44
        mov ecx, eax
        cmp eax, ecx
        jne public_6cf7c44
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6cf7c1f
        nop 
        lea esp, ss:[esp]
        public_6cf7c00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6cfc5a0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6cf7c00
        public_6cf7c1f : nop
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
        jmp public_6cf7c68
        public_6cf7c44 : nop
        cmp eax, edi
        je public_6cf7c68
        public_6cf7c48 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d160d0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6d58e50
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6cf7c48
        public_6cf7c68 : nop
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
        UNREACHABLE_TRAP(0x6cf7bc0)
    }
}

#undef public_6cf7bd0
#undef public_6cf7c00
#undef public_6cf7c1f
#undef public_6cf7c44
#undef public_6cf7c48
#undef public_6cf7c68
