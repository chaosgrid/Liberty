#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_46b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_568880);
CLANG_FORWARD_PROC_SYMBOL(public_569170);
CLANG_FORWARD_PROC_SYMBOL(public_575520);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_599980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2623);

#define public_5691c3 _public_5691c3
#define public_56932b _public_56932b
#define public_56932f _public_56932f
#define public_5694d1 _public_5694d1
#define public_5694d5 _public_5694d5
#define public_569637 _public_569637
#define public_569639 _public_569639

PROC_DECLARE(0x569170, internal_569170, public_569170);
extern "C" NAKED register_t __cdecl internal_569170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2623 @0x569172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2623
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x184
        push ebx
        mov ebx, dword ptr ss : [esp+0x19C]
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea eax, ds:[esi+0x399]
        push eax
        xor edi, edi
        push ebx
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_5c6bd4]
        mov ebp, dword ptr ds : [ebx+0x208]
        add esp, 8
        cmp ebp, edi
        mov byte ptr ss : [esp+0x14], al
        jne public_5691c3
        mov ebp, dword ptr ds : [public_5c700c]
        public_5691c3 : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62dc]
        push 0xFFFFFFFF
        push ebp
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x1A4], edi
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x19C], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1A0], 2
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x19C], 1
        call public_45eeb0
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x19C], 0
        call dword ptr ds : [public_5c62ac]
        mov ebp, dword ptr ss : [esp+0x14]
        push ebp
        push 1
        lea ecx, ss:[esp+0x20]
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1B4]
        push edi
        mov ecx, esi
        call public_568880
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x19C], 0xFFFFFFFF
        call public_46ba90
        mov edx, dword ptr ds : [public_5c7020]
        mov eax, dword ptr ds : [public_5c7024]
        lea ecx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x7C], edx
        mov dword ptr ss : [esp+0x84], eax
        call dword ptr ds : [public_5c7034]
        mov dword ptr ss : [esp+0x10], 1
        push 0
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x1A4], 3
        call dword ptr ds : [public_5c7014]
        push 3
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x1A0], 4
        call dword ptr ds : [public_5c7010]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_5c7094]
        mov dword ptr ss : [esp+eax+0x7C], ecx
        mov edx, dword ptr ds : [ebx+0x234]
        push edx
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x1A0], 5
        call dword ptr ds : [public_5c7030]
        push eax
        call dword ptr ds : [public_5c7004]
        add esp, 4
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x80]
        call dword ptr ds : [public_5c7000]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov byte ptr ss : [esp+0x19C], 6
        jne public_56932b
        mov ecx, dword ptr ds : [public_5c700c]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_56932f
        public_56932b : nop
        mov dword ptr ss : [esp+0x10], eax
        public_56932f : nop
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62dc]
        mov edx, dword ptr ss : [esp+0x10]
        push 0xFFFFFFFF
        push edx
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0x1A4], 7
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x19C], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1A0], 9
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x19C], 8
        call public_45eeb0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x19C], 7
        call dword ptr ds : [public_5c62ac]
        push ebp
        push 1
        lea ecx, ss:[esp+0x20]
        push ecx
        push 2
        push edi
        mov ecx, esi
        call public_568880
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x19C], 6
        call public_46ba90
        push 1
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x1A0], 5
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x19C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6ffc]
        lea ecx, ss:[esp+0xD4]
        call dword ptr ds : [public_5c6ff4]
        mov edx, dword ptr ds : [public_5c7020]
        mov eax, dword ptr ds : [public_5c7024]
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x108], edx
        mov dword ptr ss : [esp+0x110], eax
        call dword ptr ds : [public_5c7034]
        mov dword ptr ss : [esp+0x10], 3
        push 0
        lea ecx, ss:[esp+0x118]
        push ecx
        lea ecx, ss:[esp+0x110]
        mov dword ptr ss : [esp+0x1A4], 0xA
        call dword ptr ds : [public_5c7014]
        push 3
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x1A0], 0xB
        call dword ptr ds : [public_5c7010]
        mov edx, dword ptr ss : [esp+0x108]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_5c7094]
        mov dword ptr ss : [esp+eax+0x108], ecx
        mov edx, dword ptr ds : [ebx+0x270]
        push edx
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x1A0], 0xC
        call dword ptr ds : [public_5c7008]
        push eax
        call dword ptr ds : [public_5c7004]
        add esp, 4
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x10C]
        call dword ptr ds : [public_5c7000]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov byte ptr ss : [esp+0x19C], 0xD
        jne public_5694d1
        mov ecx, dword ptr ds : [public_5c700c]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_5694d5
        public_5694d1 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_5694d5 : nop
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62dc]
        mov edx, dword ptr ss : [esp+0x10]
        push 0xFFFFFFFF
        push edx
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x1A4], 0xE
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x19C], 0xF
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1A0], 0x10
        call public_46bb00
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x19C], 0xF
        call public_45eeb0
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x19C], 0xE
        call dword ptr ds : [public_5c62ac]
        push ebp
        push 1
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 1
        push edi
        mov ecx, esi
        call public_568880
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x19C], 0xD
        call public_46ba90
        push 1
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x1A0], 0xC
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x160]
        mov dword ptr ss : [esp+0x19C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6ffc]
        lea ecx, ss:[esp+0x160]
        call dword ptr ds : [public_5c6ff4]
        mov edx, dword ptr ds : [ebx+0x230]
        push ebp
        push 1
        push edx
        call public_46b6c0
        add esp, 4
        push eax
        push 3
        push edi
        mov ecx, esi
        call public_568880
        mov eax, dword ptr ds : [ebx+0x260]
        push ebp
        push 1
        push eax
        call public_46b6a0
        add esp, 4
        push eax
        push 4
        push edi
        mov ecx, esi
        call public_568880
        mov esi, dword ptr ds : [esi+0x2B8]
        push edi
        mov ecx, esi
        call public_58d0b0
        mov edi, eax
        push 0x208
        mov byte ptr ds : [edi+1], 1
        mov byte ptr ds : [edi], 1
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        test esi, esi
        mov dword ptr ss : [esp+0x19C], 0x11
        je public_569637
        mov dword ptr ds : [esi+4], 1
        lea ecx, ds:[esi+8]
        mov byte ptr ds : [ecx], 0
        push ebx
        mov byte ptr ss : [esp+0x1A0], 0x12
        mov dword ptr ds : [esi], offset public_5e2a48
        call dword ptr ds : [public_5c63cc]
        jmp public_569639
        public_569637 : nop
        xor esi, esi
        public_569639 : nop
        push esi
        lea ecx, ds:[edi+8]
        mov dword ptr ss : [esp+0x1A0], 0xFFFFFFFF
        call public_575520
        mov ecx, esi
        call public_599980
        mov ecx, dword ptr ss : [esp+0x194]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x190
        ret 8
        UNREACHABLE_TRAP(0x569170)
    }
}

#undef public_5691c3
#undef public_56932b
#undef public_56932f
#undef public_5694d1
#undef public_5694d5
#undef public_569637
#undef public_569639
