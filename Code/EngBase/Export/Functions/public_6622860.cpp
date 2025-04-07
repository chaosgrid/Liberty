#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_66134d0);
CLANG_FORWARD_PROC_SYMBOL(public_661ec90);
CLANG_FORWARD_PROC_SYMBOL(public_6622860);
CLANG_FORWARD_PROC_SYMBOL(public_6623670);
CLANG_FORWARD_PROC_SYMBOL(public_6623730);
CLANG_FORWARD_PROC_SYMBOL(public_6623ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6624880);
CLANG_FORWARD_PROC_SYMBOL(public_6624c60);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_662287e _public_662287e
#define public_662288c _public_662288c
#define public_66228b8 _public_66228b8
#define public_662290a _public_662290a
#define public_662291c _public_662291c
#define public_6622930 _public_6622930
#define public_6622981 _public_6622981
#define public_66229ba _public_66229ba
#define public_66229fc _public_66229fc
#define public_6622a35 _public_6622a35
#define public_6622a6d _public_6622a6d
#define public_6622a80 _public_6622a80
#define public_6622a8d _public_6622a8d
#define public_6622a96 _public_6622a96
#define public_6622ac2 _public_6622ac2
#define public_6622b09 _public_6622b09
#define public_6622b0d _public_6622b0d
#define public_6622b2f _public_6622b2f
#define public_6622b33 _public_6622b33

PROC_DECLARE(0x6622860, internal_6622860, public_6622860);
extern "C" NAKED register_t __cdecl internal_6622860()
{
    __asm
    {
        mov eax, 0x403C
        call public_6628230
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x4048]
        mov ebx, ecx
        cmp esi, 0xFFFFFFFF
        je public_662287e
        test esi, esi
        jne public_662288c
        public_662287e : nop
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x403C
        ret 8
        public_662288c : nop
        push ebp
        lea eax, ss:[esp+0x2F]
        push edi
        push eax
        lea ecx, ss:[esp+0x36]
        push 0
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6623730
        mov eax, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [esi+0x1C]
        mov ebp, dword ptr ss : [esp+0x4054]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_662291c
        public_66228b8 : nop
        mov eax, dword ptr ds : [edi+0x44]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push eax
        push ebx
        call dword ptr ds : [edx+0x5C]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_662290a
        mov ebp, dword ptr ss : [esp+0x4050]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0xE8], edi
        mov eax, dword ptr ds : [edi+0x40]
        lea edx, ss:[esp+0x34]
        push ecx
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0
        call public_6623670
        mov eax, dword ptr ds : [eax]
        push ebp
        push ebx
        mov dword ptr ds : [eax+0x10], esi
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+0x38]
        xor ebp, ebp
        public_662290a : nop
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 0x48
        cmp edi, eax
        jne public_66228b8
        mov esi, dword ptr ss : [esp+0x4050]
        public_662291c : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov esi, dword ptr ds : [esi+0x2C]
        xor ebp, ebp
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6622a8d
        public_6622930 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6622a6d
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6622a6d
        add eax, 0x40
        lea ecx, ss:[esp+0x10]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_66134d0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        jne public_66229ba
        mov eax, dword ptr ss : [esp+0x4050]
        mov edx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x3C]
        push eax
        push ecx
        push ebx
        call dword ptr ds : [edx+0x40]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_6622981
        mov eax, offset public_662ace4
        public_6622981 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        push edx
        lea eax, ss:[esp+0x54]
/*FIXUP push offset public_662aa50 @0x6622989*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662aa50
        push eax
        call public_6611d80
        push eax
        push 0x8D7
        mov ecx, 0x100002
/*FIXUP push offset public_662a5c8 @0x662299f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x66229a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        mov ecx, dword ptr ds : [public_6629004]
        call dword ptr ds : [ecx]
        add esp, 0x24
        jmp public_6622a6d
        public_66229ba : nop
        mov edx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax+0x10]
        add edx, 0x40
        lea eax, ss:[esp+0x34]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        call public_66134d0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        jne public_6622a35
        mov edx, dword ptr ss : [esp+0x4050]
        mov ecx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x44]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_66229fc
        mov eax, offset public_662ace4
        public_66229fc : nop
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        lea edx, ss:[esp+0x2054]
/*FIXUP push offset public_662aa1c @0x6622a08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662aa1c
        push edx
        call public_6611d80
        push eax
        mov eax, dword ptr ds : [public_6629004]
        push 0x8E0
        mov ecx, 0x100002
/*FIXUP push offset public_662a5c8 @0x6622a23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x6622a28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x24
        jmp public_6622a6d
        public_6622a35 : nop
        mov ebp, dword ptr ds : [eax+0x10]
        lea ecx, ds:[esi+8]
        push ecx
        push edi
        mov ecx, ebp
        call public_661ec90
        test al, al
        jne public_6622a6d
        mov edx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a9f8 @0x6622a4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a9f8
        push 0x8EB
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x6622a5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x6622a62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6622a6d : nop
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x64
        cmp esi, eax
        jne public_6622930
        test ebp, ebp
        je public_6622a8d
        public_6622a80 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6622a96
        mov ebp, eax
        test ebp, ebp
        jne public_6622a80
        public_6622a8d : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [ecx+0x10]
        public_6622a96 : nop
        lea edx, ss:[esp+0x14]
        lea eax, ss:[esp+0x34]
        push edx
        push eax
        lea ecx, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        call public_6623ac0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [ebx+0x14]
        cmp eax, ecx
        je public_6622ac2
        mov dword ptr ds : [ebx+0x28], eax
        mov byte ptr ds : [ebx+0x2C], 1
        public_6622ac2 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x2C]
        xor ebx, ebx
        mov edi, ecx
        mov eax, dword ptr ds : [ecx]
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6622b09
        mov edx, eax
        cmp eax, edx
        jne public_6622b09
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6624c60
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], eax
        jmp public_6622b2f
        public_6622b09 : nop
        cmp eax, ecx
        je public_6622b33
        public_6622b0d : nop
        lea ecx, ss:[esp+0x10]
        mov esi, eax
        call public_66252f0
        lea ecx, ss:[esp+0x14]
        push esi
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6624880
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6622b0d
        public_6622b2f : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6622b33 : nop
        push ecx
        call public_66281d0
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x24], ebx
        push edx
        mov dword ptr ss : [esp+0x34], ebx
        call public_66281d0
        add esp, 8
        mov eax, ebp
        pop edi
        pop ebp
        pop esi
        pop ebx
        add esp, 0x403C
        ret 8
        UNREACHABLE_TRAP(0x6622860)
    }
}

#undef public_662287e
#undef public_662288c
#undef public_66228b8
#undef public_662290a
#undef public_662291c
#undef public_6622930
#undef public_6622981
#undef public_66229ba
#undef public_66229fc
#undef public_6622a35
#undef public_6622a6d
#undef public_6622a80
#undef public_6622a8d
#undef public_6622a96
#undef public_6622ac2
#undef public_6622b09
#undef public_6622b0d
#undef public_6622b2f
#undef public_6622b33
