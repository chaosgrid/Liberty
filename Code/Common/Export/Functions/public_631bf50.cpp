#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6277dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6278230);
CLANG_FORWARD_PROC_SYMBOL(public_62782b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279d70);
CLANG_FORWARD_PROC_SYMBOL(public_631bf50);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631bf80 _public_631bf80
#define public_631bfa8 _public_631bfa8
#define public_631bfcd _public_631bfcd
#define public_631bfd1 _public_631bfd1
#define public_631bff1 _public_631bff1

PROC_DECLARE(0x631bf50, internal_631bf50, public_631bf50);
extern "C" NAKED register_t __cdecl internal_631bf50()
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
        je public_631bfcd
        mov ecx, eax
        cmp eax, ecx
        jne public_631bfcd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_631bfa8
        nop 
        lea esp, ss:[esp]
        public_631bf80 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6278230
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6279d70
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_631bf80
        public_631bfa8 : nop
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
        jmp public_631bff1
        public_631bfcd : nop
        cmp eax, edi
        je public_631bff1
        public_631bfd1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62782b0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6277dd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_631bfd1
        public_631bff1 : nop
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
        UNREACHABLE_TRAP(0x631bf50)
    }
}

#undef public_631bf80
#undef public_631bfa8
#undef public_631bfcd
#undef public_631bfd1
#undef public_631bff1
