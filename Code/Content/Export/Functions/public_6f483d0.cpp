#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f38b20);
CLANG_FORWARD_PROC_SYMBOL(public_6f483d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49440);
CLANG_FORWARD_PROC_SYMBOL(public_6f49780);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a740);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d220);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d400);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);

#define public_6f48465 _public_6f48465
#define public_6f48490 _public_6f48490
#define public_6f484c9 _public_6f484c9
#define public_6f4852d _public_6f4852d
#define public_6f4854e _public_6f4854e
#define public_6f4857f _public_6f4857f
#define public_6f485a0 _public_6f485a0
#define public_6f485e1 _public_6f485e1
#define public_6f48621 _public_6f48621
#define public_6f4862a _public_6f4862a
#define public_6f4863f _public_6f4863f
#define public_6f48662 _public_6f48662
#define public_6f48715 _public_6f48715
#define public_6f4871e _public_6f4871e
#define public_6f4872e _public_6f4872e
#define public_6f4873f _public_6f4873f

PROC_DECLARE(0x6f483d0, internal_6f483d0, public_6f483d0);
extern "C" NAKED register_t __cdecl internal_6f483d0()
{
    __asm
    {
        sub esp, 0xC88
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xF0]
        mov eax, dword ptr ds : [edi+0xF4]
        lea esi, ds:[edi+0xEC]
        push ecx
        push eax
        push eax
        call public_6f4a740
        mov ebx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push ebx
        mov ecx, esi
        call public_6ea1490
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [edi+0x100]
        mov eax, dword ptr ds : [edi+0x104]
        lea esi, ds:[edi+0xFC]
        push ecx
        push eax
        push eax
        call public_6f38b20
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        mov ebx, eax
        push ebx
        mov ecx, esi
        call public_6ea1490
        mov dword ptr ds : [esi+8], ebx
        mov esi, dword ptr ss : [esp+0xC98]
        lea edx, ss:[esp+0x8C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6fb302c]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f4873f
        mov ebx, dword ptr ds : [public_6fb3020]
        push ebp
/*FIXUP public_6f48465 : nop
        push offset public_6fbafd4 @0x6f48465*/
  FIXUP public_6f48465 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbafd4
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        mov ecx, esi
        je public_6f4863f
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f4872e
        lea ebx, ds:[ebx]
/*FIXUP public_6f48490 : nop
        push offset public_6fbafe4 @0x6f48490*/
  FIXUP public_6f48490 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbafe4
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f484c9
        push 0
        call ebx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+0xC]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x30], eax
        call public_6f6d400
        add esp, 8
        jmp public_6f4862a
/*FIXUP public_6f484c9 : nop
        push offset public_6fbafdc @0x6f484c9*/
  FIXUP public_6f484c9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbafdc
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f4852d
        push 1
        call ebx
        push 3
        mov ecx, esi
        mov ebp, eax
        call ebx
        push 2
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call ebx
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x50], ecx
        push edx
        lea ecx, ds:[edi+0xEC]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        mov dword ptr ss : [esp+0x54], ebp
        call public_6f69d50
        jmp public_6f4862a
/*FIXUP public_6f4852d : nop
        push offset public_6fbb000 @0x6f4852d*/
  FIXUP public_6f4852d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb000
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f4854e
        push 0
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [edi+0x21], al
        jmp public_6f4862a
/*FIXUP public_6f4854e : nop
        push offset public_6fbaff0 @0x6f4854e*/
  FIXUP public_6f4854e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaff0
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f4857f
        push 0
        call ebx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_6f937c0
        jmp public_6f4862a
/*FIXUP public_6f4857f : nop
        push offset public_6fbb01c @0x6f4857f*/
  FIXUP public_6f4857f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb01c
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f485a0
        push 0
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [edi+0x34], al
        jmp public_6f4862a
/*FIXUP public_6f485a0 : nop
        push offset public_6fbb00c @0x6f485a0*/
  FIXUP public_6f485a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb00c
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f485e1
        xor eax, eax
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        call ebx
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call ebx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[edi+0x38]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_6f96770
        jmp public_6f4862a
/*FIXUP public_6f485e1 : nop
        push offset public_6fbb024 @0x6f485e1*/
  FIXUP public_6f485e1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb024
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f48621
        push 1
        mov ecx, esi
        call ebx
        push 0
        mov ecx, esi
        mov ebp, eax
        call ebx
        mov edx, dword ptr ds : [edi+0x104]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ds:[edi+0xFC]
        push 1
        push edx
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], ebp
        call public_6f96770
        jmp public_6f4862a
        public_6f48621 : nop
        push esi
        lea ecx, ds:[edi+0x48]
        call public_6f49780
        public_6f4862a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f48490
        jmp public_6f4872e
/*FIXUP public_6f4863f : nop
        push offset public_6fb780c @0x6f4863f*/
  FIXUP public_6f4863f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb780c
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f4872e
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f4872e
/*FIXUP public_6f48662 : nop
        push offset public_6fb8d70 @0x6f48662*/
  FIXUP public_6f48662 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d70
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f4871e
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push 0x3C
        push eax
        lea eax, ss:[esp+0x5C]
        push eax
        call dword ptr ds : [public_6fb3378]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        call public_6f4d220
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x14
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        push esi
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_6f48715
        mov ecx, dword ptr ss : [esp+0x20]
        push 1
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
/*FIXUP push offset public_6fb4450 @0x6f486c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4450
        call dword ptr ds : [public_6fb3614]
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ds : [edi+0xD8], eax
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [edi+0xC]
        lea edx, ss:[esp+0x24]
        push 0x100B
        push edx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x2C], 0
        call public_6f24070
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0xD8]
        push 0
        push 0
        push eax
        push ecx
        push eax
        call dword ptr ds : [public_6fb3534]
        add esp, 0x30
        public_6f48715 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6f4871e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f48662
        public_6f4872e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f48465
        pop ebp
        public_6f4873f : nop
        mov ecx, edi
        call public_6f49440
        lea eax, ss:[esp+0x8C]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb3010]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC88
        ret 4
        UNREACHABLE_TRAP(0x6f483d0)
    }
}

#undef public_6f48465
#undef public_6f48490
#undef public_6f484c9
#undef public_6f4852d
#undef public_6f4854e
#undef public_6f4857f
#undef public_6f485a0
#undef public_6f485e1
#undef public_6f48621
#undef public_6f4862a
#undef public_6f4863f
#undef public_6f48662
#undef public_6f48715
#undef public_6f4871e
#undef public_6f4872e
#undef public_6f4873f
