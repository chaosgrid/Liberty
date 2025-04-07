#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_638b250);
CLANG_FORWARD_PROC_SYMBOL(public_638b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_638b421 _public_638b421
#define public_638b43c _public_638b43c
#define public_638b445 _public_638b445
#define public_638b464 _public_638b464
#define public_638b468 _public_638b468
#define public_638b484 _public_638b484
#define public_638b498 _public_638b498
#define public_638b4ad _public_638b4ad
#define public_638b4b6 _public_638b4b6
#define public_638b4bd _public_638b4bd
#define public_638b4ce _public_638b4ce
#define public_638b4e3 _public_638b4e3
#define public_638b4f6 _public_638b4f6
#define public_638b50b _public_638b50b
#define public_638b514 _public_638b514
#define public_638b51d _public_638b51d
#define public_638b54d _public_638b54d
#define public_638b552 _public_638b552
#define public_638b55d _public_638b55d
#define public_638b561 _public_638b561
#define public_638b591 _public_638b591
#define public_638b5ac _public_638b5ac
#define public_638b5cb _public_638b5cb
#define public_638b5e7 _public_638b5e7
#define public_638b5f3 _public_638b5f3
#define public_638b601 _public_638b601
#define public_638b619 _public_638b619

PROC_DECLARE(0x638b3c0, internal_638b3c0, public_638b3c0);
extern "C" NAKED register_t __cdecl internal_638b3c0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_658b8fc]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        call public_636ec10
        mov esi, eax
        add esi, dword ptr ds : [public_658b254]
        push esi
        mov dword ptr ss : [esp+0x1C], 0
        call public_636ec70
        push esi
        push 0
        push eax
        mov dword ptr ss : [esp+0x24], eax
        call public_636eed0
        mov ecx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x38]
        push ecx
        push ebp
        push ebx
        call public_6386380
        add esp, 0x20
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_638b445
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638b445
        public_638b421 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_6370570
        add esp, 4
        test eax, eax
        jl public_638b43c
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+eax*4+4], ecx
        public_638b43c : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638b421
        public_638b445 : nop
        mov eax, dword ptr ds : [public_658b084]
        test eax, eax
        jne public_638b464
        mov eax, dword ptr ds : [public_658b080]
        test eax, eax
        jne public_638b464
        mov eax, dword ptr ds : [public_658b248]
        test eax, eax
        je public_638b51d
        public_638b464 : nop
        test ebx, ebx
        je public_638b4bd
        public_638b468 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        je public_638b4bd
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        jne public_638b484
        push ebx
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_638b4b6
        public_638b484 : nop
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        je public_638b4b6
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638b4b6
        public_638b498 : nop
        push esi
        call public_6370570
        add esp, 4
        test eax, eax
        jl public_638b4ad
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+eax*4+4], esi
        public_638b4ad : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638b498
        public_638b4b6 : nop
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        jne public_638b468
        public_638b4bd : nop
        test ebp, ebp
        je public_638b51d
        mov esi, dword ptr ss : [ebp+4]
        lea ebx, ss:[ebp+4]
        add ebx, 4
        test esi, esi
        je public_638b51d
        public_638b4ce : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        jne public_638b4e3
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_638b514
        public_638b4e3 : nop
        mov esi, dword ptr ds : [esi+0x44]
        test esi, esi
        je public_638b514
        lea edi, ds:[esi+4]
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        je public_638b514
        public_638b4f6 : nop
        push esi
        call public_6370570
        add esp, 4
        test eax, eax
        jl public_638b50b
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+eax*4+4], esi
        public_638b50b : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638b4f6
        public_638b514 : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_638b4ce
        public_638b51d : nop
        lea eax, ss:[esp+0x18]
        push eax
        call public_636ecc0
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        je public_638b55d
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_638b55d
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add ecx, 4
        public_638b54d : nop
        test esi, esi
        je public_638b552
        inc edx
        public_638b552 : nop
        mov esi, dword ptr ds : [ecx+4]
        add ecx, 4
        dec eax
        jne public_638b54d
        jmp public_638b561
        public_638b55d : nop
        mov edx, dword ptr ss : [esp+0x14]
        public_638b561 : nop
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        je public_638b591
        mov eax, dword ptr ds : [public_658b24c]
        mov ebx, dword ptr ss : [esp+0x20]
        inc eax
        push eax
        push edx
/*FIXUP push offset public_658b268 @0x638b576*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
/*FIXUP push offset public_658b368 @0x638b57b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b368
/*FIXUP push offset public_63f7d0c @0x638b580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7d0c
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        jmp public_638b5ac
        public_638b591 : nop
        mov ecx, dword ptr ds : [public_658b24c]
        mov ebx, dword ptr ss : [esp+0x20]
        push edx
        push ecx
/*FIXUP push offset public_63f7d38 @0x638b59d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7d38
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638b5ac : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_638b601
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_638b601
        mov edi, 4
        mov ebp, eax
        public_638b5cb : nop
        test esi, esi
        je public_638b5f3
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        je public_638b5e7
/*FIXUP push offset public_63f7c34 @0x638b5d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7c34
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638b5e7 : nop
        push esi
        push 0
        push ebx
        call public_638b250
        add esp, 0xC
        public_638b5f3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+edx+4]
        add edi, 4
        dec ebp
        jne public_638b5cb
        public_638b601 : nop
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        je public_638b619
/*FIXUP push offset public_63f812c @0x638b60a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f812c
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638b619 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_636ecc0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x638b3c0)
    }
}

#undef public_638b421
#undef public_638b43c
#undef public_638b445
#undef public_638b464
#undef public_638b468
#undef public_638b484
#undef public_638b498
#undef public_638b4ad
#undef public_638b4b6
#undef public_638b4bd
#undef public_638b4ce
#undef public_638b4e3
#undef public_638b4f6
#undef public_638b50b
#undef public_638b514
#undef public_638b51d
#undef public_638b54d
#undef public_638b552
#undef public_638b55d
#undef public_638b561
#undef public_638b591
#undef public_638b5ac
#undef public_638b5cb
#undef public_638b5e7
#undef public_638b5f3
#undef public_638b601
#undef public_638b619
