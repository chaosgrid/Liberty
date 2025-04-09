#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42aef0);
CLANG_FORWARD_PROC_SYMBOL(public_42b030);
CLANG_FORWARD_PROC_SYMBOL(public_42b7b0);
CLANG_FORWARD_PROC_SYMBOL(public_42b940);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8caa);

#define public_42b0a8 _public_42b0a8
#define public_42b0f0 _public_42b0f0
#define public_42b119 _public_42b119
#define public_42b127 _public_42b127
#define public_42b135 _public_42b135
#define public_42b17f _public_42b17f
#define public_42b1a7 _public_42b1a7
#define public_42b1be _public_42b1be
#define public_42b1c2 _public_42b1c2
#define public_42b1f5 _public_42b1f5
#define public_42b235 _public_42b235
#define public_42b271 _public_42b271
#define public_42b28b _public_42b28b
#define public_42b29b _public_42b29b
#define public_42b2ad _public_42b2ad
#define public_42b32e _public_42b32e
#define public_42b33f _public_42b33f
#define public_42b350 _public_42b350
#define public_42b375 _public_42b375
#define public_42b39a _public_42b39a
#define public_42b3a3 _public_42b3a3
#define public_42b3df _public_42b3df
#define public_42b41a _public_42b41a
#define public_42b41e _public_42b41e
#define public_42b44a _public_42b44a
#define public_42b459 _public_42b459
#define public_42b464 _public_42b464
#define public_42b47c _public_42b47c
#define public_42b49f _public_42b49f
#define public_42b4a8 _public_42b4a8

PROC_DECLARE(0x42b030, internal_42b030, public_42b030);
extern "C" NAKED register_t __cdecl internal_42b030()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5b8caa @0x42b038*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8caa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15A0
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ds : [public_667cd0]
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c605c]
        mov ecx, dword ptr ss : [esp+0x15C0]
        xor esi, esi
        push esi
        push ecx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x15C0], esi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_42b2ad
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_42b2ad
        mov edi, dword ptr ds : [public_5c6698]
        mov ebp, dword ptr ds : [public_5c6038]
/*FIXUP public_42b0a8 : nop
        push offset public_5ca570 @0x42b0a8*/
  FIXUP public_42b0a8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca570
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_42b29b
        lea ecx, ss:[esp+0x1C]
        call public_42b7b0
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x15B8], 1
        mov dword ptr ss : [esp+0x30], 0xBF800000
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_42b135
        mov edi, edi
/*FIXUP public_42b0f0 : nop
        push offset public_5c866c @0x42b0f0*/
  FIXUP public_42b0f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_42b119
        lea ecx, ss:[esp+0x48]
        call edi
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        jmp public_42b127
        public_42b119 : nop
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_42b940
        public_42b127 : nop
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_42b0f0
        public_42b135 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6040]
        test al, al
        je public_42b17f
