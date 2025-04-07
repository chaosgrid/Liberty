#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022d0);
CLANG_FORWARD_PROC_SYMBOL(public_6202460);
CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202e40);
CLANG_FORWARD_PROC_SYMBOL(public_6202fa0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62022fd _public_62022fd
#define public_6202325 _public_6202325
#define public_620234a _public_620234a
#define public_620234e _public_620234e
#define public_620236e _public_620236e

PROC_DECLARE(0x62022d0, internal_62022d0, public_62022d0);
extern "C" NAKED register_t __cdecl internal_62022d0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_620234a
        mov ecx, eax
        cmp eax, ecx
        jne public_620234a
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6202325
        public_62022fd : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6202da0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6202fa0
        push ebx
        call public_62460e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62022fd
        public_6202325 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, esi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6202460
        jmp public_620236e
        public_620234a : nop
        cmp eax, edi
        je public_620236e
        public_620234e : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6202e40
        lea ecx, ss:[esp+0x18]
        push ebx
        push ecx
        mov ecx, esi
        call public_62029c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_620234e
        public_620236e : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_62460e0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push eax
        mov dword ptr ds : [esi+0x10], ebp
        call public_62460e0
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62022d0)
    }
}

#undef public_62022fd
#undef public_6202325
#undef public_620234a
#undef public_620234e
#undef public_620236e
