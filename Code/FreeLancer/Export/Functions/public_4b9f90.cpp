#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_459950);
CLANG_FORWARD_PROC_SYMBOL(public_4b9f90);
CLANG_FORWARD_PROC_SYMBOL(public_4ba5a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba860);
CLANG_FORWARD_PROC_SYMBOL(public_4bd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd5d0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4b9fbd _public_4b9fbd
#define public_4b9fd6 _public_4b9fd6
#define public_4ba004 _public_4ba004
#define public_4ba015 _public_4ba015
#define public_4ba02d _public_4ba02d
#define public_4ba0e2 _public_4ba0e2

PROC_DECLARE(0x4b9f90, internal_4b9f90, public_4b9f90);
extern "C" NAKED register_t __cdecl internal_4b9f90()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp dword ptr ss : [ebp+4], 0x549C
        push esi
        push edi
        jne public_4b9fbd
        push ebp
        mov ecx, offset public_67230c
        call dword ptr ds : [public_5c628c]
        pop edi
        pop esi
        mov byte ptr ds : [public_672404], 1
        pop ebp
        add esp, 8
        ret 
        public_4b9fbd : nop
        call public_41a3e0
        test al, al
        mov esi, dword ptr ds : [public_672328]
        je public_4ba004
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_4ba004
        public_4b9fd6 : nop
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_672324
        call public_4bd4b0
        cmp dword ptr ss : [esp+0x18], esi
        jne public_4b9fd6
        mov esi, dword ptr ds : [public_672328]
        public_4ba004 : nop
        mov eax, dword ptr ds : [public_67232c]
        xor edi, edi
        test eax, eax
        jbe public_4ba015
        mov edi, dword ptr ds : [esi+4]
        add edi, 8
        public_4ba015 : nop
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        push 0x20
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        mov ecx, ebx
        jne public_4ba02d
        mov ecx, eax
        public_4ba02d : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_4bd5d0
        mov ecx, dword ptr ds : [public_67232c]
        inc ecx
        push ebp
        mov dword ptr ds : [public_67232c], ecx
        call public_459950
        mov edx, dword ptr ds : [public_672328]
        mov esi, dword ptr ds : [edx+4]
        add esi, 8
        push esi
        call public_4ba5a0
        add esp, 0x10
        test edi, edi
        pop ebx
        je public_4ba0e2
        mov eax, dword ptr ds : [public_6119f8]
        push 1
        push eax
/*FIXUP push offset public_66fc60 @0x4ba077*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push esi
        call public_4ba860
        mov ecx, dword ptr ds : [public_6119f8]
        push 1
        push ecx
/*FIXUP push offset public_66dc60 @0x4ba08b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edi
        call public_4ba860
/*FIXUP push offset public_66dc60 @0x4ba096*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4ba09b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71d4]
        add esp, 0x28
        test eax, eax
        jne public_4ba0e2
        mov edx, dword ptr ds : [public_672328]
        mov esi, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call dword ptr ds : [public_5c6098]
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67232c]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_67232c], eax
        public_4ba0e2 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4b9f90)
    }
}

#undef public_4b9fbd
#undef public_4b9fd6
#undef public_4ba004
#undef public_4ba015
#undef public_4ba02d
#undef public_4ba0e2
