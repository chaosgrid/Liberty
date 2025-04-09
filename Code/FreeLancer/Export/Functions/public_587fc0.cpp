#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_588008 _public_588008
#define public_588035 _public_588035
#define public_588091 _public_588091
#define public_5881bc _public_5881bc
#define public_5881e0 _public_5881e0
#define public_588263 _public_588263
#define public_588295 _public_588295
#define public_5882a2 _public_5882a2
#define public_5882d4 _public_5882d4
#define public_5882e1 _public_5882e1
#define public_588313 _public_588313
#define public_588320 _public_588320
#define public_588352 _public_588352
#define public_58835f _public_58835f
#define public_588391 _public_588391
#define public_58839e _public_58839e
#define public_5883d0 _public_5883d0
#define public_5883dd _public_5883dd
#define public_58840f _public_58840f
#define public_58841c _public_58841c
#define public_58843c _public_58843c
#define public_58845c _public_58845c
#define public_58848e _public_58848e
#define public_588498 _public_588498
#define public_588511 _public_588511
#define public_588523 _public_588523
#define public_588535 _public_588535

PROC_DECLARE(0x587fc0, internal_587fc0, public_587fc0);
extern "C" NAKED register_t __cdecl internal_587fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x68
        push esi
        push edi
        mov edi, ecx
        push eax
        push edi
        call public_59dd00
        push edi
        call public_59dbf0
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ss : [esp+0x84]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_588523
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_588523
        push ebx
        push ebp
        public_588008 : nop
        mov ebp, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5dba88 @0x58800e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba88
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_588035
        mov ebx, dword ptr ds : [edi]
        push 0
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, edi
        call dword ptr ds : [ebx+0x98]
        jmp public_588511
/*FIXUP public_588035 : nop
        push offset public_5e16fc @0x588035*/
  FIXUP public_588035 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16fc
        call ebp
        test al, al
        mov ecx, esi
        je public_588091
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        fld qword ptr ss : [esp+0x10]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[edi+0xB4]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_588511
/*FIXUP public_588091 : nop
        push offset public_5e1708 @0x588091*/
  FIXUP public_588091 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1708
        call ebp
        test al, al
        mov ecx, esi
        je public_5881bc
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        fld qword ptr ss : [esp+0x10]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[edi+0xA8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+8], edx
        cmp dword ptr ds : [edi+0x84], 0xFFFFFFFF
        je public_588511
        fld dword ptr ds : [eax+8]
        sub esp, 0xC
        fadd dword ptr ds : [edi+0x68]
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [edi+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [edi+0x60]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x48]
        push edx
        mov edx, dword ptr ds : [edi+0x84]
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x74], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_588511
/*FIXUP public_5881bc : nop
        push offset public_5dd344 @0x5881bc*/
  FIXUP public_5881bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        call ebp
        test al, al
        mov ecx, esi
        je public_588263
        call dword ptr ds : [public_5c6698]
        lea edx, ds:[edi+0x1D0]
        lea esp, ss:[esp]
        public_5881e0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_5881e0
        mov ecx, dword ptr ss : [esp+0x7C]
        lea ebp, ds:[edi+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x20], eax
        mov dword ptr ss : [ebp+0x10], eax
        mov dword ptr ss : [ebp], eax
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ss : [ebp+0x1C], eax
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x14], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+0x2C], eax
        mov dword ptr ss : [ebp+0x28], eax
        mov dword ptr ss : [ebp+0x24], eax
        je public_588511
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov ebx, eax
        test ebx, ebx
        je public_588511
        mov eax, dword ptr ds : [ebx]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x84], eax
        call dword ptr ds : [public_5c6698]
        push eax
        mov eax, dword ptr ss : [esp+0x88]
        mov ecx, ebx
        call dword ptr ds : [eax+0x90]
        mov byte ptr ds : [edi+0x328], al
        jmp public_588511
/*FIXUP public_588263 : nop
        push offset public_5e16c0 @0x588263*/
  FIXUP public_588263 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16c0
        call ebp
        test al, al
        mov ecx, esi
        je public_5882a2
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_588295
        mov eax, 1
        mov byte ptr ds : [edi+0x2D1], al
        jmp public_588511
        public_588295 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x2D1], al
        jmp public_588511