/*FIXUP push offset public_5ca558 @0x42b143*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca558
        lea ecx, ss:[esp+0x4C]
        call ebp
        mov ecx, dword ptr ss : [esp+0x15C0]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push 0x1BB
/*FIXUP push offset public_5ca3dc @0x42b160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
        mov eax, 0x100001
/*FIXUP push offset public_5ca508 @0x42b16a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca508
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_42b28b
        public_42b17f : nop
        movsx ecx, byte ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x18], ecx
        fild dword ptr ss : [esp+0x18]
        fld st(0)
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_42b1a7
        fstp st(0)
        mov dword ptr ss : [esp+0x10], 0
        jmp public_42b1c2
        public_42b1a7 : nop
        fcomp dword ptr ds : [public_5ca16c]
        fnstsw ax
        test ah, 5
        jp public_42b1be
        mov dword ptr ss : [esp+0x10], 0xC2C00000
        jmp public_42b1c2
        public_42b1be : nop
        fst dword ptr ss : [esp+0x10]
        public_42b1c2 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x44
        jnp public_42b1f5
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push 0x1C9
/*FIXUP push offset public_5ca3dc @0x42b1db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
        mov eax, 0x100002
/*FIXUP push offset public_5ca4b8 @0x42b1e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca4b8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_42b1f5 : nop
        fld dword ptr ss : [esp+0x10]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x34]
        xor ecx, eax
        and ecx, 0xFF
        xor eax, ecx
        mov dword ptr ss : [esp+0x34], eax
        fnstsw ax
        test ah, 5
        jp public_42b235
        mov dword ptr ss : [esp+0x30], 0xBF800000
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        jmp public_42b271
        public_42b235 : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 1
        jne public_42b271
        lea ecx, ss:[esp+0x20]
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x1D5
/*FIXUP push offset public_5ca3dc @0x42b25f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
/*FIXUP push offset public_5ca478 @0x42b264*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca478
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        xor esi, esi
        public_42b271 : nop
        mov eax, dword ptr ss : [esp+0x15C4]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_42aef0
        add esp, 0xC
        public_42b28b : nop
        mov byte ptr ss : [esp+0x15B8], 0
        mov dword ptr ss : [esp+0x1C], offset public_5ca36c
        public_42b29b : nop
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_42b0a8
        public_42b2ad : nop
        mov eax, dword ptr ds : [public_667cd0]
        sub eax, dword ptr ss : [esp+0x14]
        mov edi, eax
        mov dword ptr ss : [esp+0x10], edi
        lea eax, ss:[esp+0x1470]
        mov dword ptr ss : [esp+0x15B8], 2
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push esi
        lea ecx, ss:[esp+0x1478]
        mov byte ptr ss : [esp+0x15C0], 3
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x1480]
        mov ebp, dword ptr ds : [public_5c6ef8]
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_42b350
        cmp dword ptr ss : [esp+0x1484], esi
        je public_42b33f
        mov eax, dword ptr ss : [esp+0x1488]
        cmp eax, esi
        je public_42b32e
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1488], esi
        mov dword ptr ss : [esp+0x148C], esi
        public_42b32e : nop
        mov eax, dword ptr ss : [esp+0x1484]
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1484], esi
        public_42b33f : nop
        mov ecx, dword ptr ss : [esp+0x1480]
        push ecx
        call ebp
        mov dword ptr ss : [esp+0x1480], ebx
        public_42b350 : nop
        mov eax, dword ptr ss : [esp+0x1488]
        cmp eax, esi
        mov ebx, dword ptr ds : [public_5c71d8]
        je public_42b375
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x1488], esi
        mov dword ptr ss : [esp+0x148C], esi
        public_42b375 : nop
        mov eax, dword ptr ss : [esp+0x1474]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1490], esi
        je public_42b3a3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_42b39a
        cmp cl, 0xFF
        je public_42b39a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_42b3a3
        public_42b39a : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_42b3a3 : nop
        mov dword ptr ss : [esp+0x1474], esi
        mov dword ptr ss : [esp+0x1478], esi
        mov dword ptr ss : [esp+0x147C], esi
        mov edx, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x15B8], 4
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, esi
        jae public_42b3df
        mov esi, eax
        public_42b3df : nop
        test esi, esi
        jbe public_42b41e
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        call dword ptr ds : [public_5c709c]
        mov edi, dword ptr ss : [esp+0x5C]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_42b41a
        push edi
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c706c]
        public_42b41a : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_42b41e : nop
        mov eax, dword ptr ss : [esp+0x58]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_42b464
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        je public_42b459
        mov eax, dword ptr ss : [esp+0x60]
        test eax, eax
        je public_42b44a
        push eax
        call dword ptr ds : [public_5c6efc]
        xor eax, eax
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], eax
        public_42b44a : nop
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        call ebp
        mov dword ptr ss : [esp+0x5C], 0
        public_42b459 : nop
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        call ebp
        mov dword ptr ss : [esp+0x58], esi
        public_42b464 : nop
        mov eax, dword ptr ss : [esp+0x60]
        test eax, eax
        je public_42b47c
        push eax
        call ebx
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], eax
        public_42b47c : nop
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        mov dword ptr ss : [esp+0x68], 0
        je public_42b4a8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_42b49f
        cmp cl, 0xFF
        je public_42b49f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_42b4a8
        public_42b49f : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_42b4a8 : nop
        mov ecx, dword ptr ss : [esp+0x15B0]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15AC
        ret 
        UNREACHABLE_TRAP(0x42b030)
    }
}

#undef public_42b0a8
#undef public_42b0f0
#undef public_42b119
#undef public_42b127
#undef public_42b135
#undef public_42b17f
#undef public_42b1a7
#undef public_42b1be
#undef public_42b1c2
#undef public_42b1f5
#undef public_42b235
#undef public_42b271
#undef public_42b28b
#undef public_42b29b
#undef public_42b2ad
#undef public_42b32e
#undef public_42b33f
#undef public_42b350
#undef public_42b375
#undef public_42b39a
#undef public_42b3a3
#undef public_42b3df
#undef public_42b41a
#undef public_42b41e
#undef public_42b44a
#undef public_42b459
#undef public_42b464
#undef public_42b47c
#undef public_42b49f
#undef public_42b4a8
