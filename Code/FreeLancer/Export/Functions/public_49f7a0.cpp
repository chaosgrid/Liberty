#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_48dc10);
CLANG_FORWARD_PROC_SYMBOL(public_49f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);

#define public_49f7db _public_49f7db
#define public_49f809 _public_49f809
#define public_49f814 _public_49f814
#define public_49f822 _public_49f822
#define public_49f842 _public_49f842
#define public_49f846 _public_49f846
#define public_49f928 _public_49f928
#define public_49f94c _public_49f94c
#define public_49f9b9 _public_49f9b9
#define public_49f9c7 _public_49f9c7
#define public_49f9f9 _public_49f9f9
#define public_49fa25 _public_49fa25
#define public_49fa4b _public_49fa4b
#define public_49fa69 _public_49fa69
#define public_49fabd _public_49fabd
#define public_49fadc _public_49fadc
#define public_49fb3a _public_49fb3a
#define public_49fb54 _public_49fb54
#define public_49fb62 _public_49fb62
#define public_49fb89 _public_49fb89
#define public_49fb96 _public_49fb96
#define public_49fbc6 _public_49fbc6
#define public_49fbd2 _public_49fbd2
#define public_49fbe4 _public_49fbe4

PROC_DECLARE(0x49f7a0, internal_49f7a0, public_49f7a0);
extern "C" NAKED register_t __cdecl internal_49f7a0()
{
    __asm
    {
        sub esp, 0x410
        push ebx
        mov ebx, ecx
        push ebp
        mov byte ptr ds : [public_6720c9], 0
        mov al, byte ptr ds : [ebx+0xBCC]
        test al, al
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        jne public_49f9f9
        call public_4c4690
        mov edi, eax
        lea esi, ds:[edi-3]
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], edi
        jge public_49f7db
        xor esi, esi
        public_49f7db : nop
        mov ecx, dword ptr ds : [ebx+0xAE0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[edi-1]
        push edx
        push ebp
        push 0x37
        call dword ptr ds : [eax+0xA8]
        cmp esi, ebp
        mov ecx, dword ptr ds : [ebx+0xAE0]
        push ebp
        jne public_49f809
        mov eax, dword ptr ds : [ecx]
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        jmp public_49f814
        public_49f809 : nop
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 2
        call dword ptr ds : [edx+0xA8]
        public_49f814 : nop
        cmp dword ptr ds : [ebx+0xAF4], edi
        jl public_49f822
        mov dword ptr ds : [ebx+0xAF4], ebp
        public_49f822 : nop
        mov eax, dword ptr ds : [ebx+0xAF4]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        jge public_49f9b9
        lea esi, ds:[ebx+0xAE4]
        mov ebx, dword ptr ds : [public_5c70ec]
        jmp public_49f846
        public_49f842 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_49f846 : nop
        push eax
        mov word ptr ds : [public_66fc60], 0
        call public_4c46a0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_49f94c
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x49f86e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x54B
        push ecx
        call public_4347e0
        mov edx, dword ptr ds : [edi+0x14]
        push edx
/*FIXUP push offset public_66dc60 @0x49f882*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x49f887*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        push 0x100
        lea eax, ss:[esp+0x240]
        push eax
        push edi
        call public_48dc10
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call dword ptr ds : [public_5c6094]
        mov edi, eax
        add esp, 0x2C
        test edi, edi
        je public_49f928
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66dc60 @0x49f8c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x54C
        push eax
        call public_4347e0
/*FIXUP push offset public_5d0254 @0x49f8d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x49f8d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        mov edx, dword ptr ds : [edi]
        add esp, 0x18
        push 0x100
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x10
        lea ecx, ss:[esp+0x20]
        push ecx
/*FIXUP push offset public_66dc60 @0x49f908*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x49f90d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        lea edx, ds : [eax*2+public_66fc60]
        add esp, 4
        push edx
        call ebx
        add esp, 0xC
        public_49f928 : nop
        mov edi, dword ptr ds : [public_5c70ac]
/*FIXUP push offset public_5d0254 @0x49f92e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x49f933*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        lea eax, ss:[esp+0x228]
        push eax
/*FIXUP push offset public_66fc60 @0x49f942*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x10
        public_49f94c : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x49f952*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 1
/*FIXUP push offset public_679bb0 @0x49f965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb0
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x10]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        inc ebp
        add esi, 4
        call dword ptr ds : [eax+0xA8]
        cmp ebp, 3
        jge public_49fbe4
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_49f842
        mov ebx, dword ptr ss : [esp+0x14]
        public_49f9b9 : nop
        mov edi, 3
        lea esi, ds:[ebx+ebp*4+0xAE4]
        sub edi, ebp
        public_49f9c7 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x10]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        add esi, 4
        call dword ptr ds : [eax+0xA8]
        dec edi
        jne public_49f9c7
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x410
        ret 
        public_49f9f9 : nop
        call public_4c4fb0
        xor ebp, ebp
        lea eax, ds:[eax+eax*4]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x1C], eax
        jle public_49fb54
        lea esi, ds:[ebx+0xAE4]
        public_49fa25 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_4c4ff0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_49fb3a
        mov eax, dword ptr ds : [edi+0x18]
        and eax, 0xF
        cmp eax, 9
        je public_49fa4b
        inc dword ptr ss : [esp+0x18]
        public_49fa4b : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [ebx+0xAF4]
        jge public_49fa69
        cmp eax, 0xA
        jne public_49fb3a
        inc dword ptr ss : [esp+0x14]
        jmp public_49fb3a
        public_49fa69 : nop
        cmp eax, 9
        je public_49fb3a
        cmp ebp, 3
        jge public_49fb3a
        cmp eax, 0xA
        jne public_49fabd
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x49fa8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x4DF
        push ecx
        call public_4347e0
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, ecx
        push eax
        inc ecx
/*FIXUP push offset public_66dc60 @0x49faa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x49faa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov dword ptr ss : [esp+0x30], ecx
        call dword ptr ds : [public_5c70ec]
        add esp, 0x1C
        jmp public_49fadc
        public_49fabd : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66fc60 @0x49fac9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x331C
        push eax
        call public_4347e0
        add esp, 0x10
        public_49fadc : nop
        mov ecx, dword ptr ds : [public_6119f8]
        push ecx
/*FIXUP push offset public_66dc60 @0x49fae3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        mov ecx, edi
        call public_41c970
/*FIXUP push offset public_66dc60 @0x49faef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x49faf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        push 0
/*FIXUP push offset public_66fc60 @0x49fb08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        inc ebp
        add esi, 4
        call dword ptr ds : [edx+0xA8]
        public_49fb3a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_49fa25
        cmp ebp, 3
        jge public_49fb89
        public_49fb54 : nop
        mov edi, 3
        lea esi, ds:[ebx+ebp*4+0xAE4]
        sub edi, ebp
        public_49fb62 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        add esi, 4
        call dword ptr ds : [edx+0xA8]
        dec edi
        jne public_49fb62
        public_49fb89 : nop
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi-3]
        test esi, esi
        jge public_49fb96
        xor esi, esi
        public_49fb96 : nop
        mov ecx, dword ptr ds : [ebx+0xAE0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[edi-1]
        push edx
        push 0
        push 0x37
        call dword ptr ds : [eax+0xA8]
        test esi, esi
        mov ecx, dword ptr ds : [ebx+0xAE0]
        push 0
        jne public_49fbc6
        mov eax, dword ptr ds : [ecx]
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        jmp public_49fbd2
        public_49fbc6 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        public_49fbd2 : nop
        cmp dword ptr ds : [ebx+0xAF4], edi
        jl public_49fbe4
        mov dword ptr ds : [ebx+0xAF4], 0
        public_49fbe4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x410
        ret 
        UNREACHABLE_TRAP(0x49f7a0)
    }
}

#undef public_49f7db
#undef public_49f809
#undef public_49f814
#undef public_49f822
#undef public_49f842
#undef public_49f846
#undef public_49f928
#undef public_49f94c
#undef public_49f9b9
#undef public_49f9c7
#undef public_49f9f9
#undef public_49fa25
#undef public_49fa4b
#undef public_49fa69
#undef public_49fabd
#undef public_49fadc
#undef public_49fb3a
#undef public_49fb54
#undef public_49fb62
#undef public_49fb89
#undef public_49fb96
#undef public_49fbc6
#undef public_49fbd2
#undef public_49fbe4
