#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f57ee0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5860b);

#define public_6f2a24a _public_6f2a24a
#define public_6f2a250 _public_6f2a250
#define public_6f2a27d _public_6f2a27d
#define public_6f2a288 _public_6f2a288
#define public_6f2a2e3 _public_6f2a2e3
#define public_6f2a34f _public_6f2a34f
#define public_6f2a355 _public_6f2a355
#define public_6f2a366 _public_6f2a366
#define public_6f2a391 _public_6f2a391
#define public_6f2a397 _public_6f2a397
#define public_6f2a3c2 _public_6f2a3c2
#define public_6f2a3c8 _public_6f2a3c8
#define public_6f2a3f1 _public_6f2a3f1
#define public_6f2a3f6 _public_6f2a3f6
#define public_6f2a429 _public_6f2a429
#define public_6f2a42e _public_6f2a42e
#define public_6f2a483 _public_6f2a483
#define public_6f2a4ca _public_6f2a4ca
#define public_6f2a4d0 _public_6f2a4d0
#define public_6f2a4e1 _public_6f2a4e1
#define public_6f2a4fa _public_6f2a4fa
#define public_6f2a511 _public_6f2a511
#define public_6f2a547 _public_6f2a547
#define public_6f2a57e _public_6f2a57e
#define public_6f2a597 _public_6f2a597

PROC_DECLARE(0x6f2a1e0, internal_6f2a1e0, public_6f2a1e0);
extern "C" NAKED register_t __cdecl internal_6f2a1e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6f5860b @0x6f2a1e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5860b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, 0x203C
        call public_6f57ee0
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_6f5a000]
        mov edi, eax
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, dword ptr ss : [ebp+0xC]
        push ebx
        mov dword ptr ss : [esp+0x2058], eax
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a24a
        push ebx
        call public_6f4b900
/*FIXUP push offset public_6f5ecf0 @0x6f2a234*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ecf0
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f2a250
        public_6f2a24a : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f2a250 : nop
        push ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a27d
        push ebx
        call public_6f4b900
/*FIXUP push offset public_6f5ece8 @0x6f2a263*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ece8
        call public_6f4b790
        add esp, 8
        call public_6f4b250
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_6f2a288
        public_6f2a27d : nop
        mov eax, dword ptr ds : [public_6f61de8]
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        public_6f2a288 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a57e
        push ebx
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a57e
        push esi
        call public_6f4b590
        xor ecx, ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x34], 0x14
        je public_6f2a2e3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_6f2a2e3 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        push edi
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_6f2a547
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+0x24]
        mov edx, dword ptr ds : [eax]
        push ecx
/*FIXUP push offset public_6f5ecd4 @0x6f2a308*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ecd4
        push eax
        mov dword ptr ss : [esp+0x30], ecx
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6f2a511
        push ebx
        mov dword ptr ss : [esp+0x1C], 1
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a34f
        push ebx
        call public_6f4b900
        push 0x3FF00000
        push 0
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        mov esi, eax
        jmp public_6f2a355
        public_6f2a34f : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f2a355 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a4e1
        public_6f2a366 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a391
        push esi
        call public_6f4b900
        push 0x3FF00000
        push 0
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        mov edi, eax
        jmp public_6f2a397
        public_6f2a391 : nop
        mov edi, dword ptr ds : [public_6f61de8]
        public_6f2a397 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a3c2
        push esi
        call public_6f4b900
        push 0x40000000
        push 0
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        mov ebx, eax
        jmp public_6f2a3c8
        public_6f2a3c2 : nop
        mov ebx, dword ptr ds : [public_6f61de8]
        public_6f2a3c8 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a3f1
        push esi
        call public_6f4b900
        push 0x40080000
        push 0
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        jmp public_6f2a3f6
        public_6f2a3f1 : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f2a3f6 : nop
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x20]
        push esi
        call public_6f4b440
        add esp, 8
        test eax, eax
        je public_6f2a429
        push esi
        call public_6f4b900
        push 0x40100000
        push 0
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        jmp public_6f2a42e
        public_6f2a429 : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f2a42e : nop
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x24]
        push edi
        call public_6f4b410
        add esp, 8
        test eax, eax
        jne public_6f2a483
        push edi
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f2a483
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push ebx
        mov dword ptr ss : [esp+0x28], eax
        call public_6f4b540
        fstp dword ptr ss : [esp]
        push edi
        call public_6f4b540
        fstp dword ptr ss : [esp]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        call dword ptr ds : [eax+0x18]
        public_6f2a483 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        inc ebx
        push esi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a4ca
        push esi
        call public_6f4b900
        mov eax, ebx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], 0
        fild qword ptr ss : [esp+0x2C]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        call public_6f4b250
        mov esi, eax
        jmp public_6f2a4d0
        public_6f2a4ca : nop
        mov esi, dword ptr ds : [public_6f61de8]
        public_6f2a4d0 : nop
        push esi
        call public_6f4b410
        add esp, 4
        test eax, eax
        je public_6f2a366
        public_6f2a4e1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x2054], 0xFFFFFFFF
        je public_6f2a4fa
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f2a4fa : nop
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x204C]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f2a511 : nop
        push esi
        call public_6f4b590
        push eax
        lea edx, ss:[esp+0x50]
/*FIXUP push offset public_6f5ec9c @0x6f2a51c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ec9c
        push edx
        call public_6f2d520
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        push 0x978
/*FIXUP push offset public_6f5e730 @0x6f2a532*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e730
        mov ecx, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f2a53c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x24
        public_6f2a547 : nop
        push esi
        call public_6f4b590
        push eax
        lea ecx, ss:[esp+0x50]
/*FIXUP push offset public_6f5ec70 @0x6f2a552*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ec70
        push ecx
        call public_6f2d520
        mov edx, dword ptr ds : [public_6f5a004]
        push eax
        push 0x97B
/*FIXUP push offset public_6f5e730 @0x6f2a569*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e730
        mov ecx, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f2a573*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x24
        public_6f2a57e : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x2054], 0xFFFFFFFF
        je public_6f2a597
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f2a597 : nop
        mov ecx, dword ptr ss : [esp+0x204C]
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f2a1e0)
    }
}

#undef public_6f2a24a
#undef public_6f2a250
#undef public_6f2a27d
#undef public_6f2a288
#undef public_6f2a2e3
#undef public_6f2a34f
#undef public_6f2a355
#undef public_6f2a366
#undef public_6f2a391
#undef public_6f2a397
#undef public_6f2a3c2
#undef public_6f2a3c8
#undef public_6f2a3f1
#undef public_6f2a3f6
#undef public_6f2a429
#undef public_6f2a42e
#undef public_6f2a483
#undef public_6f2a4ca
#undef public_6f2a4d0
#undef public_6f2a4e1
#undef public_6f2a4fa
#undef public_6f2a511
#undef public_6f2a547
#undef public_6f2a57e
#undef public_6f2a597
