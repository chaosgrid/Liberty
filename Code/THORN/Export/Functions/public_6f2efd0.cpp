#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2efd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f311d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f311e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f315b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31890);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2f000 _public_6f2f000
#define public_6f2f01f _public_6f2f01f
#define public_6f2f044 _public_6f2f044
#define public_6f2f048 _public_6f2f048
#define public_6f2f068 _public_6f2f068

PROC_DECLARE(0x6f2efd0, internal_6f2efd0, public_6f2efd0);
extern "C" NAKED register_t __cdecl internal_6f2efd0()
{
    __asm
    {
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
        je public_6f2f044
        mov ecx, eax
        cmp eax, ecx
        jne public_6f2f044
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2f01f
        nop 
        lea esp, ss:[esp]
        public_6f2f000 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f31890
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2f000
        public_6f2f01f : nop
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
        call public_6f311d0
        jmp public_6f2f068
        public_6f2f044 : nop
        cmp eax, edi
        je public_6f2f068
        public_6f2f048 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f315b0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f311e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f2f048
        public_6f2f068 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6f57e26
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f2efd0)
    }
}

#undef public_6f2f000
#undef public_6f2f01f
#undef public_6f2f044
#undef public_6f2f048
#undef public_6f2f068
