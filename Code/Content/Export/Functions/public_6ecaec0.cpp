#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f34b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6ecaf15 _public_6ecaf15
#define public_6ecaf42 _public_6ecaf42
#define public_6ecaf4a _public_6ecaf4a
#define public_6ecaf73 _public_6ecaf73
#define public_6ecaf80 _public_6ecaf80

PROC_DECLARE(0x6ecaec0, internal_6ecaec0, public_6ecaec0);
extern "C" NAKED register_t __cdecl internal_6ecaec0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecaf80
        lea ecx, ds:[edi+0xC]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        call public_6f15710
        mov ebx, eax
        test ebx, ebx
        jne public_6ecaf15
        lea edx, ds:[edi+0x10]
        push edx
/*FIXUP push offset public_6fb4708 @0x6ecaef6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ecaf80
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [ecx+0x10]
        test ebx, ebx
        je public_6ecaf80
        public_6ecaf15 : nop
        mov esi, dword ptr ds : [edi+4]
        lea ebp, ds:[edi+0x40]
        add esi, 0x100
        push ebp
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6ecaf42
        mov edx, dword ptr ss : [ebp]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ecaf42
        lea eax, ss:[esp+0x10]
        jmp public_6ecaf4a
        public_6ecaf42 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6ecaf4a : nop
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+0x104]
        je public_6ecaf80
        mov ecx, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [ebx+4]
        call public_6f481e0
        cmp ebp, eax
        je public_6ecaf73
        push 0
        push 1
        push 0
        mov ecx, ebx
        call public_6f34b70
        public_6ecaf73 : nop
        push 0
        add esi, 0x10
        push esi
        mov ecx, ebx
        call public_6f57840
        public_6ecaf80 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ecaec0)
    }
}

#undef public_6ecaf15
#undef public_6ecaf42
#undef public_6ecaf4a
#undef public_6ecaf73
#undef public_6ecaf80
