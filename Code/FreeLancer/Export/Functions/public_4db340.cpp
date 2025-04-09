#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c7270);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c60);
CLANG_FORWARD_PROC_SYMBOL(public_4c8110);
CLANG_FORWARD_PROC_SYMBOL(public_4dca20);
CLANG_FORWARD_PROC_SYMBOL(public_4ddeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4de2f0);
CLANG_FORWARD_PROC_SYMBOL(public_4de3a0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7980);
CLANG_FORWARD_PROC_SYMBOL(public_4e8100);
CLANG_FORWARD_PROC_SYMBOL(public_4f5540);
CLANG_FORWARD_PROC_SYMBOL(public_4f5580);
CLANG_FORWARD_PROC_SYMBOL(public_4f5920);
CLANG_FORWARD_PROC_SYMBOL(public_4f6180);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e5e0);

#define public_4db387 _public_4db387
#define public_4db3a6 _public_4db3a6
#define public_4db3c5 _public_4db3c5
#define public_4db496 _public_4db496
#define public_4db498 _public_4db498
#define public_4db4e3 _public_4db4e3
#define public_4db4f9 _public_4db4f9
#define public_4db531 _public_4db531
#define public_4db554 _public_4db554
#define public_4db5c0 _public_4db5c0
#define public_4db620 _public_4db620
#define public_4db66c _public_4db66c
#define public_4db6b9 _public_4db6b9
#define public_4db6be _public_4db6be
#define public_4db7a7 _public_4db7a7
#define public_4db7d4 _public_4db7d4
#define public_4db814 _public_4db814
#define public_4db827 _public_4db827
#define public_4db83a _public_4db83a
#define public_4db856 _public_4db856
#define public_4db879 _public_4db879
#define public_4db87d _public_4db87d
#define public_4db880 _public_4db880
#define public_4db896 _public_4db896
#define public_4db898 _public_4db898
#define public_4db8a9 _public_4db8a9
#define public_4db8b9 _public_4db8b9
#define public_4db8c7 _public_4db8c7
#define public_4db8c9 _public_4db8c9

