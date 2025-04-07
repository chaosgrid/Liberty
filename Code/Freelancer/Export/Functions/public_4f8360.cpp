#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e080);
CLANG_FORWARD_PROC_SYMBOL(public_4f8360);

#define public_4f8376 _public_4f8376
#define public_4f8382 _public_4f8382
#define public_4f83e1 _public_4f83e1
#define public_4f8441 _public_4f8441
#define public_4f847b _public_4f847b

PROC_DECLARE(0x4f8360, internal_4f8360, public_4f8360);
extern "C" NAKED register_t __cdecl internal_4f8360()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x7C]
        test al, 4
        push edi
        je public_4f8376
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_4f8376 : nop
        test al, 0x10
        jne public_4f8382
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4f8382 : nop
        mov eax, dword ptr ds : [public_5c6d64]
        lea edi, ds:[esi+0x70]
        push edi
        mov dword ptr ss : [esp+0x10], 8
        mov dword ptr ss : [esp+0x14], offset public_5d9d0c
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        mov ecx, dword ptr ds : [esi+4]
        je public_4f83e1
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0x3DC
/*FIXUP push offset public_5d9b48 @0x4f83b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov eax, 0x100002
/*FIXUP push offset public_5d9cb8 @0x4f83c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9cb8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov al, byte ptr ds : [esi+0x7C]
        add esp, 0x14
        and al, 0xEF
        mov byte ptr ds : [esi+0x7C], al
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4f83e1 : nop
        call public_42e080
        or byte ptr ds : [esi+0x7C], 8
        mov ecx, dword ptr ds : [public_5c6dd4]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x6C]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, dword ptr ds : [edi]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_4f847b
        cmp eax, 0xFFFFFFF8
        jne public_4f8441
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        push edx
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x3EB
/*FIXUP push offset public_5d9b48 @0x4f8424*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov eax, 0x100001
/*FIXUP push offset public_5d9c70 @0x4f842e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9c70
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4f8441 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        push 0x3F0
/*FIXUP push offset public_5d9b48 @0x4f8450*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov ecx, 0x100001
/*FIXUP push offset public_5d9bf0 @0x4f845a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9bf0
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [ecx]
        mov al, byte ptr ds : [esi+0x7C]
        add esp, 0x18
        and al, 0xEF
        mov byte ptr ds : [esi+0x7C], al
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4f847b : nop
        mov edx, dword ptr ds : [public_5c6ddc]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov al, byte ptr ds : [esi+0x7C]
        or al, 4
        mov byte ptr ds : [esi+0x7C], al
        shr al, 2
        pop edi
        and al, 1
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4f8360)
    }
}

#undef public_4f8376
#undef public_4f8382
#undef public_4f83e1
#undef public_4f8441
#undef public_4f847b
