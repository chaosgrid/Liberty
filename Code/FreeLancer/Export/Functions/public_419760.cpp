#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419760);

#define public_419778 _public_419778
#define public_419795 _public_419795
#define public_419799 _public_419799
#define public_4197b0 _public_4197b0

PROC_DECLARE(0x419760, internal_419760, public_419760);
extern "C" NAKED register_t __cdecl internal_419760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6166a0]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_419795
        mov ebx, dword ptr ds : [public_5c6d24]
        public_419778 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+8]
        push edi
        call dword ptr ds : [eax]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_419799
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6166a0]
        jne public_419778
        public_419795 : nop
        xor esi, esi
        jmp public_4197b0
        public_419799 : nop
        add esi, 8
        test esi, esi
        je public_4197b0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        lea ecx, ds:[ecx]
        public_4197b0 : nop
        push edi
        push 0x1B3
/*FIXUP push offset public_5c8f14 @0x4197b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8f14
        mov eax, 0x100002
/*FIXUP push offset public_5c8edc @0x4197c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8edc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x419760)
    }
}

#undef public_419778
#undef public_419795
#undef public_419799
#undef public_4197b0
