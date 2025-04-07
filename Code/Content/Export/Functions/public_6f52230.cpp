#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6f52230);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f52281 _public_6f52281
#define public_6f522bb _public_6f522bb
#define public_6f522c7 _public_6f522c7
#define public_6f52300 _public_6f52300
#define public_6f52329 _public_6f52329
#define public_6f52335 _public_6f52335
#define public_6f5236e _public_6f5236e
#define public_6f52397 _public_6f52397
#define public_6f523a3 _public_6f523a3
#define public_6f523dc _public_6f523dc
#define public_6f52405 _public_6f52405
#define public_6f52411 _public_6f52411
#define public_6f5244a _public_6f5244a
#define public_6f52481 _public_6f52481
#define public_6f5248d _public_6f5248d
#define public_6f524c5 _public_6f524c5
#define public_6f524ca _public_6f524ca
#define public_6f524db _public_6f524db
#define public_6f5255c _public_6f5255c
#define public_6f525a0 _public_6f525a0
#define public_6f525b6 _public_6f525b6
#define public_6f525d0 _public_6f525d0
#define public_6f525e5 _public_6f525e5
#define public_6f525f0 _public_6f525f0
#define public_6f52604 _public_6f52604
#define public_6f52608 _public_6f52608
#define public_6f5262a _public_6f5262a
#define public_6f52650 _public_6f52650
#define public_6f52660 _public_6f52660
#define public_6f52692 _public_6f52692

PROC_DECLARE(0x6f52230, internal_6f52230, public_6f52230);
extern "C" NAKED register_t __cdecl internal_6f52230()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
        mov ebp, ecx
/*FIXUP push offset public_6fb93e0 @0x6f52243*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93e0
        mov ecx, esi
        mov byte ptr ss : [esp+0x17], 0
        call edi
        test al, al
        mov ecx, esi
        je public_6f52281
        call dword ptr ds : [public_6fb3054]
        push eax
        push ebp
        call dword ptr ds : [public_6fb361c]
        lea eax, ss:[ebp+0x6C]
        push eax
        push ebp
        call dword ptr ds : [public_6fb3544]
        mov al, byte ptr ss : [esp+0x23]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f52281 : nop
        push offset public_6fbb9ac @0x6f52281*/
  FIXUP public_6f52281 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9ac
        call edi
        test al, al
        jne public_6f52692
