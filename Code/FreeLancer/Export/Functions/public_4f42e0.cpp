#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4f42e0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4930);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_5475b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf2a3);

#define public_4f4367 _public_4f4367
#define public_4f4369 _public_4f4369
#define public_4f4413 _public_4f4413
#define public_4f4415 _public_4f4415
#define public_4f4445 _public_4f4445
#define public_4f445f _public_4f445f
#define public_4f4461 _public_4f4461
#define public_4f4479 _public_4f4479
#define public_4f46f9 _public_4f46f9
#define public_4f46fb _public_4f46fb
#define public_4f4732 _public_4f4732
#define public_4f4736 _public_4f4736
#define public_4f47da _public_4f47da
#define public_4f47fd _public_4f47fd
#define public_4f47ff _public_4f47ff
#define public_4f4848 _public_4f4848
#define public_4f4884 _public_4f4884
#define public_4f48a5 _public_4f48a5
#define public_4f490f _public_4f490f

PROC_DECLARE(0x4f42e0, internal_4f42e0, public_4f42e0);
extern "C" NAKED register_t __cdecl internal_4f42e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bf2a3 @0x4f42e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf2a3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x208
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x364]
        lea ebp, ds:[esi+0x364]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov edi, dword ptr ss : [esp+0x234]
        je public_4f4445
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_4f4445
        mov al, byte ptr ss : [esp+0x22C]
        cmp al, byte ptr ds : [esi+0x374]
        jne public_4f4445
        mov ecx, dword ptr ss : [esp+0x230]
        cmp ecx, dword ptr ds : [esi+0x378]
        jne public_4f4445
        cmp edi, dword ptr ds : [esi+0x384]
        jne public_4f4445
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        je public_4f4367
        lea ecx, ds:[eax-8]
        jmp public_4f4369
        public_4f4367 : nop
        xor ecx, ecx
        public_4f4369 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x228]
        mov dword ptr ss : [esp+0x30], ecx
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], edx
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x38]
        fabs 
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 5
        jp public_4f4445
        fld dword ptr ss : [esp+0x34]
        fabs 
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 5
        jp public_4f4445
        fld dword ptr ss : [esp+0x38]
        fabs 
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 5
        jp public_4f4445
        mov byte ptr ds : [esi+0x38C], 1
        mov ebp, dword ptr ss : [ebp]
        xor eax, eax
        cmp ebp, ebx
        mov ecx, 0xA
        lea edi, ss:[esp+0x148]
        rep stosd
        mov byte ptr ss : [esp+0x16E], 1
        mov dword ptr ss : [esp+0x148], 0x1C
        je public_4f4413
        lea ecx, ss:[ebp-8]
        jmp public_4f4415
        public_4f4413 : nop
        xor ecx, ecx
        public_4f4415 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x158], eax
        mov eax, dword ptr ds : [public_5c6368]
        movzx ecx, word ptr ds : [eax]
        lea edx, ss:[esp+0x148]
        push edx
        mov dword ptr ss : [esp+0x160], ecx
        call public_54bcb0
        add esp, 4
        jmp public_4f490f
        public_4f4445 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        je public_4f4479
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_4f4479
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        je public_4f445f
        lea ecx, ds:[eax-8]
        jmp public_4f4461
        public_4f445f : nop
        xor ecx, ecx
        public_4f4461 : nop
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x15C]
        cmp dword ptr ss : [ebp], ebx
        je public_4f4479
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c62a8]
        public_4f4479 : nop
        mov cl, byte ptr ss : [esp+0x22C]
        mov edx, dword ptr ss : [esp+0x230]
