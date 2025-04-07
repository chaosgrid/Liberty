#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f503d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f503f0 _public_6f503f0
#define public_6f50425 _public_6f50425
#define public_6f5047d _public_6f5047d
#define public_6f5048a _public_6f5048a
#define public_6f504e5 _public_6f504e5
#define public_6f504ea _public_6f504ea
#define public_6f504f2 _public_6f504f2
#define public_6f504f7 _public_6f504f7
#define public_6f50503 _public_6f50503
#define public_6f5057d _public_6f5057d
#define public_6f50595 _public_6f50595
#define public_6f505d4 _public_6f505d4
#define public_6f505e3 _public_6f505e3
#define public_6f505f8 _public_6f505f8
#define public_6f50607 _public_6f50607
#define public_6f50610 _public_6f50610
#define public_6f5061d _public_6f5061d
#define public_6f50623 _public_6f50623
#define public_6f50626 _public_6f50626
#define public_6f50636 _public_6f50636
#define public_6f50649 _public_6f50649

PROC_DECLARE(0x6f503d0, internal_6f503d0, public_6f503d0);
extern "C" NAKED register_t __cdecl internal_6f503d0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f50649
        push ebp
        push esi
        push edi
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f503f0 : nop
        push offset public_6fbb88c @0x6f503f0*/
  FIXUP public_6f503f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb88c
        mov ecx, ebx
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f50636
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f50636
        public_6f50425 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb44fc @0x6f5042b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        mov ecx, ebx
        call esi
        test al, al
        mov ecx, ebx
        je public_6f5048a
        push 0
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_6fd0cb8
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_6fd0cbc]
        je public_6f5047d
        add eax, 0x10
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f50626
        public_6f5047d : nop
        mov dword ptr ss : [esp+0x14], 0
        jmp public_6f50626
/*FIXUP public_6f5048a : nop
        push offset public_6fbb880 @0x6f5048a*/
  FIXUP public_6f5048a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb880
        call esi
        test al, al
        je public_6f50626
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6fb3694]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0x7C]
        mov edx, dword ptr ds : [ecx+0x80]
        lea esi, ds:[ecx+0x74]
        sub edx, eax
        sar edx, 2
        add esp, 8
        cmp edx, 1
        mov edi, eax
        jae public_6f50595
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f504e5
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f504ea
        public_6f504e5 : nop
        mov ecx, 1
        public_6f504ea : nop
        test edx, edx
        jne public_6f504f2
        xor eax, eax
        jmp public_6f504f7
        public_6f504f2 : nop
        sub eax, edx
        sar eax, 2
        public_6f504f7 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6f50503
        xor eax, eax
        public_6f50503 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        call public_6eed270
        lea edx, ss:[esp+0x10]
        push edx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        lea edx, ds:[ebx+ecx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6f5057d
        xor ecx, ecx
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x28]
        jmp public_6f50623
        public_6f5057d : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[ebx+ecx*4+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x28]
        jmp public_6f50623
        public_6f50595 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f505e3
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f5061d
        public_6f505d4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6f505d4
        jmp public_6f5061d
        public_6f505e3 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f50607
        public_6f505f8 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f505f8
        public_6f50607 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6f5061d
        mov edi, edi
        public_6f50610 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6f50610
        public_6f5061d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6f50623 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f50626 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f50425
        public_6f50636 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f503f0
        pop edi
        pop esi
        pop ebp
        public_6f50649 : nop
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f503d0)
    }
}

#undef public_6f503f0
#undef public_6f50425
#undef public_6f5047d
#undef public_6f5048a
#undef public_6f504e5
#undef public_6f504ea
#undef public_6f504f2
#undef public_6f504f7
#undef public_6f50503
#undef public_6f5057d
#undef public_6f50595
#undef public_6f505d4
#undef public_6f505e3
#undef public_6f505f8
#undef public_6f50607
#undef public_6f50610
#undef public_6f5061d
#undef public_6f50623
#undef public_6f50626
#undef public_6f50636
#undef public_6f50649
