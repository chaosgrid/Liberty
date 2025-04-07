#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f90);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0830);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f21460);
CLANG_FORWARD_PROC_SYMBOL(public_6f21490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea9fd8 _public_6ea9fd8
#define public_6ea9fe5 _public_6ea9fe5
#define public_6eaa020 _public_6eaa020
#define public_6eaa050 _public_6eaa050
#define public_6eaa05f _public_6eaa05f
#define public_6eaa0b7 _public_6eaa0b7
#define public_6eaa0c0 _public_6eaa0c0
#define public_6eaa0e1 _public_6eaa0e1

PROC_DECLARE(0x6ea9fc0, internal_6ea9fc0, public_6ea9fc0);
extern "C" NAKED register_t __cdecl internal_6ea9fc0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x9C]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_6eaa020
        mov ecx, dword ptr ss : [esp+0x18]
        public_6ea9fd8 : nop
        cmp dword ptr ds : [esi+0xC], ecx
        je public_6ea9fe5
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6ea9fd8
        jmp public_6eaa020
        public_6ea9fe5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea edi, ds:[esi+8]
        push eax
        mov ecx, edi
        call public_6eac2f0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, edi
        call public_6ea9f90
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0xA0]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0xA0], eax
        public_6eaa020 : nop
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6fcee5c
        call public_6f21490
        mov esi, eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6fcee5c
        call public_6f21460
        mov edi, eax
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], edi
        je public_6eaa05f
        lea ebx, ds:[ebx]
        public_6eaa050 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        cmp dword ptr ss : [esp+0x1C], esi
        jne public_6eaa050
        public_6eaa05f : nop
        mov eax, dword ptr ds : [public_6fcee6c]
        test eax, eax
        mov dword ptr ss : [esp+0xC], edi
        je public_6eaa0b7
        mov eax, dword ptr ds : [public_6fcee60]
        cmp edi, dword ptr ds : [eax]
        jne public_6eaa0b7
        cmp esi, eax
        jne public_6eaa0b7
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, offset public_6fcee5c
        call public_6eb0830
        mov eax, dword ptr ds : [public_6fcee64]
        mov edx, dword ptr ds : [public_6fcee60]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_6fcee60]
        mov dword ptr ds : [public_6fcee6c], 0
        pop edi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fcee60]
        pop esi
        mov dword ptr ds : [eax+8], eax
        pop ebx
        add esp, 8
        ret 8
        public_6eaa0b7 : nop
        cmp edi, esi
        je public_6eaa0e1
        nop 
        lea esp, ss:[esp]
        public_6eaa0c0 : nop
        lea ecx, ss:[esp+0xC]
        call public_6f1fa00
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fcee5c
        call public_6f20e00
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, esi
        jne public_6eaa0c0
        public_6eaa0e1 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ea9fc0)
    }
}

#undef public_6ea9fd8
#undef public_6ea9fe5
#undef public_6eaa020
#undef public_6eaa050
#undef public_6eaa05f
#undef public_6eaa0b7
#undef public_6eaa0c0
#undef public_6eaa0e1
