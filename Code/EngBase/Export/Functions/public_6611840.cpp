#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66113c0);
CLANG_FORWARD_PROC_SYMBOL(public_6611440);
CLANG_FORWARD_PROC_SYMBOL(public_6611840);
CLANG_FORWARD_PROC_SYMBOL(public_66138b0);
CLANG_FORWARD_PROC_SYMBOL(public_66139f0);
CLANG_FORWARD_PROC_SYMBOL(public_6614020);

#define public_66118bf _public_66118bf
#define public_66119e8 _public_66119e8
#define public_66119f6 _public_66119f6
#define public_6611a1b _public_6611a1b
#define public_6611a28 _public_6611a28

PROC_DECLARE(0x6611840, internal_6611840, public_6611840);
extern "C" NAKED register_t __cdecl internal_6611840()
{
    __asm
    {
        sub esp, 0x1D0
        push esi
        mov esi, dword ptr ss : [esp+0x1DC]
/*FIXUP push offset public_662a058 @0x661184e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a058
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6611a28
        push ebx
        push edi
        mov edi, offset public_66290a0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edx, ss:[esp+0x9C]
        repne scasb
        not ecx
        dec ecx
        mov edi, offset public_66290ac
        mov dword ptr ds : [public_662acd8], ecx
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        mov edi, offset public_66290b8
        mov dword ptr ds : [public_662acdc], ecx
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        push edx
        mov dword ptr ds : [public_662acc0], ecx
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_662a054 @0x66118a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a054
        push esi
        call dword ptr ds : [ecx+0x48]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_6611a1b
        push ebp
        xor ebp, ebp
        public_66118bf : nop
        cmp byte ptr ss : [esp+0xCC], 0x2E
        je public_66119f6
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x4C], offset public_662a030
        rep stosd
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0x54], eax
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x48]
        push edx
        push eax
        push esi
        mov dword ptr ss : [esp+0x64], 0x80000000
        mov dword ptr ss : [esp+0x68], 1
        mov dword ptr ss : [esp+0x70], 3
        mov dword ptr ss : [esp+0x74], 0x8000080
        mov dword ptr ss : [esp+0x54], 0x34
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+0xA0]
        shr ecx, 4
        test cl, 1
        je public_66119e8
        mov dl, byte ptr ss : [esp+0x17]
        lea eax, ss:[esp+0xCC]
        push eax
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], ebp
        mov byte ptr ss : [esp+0x34], dl
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        call dword ptr ds : [public_662900c]
        add esp, 4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x7C], eax
        push ecx
        lea ecx, ss:[esp+0x84]
        call public_66138b0
        mov ecx, dword ptr ss : [esp+0x1E4]
        lea edx, ss:[esp+0x7C]
        lea eax, ss:[esp+0x18]
        push edx
        push eax
        call public_66139f0
        lea ecx, ss:[esp+0x1C]
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6614020
        mov edi, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x80]
        call public_66113c0
        lea ecx, ss:[esp+0x20]
        call public_66113c0
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0xCC]
        push eax
        push ecx
        lea ecx, ds:[edi+0x10]
        call public_6611440
        public_66119e8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_66119f6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_66119f6 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xA0]
        push ecx
        push ebx
        push esi
        call dword ptr ds : [eax+0x4C]
        test eax, eax
        jne public_66118bf
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x78]
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [eax+0x50]
        pop ebp
        public_6611a1b : nop
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_662a03c @0x6611a1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [ecx+0x60]
        pop edi
        pop ebx
        public_6611a28 : nop
        xor eax, eax
        pop esi
        add esp, 0x1D0
        ret 
        UNREACHABLE_TRAP(0x6611840)
    }
}

#undef public_66118bf
#undef public_66119e8
#undef public_66119f6
#undef public_6611a1b
#undef public_6611a28