/*FIXUP push offset public_5d97d0 @0x4f4487*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d97d0
        mov byte ptr ds : [esi+0x374], cl
        mov dword ptr ds : [esi+0x378], edx
        mov dword ptr ds : [esi+0x384], edi
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c65dc]
        push eax
        call dword ptr ds : [public_5c61f8]
        mov edi, eax
        mov edx, dword ptr ds : [edi]
        add esp, 0xC
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x58]
        call public_4f4930
        mov ebp, dword ptr ds : [public_5c6030]
        lea ecx, ss:[esp+0x110]
        mov dword ptr ss : [esp+0x220], ebx
        call ebp
        lea ecx, ss:[esp+0x118]
        mov byte ptr ss : [esp+0x114], bl
        call ebp
        lea ecx, ss:[esp+0x124]
        mov byte ptr ss : [esp+0x11C], bl
        mov byte ptr ss : [esp+0x11D], bl
        mov dword ptr ss : [esp+0x120], ebx
        call ebp
        mov cl, byte ptr ss : [esp+0x17]
        push ebx
        mov byte ptr ss : [esp+0x140], cl
        push ebx
        lea ecx, ss:[esp+0x144]
        mov dword ptr ss : [esp+0x130], ebx
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        mov dword ptr ss : [esp+0x13C], 0
        mov dword ptr ss : [esp+0x140], ebx
        call public_42a7e0
        mov dword ptr ss : [esp+0x140], eax
        mov dword ptr ss : [esp+0x144], ebx
        mov eax, dword ptr ds : [esi+0x36C]
        mov edx, dword ptr ds : [public_613ed0]
        push eax
        mov dword ptr ss : [esp+0x60], edx
        lea edx, ss:[esp+0x19C]
        lea ecx, ds:[eax+1]
/*FIXUP push offset public_5d97bc @0x4f4585*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d97bc
        push edx
        mov dword ptr ss : [esp+0x22C], 1
        mov dword ptr ds : [esi+0x36C], ecx
        call dword ptr ds : [public_5c71ec]
        lea eax, ss:[esp+0x1A4]
        push eax
        call dword ptr ds : [public_5c6020]
        lea ecx, ss:[esp+0xC8]
        push ecx
        mov dword ptr ss : [esp+0x124], eax
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0xCC], eax
        call dword ptr ds : [public_5c65d8]
        push ebx
        lea edx, ss:[esp+0xD0]
        push 0xFFFFFFFF
        push edx
        call dword ptr ds : [public_5c65d4]
        add esp, 0x20
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        mov byte ptr ss : [esp+0x46], bl
        mov byte ptr ss : [esp+0x47], bl
        mov byte ptr ss : [esp+0x48], bl
        mov byte ptr ss : [esp+0x49], bl
        mov byte ptr ss : [esp+0x4A], bl
        mov byte ptr ss : [esp+0x4B], bl
        mov byte ptr ss : [esp+0x4C], bl
        mov byte ptr ss : [esp+0x4D], bl
        mov byte ptr ss : [esp+0x4E], bl
        mov byte ptr ss : [esp+0x4F], bl
        mov byte ptr ss : [esp+0x50], bl
        mov byte ptr ss : [esp+0x51], bl
        push 0x442
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x224], 3
        call dword ptr ds : [public_5c633c]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6338]
        push ebx
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0xC4]
        push edx
        call dword ptr ds : [public_5c609c]
        lea eax, ss:[esp+0xC8]
        push ebx
        push eax
        call dword ptr ds : [public_5c65d0]
        mov eax, dword ptr ss : [esp+0x240]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push 0x208
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0x88], edx
        mov dword ptr ss : [esp+0x8C], eax
        call public_5b7e84
        add esp, 0x1C
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x220], 4
        je public_4f46f9
        mov ecx, eax
        call public_5475b0
        mov ebp, eax
        jmp public_4f46fb
        public_4f46f9 : nop
        xor ebp, ebp
        public_4f46fb : nop
        mov edx, dword ptr ss : [ebp]
        push edi
        mov ecx, ebp
        mov byte ptr ss : [esp+0x224], 3
        call dword ptr ds : [edx+0x168]
        lea eax, ss:[ebp+0xC]
        cmp eax, ebx
        je public_4f4732
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_4f4732
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        mov dword ptr ss : [esp+0x10], eax
        je public_4f4736
        public_4f4732 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_4f4736 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x58]
        push edx
        call dword ptr ds : [public_5c65cc]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x170]
        push ebx
        push ebp
        call public_540c30
        add esp, 8
        mov ecx, edi
        call dword ptr ds : [public_5c65c8]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        call dword ptr ds : [public_5c65c4]
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x170]
        rep stosd
        mov byte ptr ss : [esp+0x196], 1
        mov dword ptr ss : [esp+0x170], 0x1C
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x180], eax
        mov eax, dword ptr ds : [public_5c6368]
        movzx ecx, word ptr ds : [eax]
        lea edx, ss:[esp+0x170]
        push edx
        mov dword ptr ss : [esp+0x188], ecx
        call public_54bcb0
        mov eax, dword ptr ds : [esi+0x364]
        lea edi, ds:[esi+0x364]
        add ebp, 8
        add esp, 4
        cmp ebp, eax
        je public_4f47da
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4f47da : nop
        mov byte ptr ds : [esi+0x38C], 1
        mov byte ptr ds : [esi+0x380], bl
        call public_54baf0
        mov ebp, eax
        cmp ebp, ebx
        je public_4f4848
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        je public_4f47fd
        lea ecx, ds:[edi-8]
        jmp public_4f47ff
        public_4f47fd : nop
        xor ecx, ecx
        public_4f47ff : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov edi, eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ds : [public_5ca230]
        fnstsw ax
        test ah, 0x41
        jp public_4f4848
        mov byte ptr ds : [esi+0x380], 1
        public_4f4848 : nop
        mov esi, dword ptr ds : [public_5c6098]
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x220], 2
        call esi
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x220], 1
        call esi
        mov eax, dword ptr ss : [esp+0x140]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x220], 5
        mov edi, eax
        je public_4f48a5
        public_4f4884 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x144]
        call public_516f70
        cmp esi, edi
        jne public_4f4884
        mov eax, dword ptr ss : [esp+0x140]
        public_4f48a5 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [esp+0x140], ebx
        mov dword ptr ss : [esp+0x144], ebx
        mov eax, dword ptr ss : [esp+0x108]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0x110]
        mov dword ptr ss : [esp+0x22C], 6
        call dword ptr ds : [public_5c65c0]
        mov edx, dword ptr ss : [esp+0x108]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0xFC]
        push eax
        mov dword ptr ss : [esp+0x110], ebx
        mov dword ptr ss : [esp+0x114], ebx
        call public_5b7e1d
        add esp, 8
        public_4f490f : nop
        mov ecx, dword ptr ss : [esp+0x218]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x214
        ret 0x10
        UNREACHABLE_TRAP(0x4f42e0)
    }
}

#undef public_4f4367
#undef public_4f4369
#undef public_4f4413
#undef public_4f4415
#undef public_4f4445
#undef public_4f445f
#undef public_4f4461
#undef public_4f4479
#undef public_4f46f9
#undef public_4f46fb
#undef public_4f4732
#undef public_4f4736
#undef public_4f47da
#undef public_4f47fd
#undef public_4f47ff
#undef public_4f4848
#undef public_4f4884
#undef public_4f48a5
#undef public_4f490f
