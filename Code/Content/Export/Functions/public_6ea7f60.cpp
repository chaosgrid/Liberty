#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7f60);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eae680);
CLANG_FORWARD_PROC_SYMBOL(public_6eae970);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed4010);
CLANG_FORWARD_PROC_SYMBOL(public_6ed41c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f32950);
CLANG_FORWARD_PROC_SYMBOL(public_6f32b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ea7f80 _public_6ea7f80
#define public_6ea7fd9 _public_6ea7fd9
#define public_6ea7fed _public_6ea7fed
#define public_6ea800e _public_6ea800e
#define public_6ea8010 _public_6ea8010
#define public_6ea8038 _public_6ea8038
#define public_6ea803e _public_6ea803e
#define public_6ea8047 _public_6ea8047
#define public_6ea8049 _public_6ea8049
#define public_6ea806a _public_6ea806a
#define public_6ea806c _public_6ea806c
#define public_6ea8094 _public_6ea8094
#define public_6ea809a _public_6ea809a
#define public_6ea80a4 _public_6ea80a4
#define public_6ea80a6 _public_6ea80a6
#define public_6ea80be _public_6ea80be
#define public_6ea80f3 _public_6ea80f3
#define public_6ea812a _public_6ea812a
#define public_6ea81b2 _public_6ea81b2
#define public_6ea81b7 _public_6ea81b7
#define public_6ea81c8 _public_6ea81c8
#define public_6ea8254 _public_6ea8254
#define public_6ea8295 _public_6ea8295
#define public_6ea82a2 _public_6ea82a2
#define public_6ea82a8 _public_6ea82a8
#define public_6ea82c0 _public_6ea82c0
#define public_6ea82cf _public_6ea82cf
#define public_6ea82d6 _public_6ea82d6
#define public_6ea82e3 _public_6ea82e3
#define public_6ea82e9 _public_6ea82e9
#define public_6ea8317 _public_6ea8317
#define public_6ea832b _public_6ea832b
#define public_6ea8332 _public_6ea8332
#define public_6ea8359 _public_6ea8359

PROC_DECLARE(0x6ea7f60, internal_6ea7f60, public_6ea7f60);
extern "C" NAKED register_t __cdecl internal_6ea7f60()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        mov ebx, dword ptr ss : [esp+0x84]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ea832b
        push esi
        push edi
        mov edi, edi
        public_6ea7f80 : nop
        mov eax, dword ptr ss : [esp+0x88]
        mov ebp, dword ptr ss : [esp+0x8C]
        push eax
        push ebx
        mov ecx, ebp
        call public_6f32950
        test al, al
        jne public_6ea8317
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb4430 @0x6ea7fa5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4430
        mov ecx, ebx
        call esi
        test al, al
        mov ecx, ebx
        je public_6ea80be
        xor esi, esi
        push esi
        mov dword ptr ss : [esp+0x40], esi
        mov byte ptr ss : [esp+0x44], 0
        call dword ptr ds : [public_6fb3048]
        cmp eax, esi
        jne public_6ea7fd9
        mov dword ptr ss : [esp+0x3C], esi
        mov byte ptr ss : [esp+0x40], 0
        jmp public_6ea7fed
        public_6ea7fd9 : nop
        push eax
        lea ecx, ss:[esp+0x44]
        push 0x18
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x3C], eax
        public_6ea7fed : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fld dword ptr ds : [public_6fb43d0]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6ea800e
        fld dword ptr ds : [public_6fb43d0]
        jmp public_6ea8010
        public_6ea800e : nop
        fld st(0)
        public_6ea8010 : nop
        fcomp dword ptr ds : [public_6fb43d4]
        fnstsw ax
        test ah, 5
        jp public_6ea803e
        fld dword ptr ds : [public_6fb43d0]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6ea8038
        mov edx, dword ptr ds : [public_6fb43d0]
        mov dword ptr ss : [esp+0x34], edx
        jmp public_6ea8047
        public_6ea8038 : nop
        fstp dword ptr ss : [esp+0x34]
        jmp public_6ea8049
        public_6ea803e : nop
        mov eax, dword ptr ds : [public_6fb43d4]
        mov dword ptr ss : [esp+0x34], eax
        public_6ea8047 : nop
        fstp st(0)
        public_6ea8049 : nop
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fld dword ptr ds : [public_6fb43d0]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6ea806a
        fld dword ptr ds : [public_6fb43d0]
        jmp public_6ea806c
        public_6ea806a : nop
        fld st(0)
        public_6ea806c : nop
        fcomp dword ptr ds : [public_6fb43d4]
        fnstsw ax
        test ah, 5
        jp public_6ea809a
        fld dword ptr ds : [public_6fb43d0]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6ea8094
        mov ecx, dword ptr ds : [public_6fb43d0]
        mov dword ptr ss : [esp+0x38], ecx
        jmp public_6ea80a4
        public_6ea8094 : nop
        fstp dword ptr ss : [esp+0x38]
        jmp public_6ea80a6
        public_6ea809a : nop
        mov edx, dword ptr ds : [public_6fb43d4]
        mov dword ptr ss : [esp+0x38], edx
        public_6ea80a4 : nop
        fstp st(0)
        public_6ea80a6 : nop
        mov edx, dword ptr ss : [ebp+0x4C]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[ebp+0x44]
        push 1
        push edx
        call public_6eae680
        jmp public_6ea8317