PROC_DECLARE(0x4db340, internal_4db340, public_4db340);
extern "C" NAKED register_t __cdecl internal_4db340()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x594]
        test al, al
        push edi
        je public_4db387
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4db387
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4db387
        push 2
        mov byte ptr ds : [esi+0x594], 0
        call public_4c8110
        mov cl, byte ptr ds : [esi+0x498]
        add esp, 4
        cmp al, cl
        je public_4db387
        mov eax, dword ptr ds : [esi-0x38]
        lea ecx, ds:[esi-0x38]
        call dword ptr ds : [eax+0x30]
        public_4db387 : nop
        call public_4c7270
        cmp al, byte ptr ds : [public_674aa5]
        je public_4db3a6
        lea ecx, ds:[esi-0x38]
        call public_4dca20
        call public_4c7270
        mov byte ptr ds : [public_674aa5], al
        public_4db3a6 : nop
        call public_4c7c60
        cmp al, byte ptr ds : [public_674aa6]
        je public_4db3c5
        lea ecx, ds:[esi-0x38]
        call public_4dca20
        call public_4c7c60
        mov byte ptr ds : [public_674aa6], al
        public_4db3c5 : nop
        call public_54baf0
        test eax, eax
        je public_4db554
        add eax, 0xC
        test eax, eax
        je public_4db554
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_4db554
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4db554
        mov ecx, edi
        call dword ptr ds : [public_5c62e8]
        mov ebx, eax
        test ebx, ebx
        je public_4db554
        mov al, byte ptr ds : [ebx+0x168]
        test al, al
        jne public_4db4e3
        mov ecx, edi
        call dword ptr ds : [public_5c64a0]
        test al, al
        jne public_4db4e3
        mov eax, dword ptr ds : [ebx+0x16C]
        test eax, eax
        je public_4db4e3
        mov ecx, dword ptr ds : [esi+0x584]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x63B
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x584]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x588]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, edi
        mov byte ptr ds : [esi+0x595], 1
        call dword ptr ds : [public_5c6348]
        test eax, eax
        je public_4db554
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4db496
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_4db498
        public_4db496 : nop
        xor eax, eax
        public_4db498 : nop
        mov cl, byte ptr ds : [eax+0xE0]
        test cl, cl
        jns public_4db554
        push 0
        push 1
        lea edi, ds:[esi+0x598]
        push edi
        push eax
        call public_4e8100
        add esp, 0x10
        test al, al
        je public_4db554
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+0x588]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x588]
        or byte ptr ds : [eax+0x6C], 3
        jmp public_4db554
        public_4db4e3 : nop
        mov al, byte ptr ds : [esi+0x595]
        test al, al
        jne public_4db4f9
        mov ecx, edi
        call dword ptr ds : [public_5c64a0]
        test al, al
        je public_4db554
        public_4db4f9 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c64a0]
        test al, al
        je public_4db531
        mov eax, dword ptr ds : [esi+0x598]
        mov ecx, dword ptr ds : [esi+0x588]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x588]
        or byte ptr ds : [eax+0x6C], 3
        mov byte ptr ds : [esi+0x595], 1
        jmp public_4db554
        public_4db531 : nop
        mov eax, dword ptr ds : [esi+0x584]
        mov byte ptr ds : [esi+0x595], 0
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0x588]
        and byte ptr ds : [eax+0x6C], 0xFC
        lea ecx, ds:[esi-0x38]
        call public_4dca20
        public_4db554 : nop
        mov ecx, esi
        call public_4e7980
        lea ebx, ds:[esi+0x4A8]
        mov ecx, ebx
        call public_55e5e0
        lea edi, ds:[esi+0x32C]
        mov ecx, edi
        call public_55e280
        test al, al
        jne public_4db8b9
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_4db8b9
        mov eax, dword ptr ds : [esi+0x568]
        cmp eax, dword ptr ds : [esi+0x56C]
        push ebp
        je public_4db66c
        test eax, eax
        mov dword ptr ds : [esi+0x56C], eax
        mov ecx, dword ptr ds : [public_5d8484]
        mov dword ptr ds : [esi+0x550], ecx
        mov ebp, 0xA
        lea edi, ds:[esi+0x4D0]
        jne public_4db620
        public_4db5c0 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x50]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        add edi, 4
        dec ebp
        jne public_4db5c0
        mov ecx, dword ptr ds : [esi+0x58C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [public_5d8484]
        mov dword ptr ds : [esi+0x550], ecx
        jmp public_4db66c
        lea ebx, ds:[ebx]
        public_4db620 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x50]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        add edi, 4
        dec ebp
        jne public_4db620
        mov ecx, dword ptr ds : [esi+0x58C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4db66c : nop
        mov al, byte ptr ds : [esi+0x4C8]
        test al, al
        je public_4db6be
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4db6be
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4db6be
        push 0
        mov ecx, offset public_674c0c
        mov byte ptr ds : [esi+0x4C8], 0
        call public_4f5540
        cmp eax, 0xFFFFFFFF
        mov ecx, offset public_674c0c
        push 0
        jne public_4db6b9
        call public_4f5580
        push 0
        mov ecx, offset public_674c0c
        call public_4f6180
        jmp public_4db6be
        public_4db6b9 : nop
        call public_4f5920
        public_4db6be : nop
        mov eax, dword ptr ds : [esi-0x10]
        test eax, eax
        je public_4db898
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4db898
        call public_42d680
        fadd dword ptr ds : [esi+0x550]
        fst dword ptr ds : [esi+0x550]
        fcom dword ptr ds : [public_5d8484]
        fnstsw ax
        test ah, 0x41
        jne public_4db896
        fsub dword ptr ds : [public_5d8484]
        lea ecx, ds:[esi+0x32C]
        fstp dword ptr ds : [esi+0x550]
        call public_55e280
        test al, al
        jne public_4db898
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_4db898
        mov byte ptr ds : [esi+0x54C], al
        mov byte ptr ds : [esi+0x54D], al
        mov byte ptr ds : [esi+0x580], al
        mov byte ptr ds : [esi+0x54E], al
        call public_54baf0
        test eax, eax
        je public_4db856
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        mov edi, eax
        test edi, edi
        je public_4db7d4
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4db7d4
        mov ebp, dword ptr ds : [public_5c64f4]
        push 0x20
        lea ecx, ss:[esp+0x14]
        call ebp
        mov ebx, dword ptr ds : [public_5c64f0]
        lea ecx, ss:[esp+0x10]
        add edi, 0xE4
        push ecx
        mov ecx, edi
        call ebx
        test eax, eax
        je public_4db7a7
        push eax
        call dword ptr ds : [public_5c6538]
        add esp, 4
        test eax, eax
        je public_4db7a7
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xA0]
        public_4db7a7 : nop
        push 0x40
        lea ecx, ss:[esp+0x24]
        call ebp
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call ebx
        test eax, eax
        je public_4db7d4
        push eax
        call dword ptr ds : [public_5c6538]
        add esp, 4
        test eax, eax
        je public_4db7d4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xA0]
        public_4db7d4 : nop
        call public_54baf0
        test eax, eax
        je public_4db879
        add eax, 0xC
        test eax, eax
        je public_4db879
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4db879
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4db879
        mov edi, ecx
        call dword ptr ds : [public_5c6534]
        mov byte ptr ds : [esi+0x54C], al
        public_4db814 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c64a0]
        test al, al
        je public_4db827
        mov byte ptr ds : [esi+0x580], 1
        public_4db827 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c64fc]
        test al, al
        je public_4db83a
        mov byte ptr ds : [esi+0x54E], 1
        public_4db83a : nop
        push 0x400
        lea ecx, ds:[edi+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        je public_4db856
        mov byte ptr ds : [esi+0x54D], 1
        public_4db856 : nop
        lea edi, ds:[esi-0x38]
        mov ecx, edi
        call public_4de2f0
        mov ecx, edi
        call public_4de3a0
        test al, al
        mov eax, dword ptr ds : [esi+0x5A0]
        mov cl, byte ptr ds : [eax+0x6C]
        je public_4db87d
        or cl, 3
        jmp public_4db880
        public_4db879 : nop
        xor edi, edi
        jmp public_4db814
        public_4db87d : nop
        and cl, 0xFC
        public_4db880 : nop
        mov byte ptr ds : [eax+0x6C], cl
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        je public_4db898
        mov ecx, edi
        call public_4ddeb0
        jmp public_4db898
        public_4db896 : nop
        fstp st(0)
        public_4db898 : nop
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        pop ebp
        je public_4db8c7
        lea ecx, ds:[esi+0x32C]
        public_4db8a9 : nop
        call public_55e280
        test al, al
        jne public_4db8c7
        mov eax, 1
        jmp public_4db8c9
        public_4db8b9 : nop
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        je public_4db8c7
        mov ecx, edi
        jmp public_4db8a9
        public_4db8c7 : nop
        xor eax, eax
        public_4db8c9 : nop
        mov ecx, dword ptr ds : [esi+0x490]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x4db340)
    }
}

#undef public_4db387
#undef public_4db3a6
#undef public_4db3c5
#undef public_4db496
#undef public_4db498
#undef public_4db4e3
#undef public_4db4f9
#undef public_4db531
#undef public_4db554
#undef public_4db5c0
#undef public_4db620
#undef public_4db66c
#undef public_4db6b9
#undef public_4db6be
#undef public_4db7a7
#undef public_4db7d4
#undef public_4db814
#undef public_4db827
#undef public_4db83a
#undef public_4db856
#undef public_4db879
#undef public_4db87d
#undef public_4db880
#undef public_4db896
#undef public_4db898
#undef public_4db8a9
#undef public_4db8b9
#undef public_4db8c7
#undef public_4db8c9