/*FIXUP push offset public_6fbb99c @0x6f52290*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb99c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f52300
        push 0
        call dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f522bb
        mov esi, edi
        jmp public_6f522c7
        public_6f522bb : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov esi, eax
        public_6f522c7 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[ebp+0x1C]
        push 1
        push eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], esi
        call public_6f96770
        mov eax, dword ptr ss : [ebp+0x18]
        sub esi, edi
        inc esi
        pop edi
        add eax, esi
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f52300 : nop
        push offset public_6fbb988 @0x6f52300*/
  FIXUP public_6f52300 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb988
        call edi
        test al, al
        mov ecx, esi
        je public_6f5236e
        push 0
        call dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f52329
        mov esi, edi
        jmp public_6f52335
        public_6f52329 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov esi, eax
        public_6f52335 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[ebp+8]
        push 1
        push eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], esi
        call public_6f96770
        mov eax, dword ptr ss : [ebp+4]
        sub esi, edi
        inc esi
        pop edi
        add eax, esi
        pop esi
        mov dword ptr ss : [ebp+4], eax
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f5236e : nop
        push offset public_6fbb97c @0x6f5236e*/
  FIXUP public_6f5236e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb97c
        call edi
        test al, al
        mov ecx, esi
        je public_6f523dc
        push 0
        call dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f52397
        mov esi, edi
        jmp public_6f523a3
        public_6f52397 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov esi, eax
        public_6f523a3 : nop
        mov eax, dword ptr ss : [ebp+0x38]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[ebp+0x30]
        push 1
        push eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], esi
        call public_6f96770
        mov eax, dword ptr ss : [ebp+0x2C]
        sub esi, edi
        inc esi
        pop edi
        add eax, esi
        pop esi
        mov dword ptr ss : [ebp+0x2C], eax
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f523dc : nop
        push offset public_6fbb96c @0x6f523dc*/
  FIXUP public_6f523dc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb96c
        call edi
        test al, al
        mov ecx, esi
        je public_6f5244a
        push 0
        call dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f52405
        mov esi, edi
        jmp public_6f52411
        public_6f52405 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov esi, eax
        public_6f52411 : nop
        mov eax, dword ptr ss : [ebp+0x4C]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[ebp+0x44]
        push 1
        push eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], esi
        call public_6f96770
        mov eax, dword ptr ss : [ebp+0x40]
        sub esi, edi
        inc esi
        pop edi
        add eax, esi
        pop esi
        mov dword ptr ss : [ebp+0x40], eax
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f5244a : nop
        push offset public_6fbb958 @0x6f5244a*/
  FIXUP public_6f5244a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb958
        call edi
        test al, al
        mov ecx, esi
        je public_6f5262a
        mov edi, dword ptr ds : [public_6fb3020]
        push 0
        call edi
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f52481
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], ebx
        jmp public_6f5248d
        public_6f52481 : nop
        push 1
        mov ecx, esi
        call edi
        mov dword ptr ss : [esp+0x2C], eax
        mov ebx, eax
        public_6f5248d : nop
        mov eax, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ss : [ebp+0x64]
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ss:[ebp+0x58]
        sub edx, eax
        sar edx, 3
        cmp edx, 1
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ebx
        mov edi, eax
        jae public_6f5255c
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f524c5
        sub eax, ecx
        sar eax, 3
        cmp eax, 1
        mov ebx, eax
        ja public_6f524ca
        public_6f524c5 : nop
        mov ebx, 1
        public_6f524ca : nop
        mov ecx, esi
        call public_6eae300
        add eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jns public_6f524db
        xor eax, eax
        public_6f524db : nop
        shl eax, 3
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        call public_6ed2700
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6ed2730
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        add eax, 8
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6ed2700
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[ebx+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eae300
        lea ecx, ds:[ebx+eax*8+8]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f52608
        public_6f5255c : nop
        mov edx, eax
        sub edx, edi
        sar edx, 3
        cmp edx, 1
        jae public_6f525b6
        lea ecx, ds:[edi+8]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6ed2700
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x20]
        push edx
        sub ecx, edi
        sar ecx, 3
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed2730
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f52604
        nop 
        lea esp, ss:[esp]
        public_6f525a0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+4], edx
        add edi, 8
        cmp edi, eax
        jne public_6f525a0
        jmp public_6f52604
        public_6f525b6 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        mov ecx, esi
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6f525e5
        lea ecx, ds:[ecx]
        public_6f525d0 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6f525d0
        public_6f525e5 : nop
        lea eax, ds:[edi+8]
        cmp edi, eax
        je public_6f52604
        lea esp, ss:[esp]
        public_6f525f0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+4], edx
        add edi, 8
        cmp edi, eax
        jne public_6f525f0
        public_6f52604 : nop
        add dword ptr ds : [esi+8], 8
        public_6f52608 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x54]
        sub ebx, edx
        inc ebx
        pop edi
        add eax, ebx
        pop esi
        mov dword ptr ss : [ebp+0x54], eax
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f5262a : nop
        push offset public_6fbb944 @0x6f5262a*/
  FIXUP public_6f5262a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb944
        call edi
        test al, al
        mov ecx, esi
        je public_6f52650
        push 0
        call dword ptr ds : [public_6fb3020]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x68], eax
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f52650 : nop
        push offset public_6fbb938 @0x6f52650*/
  FIXUP public_6f52650 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb938
        call edi
        test al, al
        je public_6f52692
        xor edi, edi
        lea ebx, ss:[ebp+0x70]
        public_6f52660 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx], eax
        inc edi
        add ebx, 4
        cmp edi, 3
        jl public_6f52660
        mov edi, dword ptr ds : [public_6fb3020]
        push 3
        mov ecx, esi
        call edi
        push 4
        mov ecx, esi
        mov dword ptr ss : [ebp+0x9C], eax
        call edi
        mov dword ptr ss : [ebp+0xA0], eax
        public_6f52692 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f52230)
    }
}

#undef public_6f52281
#undef public_6f522bb
#undef public_6f522c7
#undef public_6f52300
#undef public_6f52329
#undef public_6f52335
#undef public_6f5236e
#undef public_6f52397
#undef public_6f523a3
#undef public_6f523dc
#undef public_6f52405
#undef public_6f52411
#undef public_6f5244a
#undef public_6f52481
#undef public_6f5248d
#undef public_6f524c5
#undef public_6f524ca
#undef public_6f524db
#undef public_6f5255c
#undef public_6f525a0
#undef public_6f525b6
#undef public_6f525d0
#undef public_6f525e5
#undef public_6f525f0
#undef public_6f52604
#undef public_6f52608
#undef public_6f5262a
#undef public_6f52650
#undef public_6f52660
#undef public_6f52692