/*FIXUP public_6ea80be : nop
        push offset public_6fb4428 @0x6ea80be*/
  FIXUP public_6ea80be : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4428
        call esi
        test al, al
        je public_6ea80f3
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_6ed41c0
        test al, al
        je public_6ea8317
        mov edx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[ebp+0x54]
        push 1
        push edx
        call public_6f6f3e0
        jmp public_6ea8317
/*FIXUP public_6ea80f3 : nop
        push offset public_6fb4420 @0x6ea80f3*/
  FIXUP public_6ea80f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4420
        mov ecx, ebx
        call esi
        test al, al
        je public_6ea812a
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_6ed3fd0
        test al, al
        je public_6ea8317
        mov edx, dword ptr ss : [ebp+0x6C]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[ebp+0x64]
        push 1
        push edx
        call public_6f69d50
        jmp public_6ea8317
/*FIXUP public_6ea812a : nop
        push offset public_6fb4418 @0x6ea812a*/
  FIXUP public_6ea812a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4418
        mov ecx, ebx
        call esi
        test al, al
        jne public_6ea82e9
/*FIXUP push offset public_6fb440c @0x6ea813b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb440c
        mov ecx, ebx
        call esi
        test al, al
        jne public_6ea82e9
/*FIXUP push offset public_6fb4404 @0x6ea814c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4404
        mov ecx, ebx
        call esi
        test al, al
        je public_6ea8317
        mov ecx, ebx
        call dword ptr ds : [public_6fb3054]
        push eax
        mov eax, dword ptr ss : [esp+0x98]
        push eax
        call dword ptr ds : [public_6fb35f0]
        mov edi, dword ptr ss : [ebp+0x8C]
        mov ecx, dword ptr ss : [ebp+0x90]
        lea esi, ss:[ebp+0x84]
        sub ecx, edi
        sar ecx, 2
        add esp, 8
        cmp ecx, 1
        mov dword ptr ss : [esp+0x10], eax
        jae public_6ea8254
        mov ecx, esi
        call public_6fa3db0
        cmp eax, 1
        jbe public_6ea81b2
        mov ecx, esi
        call public_6fa3db0
        mov ebp, eax
        jmp public_6ea81b7
        public_6ea81b2 : nop
        mov ebp, 1
        public_6ea81b7 : nop
        mov ecx, esi
        call public_6fa3db0
        mov ebx, eax
        add ebx, ebp
        mov eax, ebx
        jns public_6ea81c8
        xor eax, eax
        public_6ea81c8 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_6eed270
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6f38a50
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
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
        lea ecx, ss:[ebp+ebx*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6fa3db0
        mov ebx, dword ptr ss : [esp+0x90]
        lea edx, ss:[ebp+eax*4+4]
        mov dword ptr ds : [esi+4], ebp
        mov ebp, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [esi+8], edx
        jmp public_6ea8317
        public_6ea8254 : nop
        mov eax, edi
        sub eax, edi
        sar eax, 2
        cmp eax, 1
        jae public_6ea82a8
        lea ecx, ds:[edi+4]
        push ecx
        push edi
        push edi
        mov ecx, esi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x10]
        push edx
        sub ecx, edi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6ea82a2
        public_6ea8295 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ea8295
        public_6ea82a2 : nop
        add dword ptr ds : [esi+8], 4
        jmp public_6ea8317
        public_6ea82a8 : nop
        push edi
        push edi
        lea eax, ds:[edi-4]
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6ea82cf
        nop 
        public_6ea82c0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6ea82c0
        public_6ea82cf : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6ea82e3
        public_6ea82d6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6ea82d6
        public_6ea82e3 : nop
        add dword ptr ds : [esi+8], 4
        jmp public_6ea8317
        public_6ea82e9 : nop
        xor eax, eax
        mov ecx, 0xB
        lea edi, ss:[esp+0x58]
        rep stosd
        push ebx
        lea ecx, ss:[esp+0x5C]
        call public_6ed4010
        test al, al
        je public_6ea8317
        mov eax, dword ptr ss : [ebp+0x7C]
        lea edx, ss:[esp+0x58]
        push edx
        lea ecx, ss:[ebp+0x74]
        push 1
        push eax
        call public_6eae970
        public_6ea8317 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ea7f80
        pop edi
        pop esi
        jmp public_6ea8332
        public_6ea832b : nop
        mov ebp, dword ptr ss : [esp+0x84]
        public_6ea8332 : nop
        mov ecx, dword ptr ss : [esp+0x80]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6ea8359
        mov ecx, ebp
        call public_6f32b50
        test al, al
        je public_6ea8359
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x74
        ret 
        public_6ea8359 : nop
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x6ea7f60)
    }
}

#undef public_6ea7f80
#undef public_6ea7fd9
#undef public_6ea7fed
#undef public_6ea800e
#undef public_6ea8010
#undef public_6ea8038
#undef public_6ea803e
#undef public_6ea8047
#undef public_6ea8049
#undef public_6ea806a
#undef public_6ea806c
#undef public_6ea8094
#undef public_6ea809a
#undef public_6ea80a4
#undef public_6ea80a6
#undef public_6ea80be
#undef public_6ea80f3
#undef public_6ea812a
#undef public_6ea81b2
#undef public_6ea81b7
#undef public_6ea81c8
#undef public_6ea8254
#undef public_6ea8295
#undef public_6ea82a2
#undef public_6ea82a8
#undef public_6ea82c0
#undef public_6ea82cf
#undef public_6ea82d6
#undef public_6ea82e3
#undef public_6ea82e9
#undef public_6ea8317
#undef public_6ea832b
#undef public_6ea8332
#undef public_6ea8359
