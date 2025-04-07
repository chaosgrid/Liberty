#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5a90);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c5aa8 _public_65c5aa8
#define public_65c5ad3 _public_65c5ad3
#define public_65c5ae3 _public_65c5ae3
#define public_65c5afc _public_65c5afc
#define public_65c5b05 _public_65c5b05
#define public_65c5b14 _public_65c5b14
#define public_65c5b1a _public_65c5b1a
#define public_65c5b27 _public_65c5b27

PROC_DECLARE(0x65c5a90, internal_65c5a90, public_65c5a90);
extern "C" NAKED register_t __cdecl internal_65c5a90()
{
    __asm
    {
        push ebx
        push esi
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_65c70e8]
        cmp eax, ebx
        mov esi, dword ptr ss : [esp+0xC]
        je public_65c5aa8
        cmp eax, 1
        jne public_65c5b1a
        public_65c5aa8 : nop
        cmp esi, ebx
        je public_65c5b14
        cmp byte ptr ds : [esi+0x10], bl
        jne public_65c5b14
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_65c755c @0x65c5ab3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c755c
        push eax
        call dword ptr ds : [public_65c7038]
        test eax, eax
        je public_65c5b05
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_65c5ad3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebx
        public_65c5ad3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_65c5ae3
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_65c5ae3 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_65c5afc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], ebx
        public_65c5afc : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_65c7044]
        public_65c5b05 : nop
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x10], 1
        public_65c5b14 : nop
        call dword ptr ds : [public_65c70e4]
        public_65c5b1a : nop
        cmp esi, ebx
        je public_65c5b27
        push esi
        call public_65c6a60
        add esp, 4
        public_65c5b27 : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c5a90)
    }
}

#undef public_65c5aa8
#undef public_65c5ad3
#undef public_65c5ae3
#undef public_65c5afc
#undef public_65c5b05
#undef public_65c5b14
#undef public_65c5b1a
#undef public_65c5b27
