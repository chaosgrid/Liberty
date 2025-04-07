#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_6619790);
CLANG_FORWARD_PROC_SYMBOL(public_661e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_661eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_66234f0);
CLANG_FORWARD_PROC_SYMBOL(public_6624f20);
CLANG_FORWARD_PROC_SYMBOL(public_6625500);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6621417 _public_6621417
#define public_6621427 _public_6621427
#define public_662148b _public_662148b
#define public_66214bc _public_66214bc
#define public_66214fd _public_66214fd
#define public_6621506 _public_6621506
#define public_662151a _public_662151a

PROC_DECLARE(0x66213d0, internal_66213d0, public_66213d0);
extern "C" NAKED register_t __cdecl internal_66213d0()
{
    __asm
    {
        mov eax, 0x2010
        call public_6628230
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2020]
        cmp esi, 0xFFFFFFFF
        je public_662151a
        test esi, esi
        je public_662151a
        mov ebx, dword ptr ss : [esp+0x201C]
        mov ecx, esi
        push ebx
        call public_661eaf0
        test eax, eax
        jne public_662151a
        push ebp
        mov ebp, dword ptr ds : [ebx+0x58]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6621427
        public_6621417 : nop
        mov eax, dword ptr ds : [edi+0x38]
        push esi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6621417
        public_6621427 : nop
        lea ebp, ds:[esi+0x10]
        lea edi, ds:[ebx+0x30]
        lea edx, ss:[esp+0x1C]
        push ebp
        push edx
        mov ecx, edi
        call public_6624f20
        mov ebx, eax
        lea eax, ss:[esp+0x14]
        push ebp
        push eax
        mov ecx, edi
        call public_6619790
        mov ebx, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x10]
        push ecx
        push edx
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x20], 0
        call public_6625500
        add esp, 0x10
        lea eax, ss:[esp+0x18]
        mov ecx, edi
        push ebx
        push ebp
        push eax
        call public_66234f0
        xor edi, edi
        cmp dword ptr ss : [esp+0x10], edi
        jne public_66214bc
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_662148b
        mov eax, dword ptr ds : [public_662901c]
        public_662148b : nop
        push eax
        lea ecx, ss:[esp+0x24]
/*FIXUP push offset public_662a8a0 @0x6621490*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a8a0
        push ecx
        call public_6611d80
        mov edx, dword ptr ds : [public_6629004]
        push eax
        push 0x47E
        mov ecx, 0x100001
/*FIXUP push offset public_662a5c8 @0x66214ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a530 @0x66214b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a530
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        public_66214bc : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_66281d0
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x34], edi
        mov ecx, dword ptr ds : [esi+0x1C]
        push ecx
        call public_66281d0
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x24], edi
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        cmp eax, edi
        je public_6621506
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_66214fd
        cmp cl, 0xFF
        je public_66214fd
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6621506
        public_66214fd : nop
        push eax
        call public_66281d0
        add esp, 4
        public_6621506 : nop
        push esi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        call public_661e9f0
        add esp, 4
        pop edi
        pop ebp
        public_662151a : nop
        pop esi
        pop ebx
        add esp, 0x2010
        ret 8
        UNREACHABLE_TRAP(0x66213d0)
    }
}

#undef public_6621417
#undef public_6621427
#undef public_662148b
#undef public_66214bc
#undef public_66214fd
#undef public_6621506
#undef public_662151a
