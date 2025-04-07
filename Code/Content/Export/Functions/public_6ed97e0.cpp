#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed97e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec150);
CLANG_FORWARD_PROC_SYMBOL(public_6eec1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab4eb);

#define public_6ed993e _public_6ed993e
#define public_6ed9a94 _public_6ed9a94
#define public_6ed9aa2 _public_6ed9aa2
#define public_6ed9ab0 _public_6ed9ab0
#define public_6ed9bda _public_6ed9bda
#define public_6ed9c3a _public_6ed9c3a
#define public_6ed9cd2 _public_6ed9cd2
#define public_6ed9ce0 _public_6ed9ce0
#define public_6ed9cee _public_6ed9cee
#define public_6ed9e66 _public_6ed9e66
#define public_6ed9f43 _public_6ed9f43
#define public_6ed9f46 _public_6ed9f46

PROC_DECLARE(0x6ed97e0, internal_6ed97e0, public_6ed97e0);
extern "C" NAKED register_t __cdecl internal_6ed97e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab4eb @0x6ed97e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab4eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2DC
        mov eax, dword ptr ss : [esp+0x2F0]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x2F8]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x2B]
        mov dword ptr ds : [ebx+8], ecx
        xor edi, edi
        lea ebp, ds:[ebx+0x14]
        lea esi, ds:[ebx+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xC8], ebx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x10], edi
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x2FC]
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x300]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x2FC], edi
        mov dword ptr ds : [ebx], offset public_6fb676c
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ed9f43
        push 0x20
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed9f43
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x2FC]
        push edx
        call public_6f73930
        fld dword ptr ss : [esp+0x308]
        fcomp dword ptr ds : [public_6fb6214]
        mov esi, eax
        mov dword ptr ss : [esp+0x14], esi
        fnstsw ax
        test ah, 0x41
        jne public_6ed9e66
        call dword ptr ds : [public_6fb3370]
        shl eax, 1
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        sub eax, edi
        je public_6ed9bda
        dec eax
        jne public_6ed9f46
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A3F
        call public_6eb6b30
        cmp eax, 7
        jae public_6ed993e
        push 0x1C
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x14]
        add edx, 0x1C
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], ecx
/*FIXUP public_6ed993e : nop
        push offset public_6fb6750 @0x6ed993e*/
  FIXUP public_6ed993e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6750
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], eax
        call public_6eb5770
        mov ecx, dword ptr ds : [esi+0x138]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x44], edi
        mov byte ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_6fb3450]
        lea edx, ss:[esp+0x8C]
        mov ecx, 0x11
        lea esi, ss:[esp+0x44]
        lea edi, ss:[esp+0x88]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push edx
        lea eax, ss:[esp+0x228]
        push 0
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        lea ecx, ss:[esp+0x94]
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6348 @0x6ed99ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x38]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], eax
        call public_6eb5770
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        test eax, eax
        jne public_6ed9a94
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        test eax, 0xC40
        je public_6ed9ab0
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_6fb344c]
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6ed9aa2
        public_6ed9a94 : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6ed9aa2 : nop
        push offset public_6fb6064 @0x6ed9aa2*/
  FIXUP public_6ed9aa2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x40]
        call public_6eec250
        public_6ed9ab0 : nop
        lea edx, ss:[esp+0x84]
        mov ecx, 0x11
        lea esi, ss:[esp+0x3C]
        lea edi, ss:[esp+0x80]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6730 @0x6ed9ae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6730
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x158], 0
        mov byte ptr ss : [esp+0x15C], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ed9b0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x160]
        push eax
        lea ecx, ss:[esp+0x270]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x94]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6718 @0x6ed9b5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6718
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x114], 0
        mov byte ptr ss : [esp+0x118], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ed9b86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x11C]
        push eax
        lea ecx, ss:[esp+0x2B4]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x94]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        jmp public_6ed9f46
        public_6ed9bda : nop
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A3E
        call public_6eb6b30
        cmp eax, 6
        jae public_6ed9c3a
        push 0x18
        call public_6fa912a
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+4]
        push esi
        push edx
        push eax
        mov ecx, ebp
        call public_6eed270
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], esi
/*FIXUP public_6ed9c3a : nop
        push offset public_6fb6348 @0x6ed9c3a*/
  FIXUP public_6ed9c3a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x44], edi
        mov byte ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        cmp eax, edi
        jne public_6ed9cd2
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        test eax, 0xC40
        je public_6ed9cee
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x48]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6ed9ce0
        public_6ed9cd2 : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6ed9ce0 : nop
        push offset public_6fb6064 @0x6ed9ce0*/
  FIXUP public_6ed9ce0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x40]
        call public_6eec250
        public_6ed9cee : nop
        mov ecx, 0x11
        lea esi, ss:[esp+0x3C]
        lea edi, ss:[esp+0x80]
        lea edx, ss:[esp+0x84]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6308 @0x6ed9d27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6308
        call esi
        add esp, 4
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x138]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_6fb3450]
        mov ecx, 0x11
        lea esi, ss:[esp+0x44]
        lea edi, ss:[esp+0x88]
        rep movsd
        lea ecx, ss:[esp+0x8C]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0xC
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        push ecx
        lea edx, ss:[esp+0x1E4]
        push 0
        push edx
        call public_6eeb210
        mov esi, eax
        lea eax, ss:[esp+0x94]
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], eax
        call public_6eb5770
/*FIXUP push offset public_6fb6718 @0x6ed9dea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6718
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0xD0], 0
        mov byte ptr ss : [esp+0xD4], 0
        call public_6ead640
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ed9e12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0xD8]
        push ecx
        lea edx, ss:[esp+0x1A4]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x94]
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], eax
        call public_6eb5770
        jmp public_6ed9f46
        public_6ed9e66 : nop
        push 4
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        call public_6eec150
/*FIXUP push offset public_6fb6750 @0x6ed9e76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6750
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov eax, dword ptr ds : [esi+0x138]
        lea edx, ss:[esp+0xCC]
        push edx
        push eax
        mov dword ptr ss : [esp+0xD4], edi
        mov byte ptr ss : [esp+0xD8], 0
        call dword ptr ds : [public_6fb3450]
        sub esp, 0x3C
        mov edi, esp
        mov ecx, 0x11
        lea esi, ss:[esp+0x110]
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        push ecx
        lea edx, ss:[esp+0x1A0]
        push 0
        push edx
        call public_6eeb210
        sub esp, 0x34
        mov esi, eax
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
/*FIXUP push offset public_6fb6700 @0x6ed9f01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6700
        lea ecx, ss:[esp+0x19C]
        call public_6eec1f0
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed9f16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        add eax, 4
        push eax
        lea edx, ss:[esp+0x1E8]
        push edx
        call public_6eeaf10
        sub esp, 0x34
        mov esi, eax
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        jmp public_6ed9f46
        public_6ed9f43 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ed9f46 : nop
        mov ecx, dword ptr ss : [esp+0x2EC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x2E8
        ret 0x10
        UNREACHABLE_TRAP(0x6ed97e0)
    }
}

#undef public_6ed993e
#undef public_6ed9a94
#undef public_6ed9aa2
#undef public_6ed9ab0
#undef public_6ed9bda
#undef public_6ed9c3a
#undef public_6ed9cd2
#undef public_6ed9ce0
#undef public_6ed9cee
#undef public_6ed9e66
#undef public_6ed9f43
#undef public_6ed9f46