/*FIXUP public_5882a2 : nop
        push offset public_5e4eb8 @0x5882a2*/
  FIXUP public_5882a2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4eb8
        call ebp
        test al, al
        mov ecx, esi
        je public_5882e1
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_5882d4
        mov eax, 1
        mov byte ptr ds : [edi+0x34C], al
        jmp public_588511
        public_5882d4 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x34C], al
        jmp public_588511
/*FIXUP public_5882e1 : nop
        push offset public_5e16ec @0x5882e1*/
  FIXUP public_5882e1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16ec
        call ebp
        test al, al
        mov ecx, esi
        je public_588320
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_588313
        mov eax, 1
        mov byte ptr ds : [edi+0x344], al
        jmp public_588511
        public_588313 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x344], al
        jmp public_588511
/*FIXUP public_588320 : nop
        push offset public_5e4ea8 @0x588320*/
  FIXUP public_588320 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ea8
        call ebp
        test al, al
        mov ecx, esi
        je public_58835f
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_588352
        mov eax, 1
        mov byte ptr ds : [edi+0x345], al
        jmp public_588511
        public_588352 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x345], al
        jmp public_588511
/*FIXUP public_58835f : nop
        push offset public_5e4e9c @0x58835f*/
  FIXUP public_58835f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4e9c
        call ebp
        test al, al
        mov ecx, esi
        je public_58839e
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_588391
        mov eax, 1
        mov byte ptr ds : [edi+0x346], al
        jmp public_588511
        public_588391 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x346], al
        jmp public_588511
/*FIXUP public_58839e : nop
        push offset public_5e4e88 @0x58839e*/
  FIXUP public_58839e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4e88
        call ebp
        test al, al
        mov ecx, esi
        je public_5883dd
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_5883d0
        mov eax, 1
        mov byte ptr ds : [edi+0x34B], al
        jmp public_588511
        public_5883d0 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x34B], al
        jmp public_588511
/*FIXUP public_5883dd : nop
        push offset public_5e4e78 @0x5883dd*/
  FIXUP public_5883dd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4e78
        call ebp
        test al, al
        mov ecx, esi
        je public_58841c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_58840f
        mov eax, 1
        mov byte ptr ds : [edi+0x34A], al
        jmp public_588511
        public_58840f : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x34A], al
        jmp public_588511
/*FIXUP public_58841c : nop
        push offset public_5e4e68 @0x58841c*/
  FIXUP public_58841c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4e68
        call ebp
        test al, al
        mov ecx, esi
        je public_58843c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x418]
        jmp public_588511
/*FIXUP public_58843c : nop
        push offset public_5e4e58 @0x58843c*/
  FIXUP public_58843c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4e58
        call ebp
        test al, al
        mov ecx, esi
        je public_58845c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x41C]
        jmp public_588511
/*FIXUP public_58845c : nop
        push offset public_5e4e48 @0x58845c*/
  FIXUP public_58845c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4e48
        call ebp
        test al, al
        mov ecx, esi
        je public_588498
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_58848e
        mov eax, 1
        mov byte ptr ds : [edi+0x349], al
        jmp public_588511
        public_58848e : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x349], al
        jmp public_588511
/*FIXUP public_588498 : nop
        push offset public_5e4e30 @0x588498*/
  FIXUP public_588498 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4e30
        call ebp
        test al, al
        je public_588511
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x30]
        fld qword ptr ss : [esp+0x10]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x30]
        lea eax, ds:[edi+0x338]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x33C]
        mov edx, dword ptr ds : [edi+0x340]
        mov dword ptr ds : [edi+0x334], eax
        mov dword ptr ds : [edi+0x330], ecx
        mov dword ptr ds : [edi+0x32C], edx
        public_588511 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_588008
        pop ebp
        pop ebx
        public_588523 : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        je public_588535
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[edi+0x60]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        public_588535 : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x68
        ret 8
        UNREACHABLE_TRAP(0x587fc0)
    }
}

#undef public_588008
#undef public_588035
#undef public_588091
#undef public_5881bc
#undef public_5881e0
#undef public_588263
#undef public_588295
#undef public_5882a2
#undef public_5882d4
#undef public_5882e1
#undef public_588313
#undef public_588320
#undef public_588352
#undef public_58835f
#undef public_588391
#undef public_58839e
#undef public_5883d0
#undef public_5883dd
#undef public_58840f
#undef public_58841c
#undef public_58843c
#undef public_58845c
#undef public_58848e
#undef public_588498
#undef public_588511
#undef public_588523
#undef public_588535
