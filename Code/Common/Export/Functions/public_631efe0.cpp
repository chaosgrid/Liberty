#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6306020);
CLANG_FORWARD_PROC_SYMBOL(public_630e510);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);

#define public_631f000 _public_631f000
#define public_631f03c _public_631f03c
#define public_631f050 _public_631f050
#define public_631f090 _public_631f090
#define public_631f0c4 _public_631f0c4
#define public_631f0d8 _public_631f0d8
#define public_631f10d _public_631f10d
#define public_631f120 _public_631f120
#define public_631f144 _public_631f144
#define public_631f156 _public_631f156

PROC_DECLARE(0x631efe0, internal_631efe0, public_631efe0);
extern "C" NAKED register_t __cdecl internal_631efe0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        mov ecx, esi
        call public_6310070
        test al, al
        je public_631f156
        push ebx
        push ebp
        push edi
        lea ebx, ds:[ebx]
/*FIXUP public_631f000 : nop
        push offset public_63a3d00 @0x631f000*/
  FIXUP public_631f000 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d00
        mov ecx, esi
        call public_63103c0
        test al, al
        je public_631f144
        xor ebp, ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebp
        mov byte ptr ss : [esp+0x28], 0
        call public_6310170
        mov ecx, esi
        call public_6310b70
        cmp eax, ebp
        jne public_631f03c
        mov dword ptr ss : [esp+0x24], ebp
        mov byte ptr ss : [esp+0x28], 0
        jmp public_631f050
        public_631f03c : nop
        push eax
        lea eax, ss:[esp+0x2C]
        push 0x10
        push eax
        call public_6306020
        add esp, 0xC
        mov dword ptr ss : [esp+0x24], eax
        public_631f050 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_630e510
        xor edx, edx
        mov dx, ax
        add esp, 4
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_64018ec
        mov dword ptr ss : [esp+0x58], edx
        call public_6301640
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, esi
        lea ebx, ds:[edx+0x10]
        call public_6310170
        test al, al
        je public_631f120
/*FIXUP public_631f090 : nop
        push offset public_63a3d08 @0x631f090*/
  FIXUP public_631f090 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d08
        mov ecx, esi
        call public_6310410
        test al, al
        je public_631f10d
        xor edi, edi
        push 1
        mov ecx, esi
        inc ebp
        mov dword ptr ss : [esp+0x3C], edi
        mov byte ptr ss : [esp+0x40], 0
        call public_6310a30
        cmp eax, edi
        jne public_631f0c4
        mov dword ptr ss : [esp+0x38], edi
        mov byte ptr ss : [esp+0x3C], 0
        jmp public_631f0d8
        public_631f0c4 : nop
        push eax
        lea eax, ss:[esp+0x40]
        push 0x10
        push eax
        call public_6306020
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], eax
        public_631f0d8 : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_630e510
        add esp, 4
        xor edi, edi
        push 0
        mov ecx, esi
        mov di, ax
        call public_63108f0
        fstp dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ds:[ebx+0x20]
        mov dword ptr ss : [esp+0x1C], edi
        call public_63222f0
        public_631f10d : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_631f090
        test ebp, ebp
        jne public_631f144
        public_631f120 : nop
        mov ecx, dword ptr ds : [public_6399028]
        add ebx, 4
        push ebx
        push 0x10E
/*FIXUP push offset public_63a3d8c @0x631f12f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d8c
        mov eax, 0x100001
/*FIXUP push offset public_63a3d18 @0x631f139*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d18
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_631f144 : nop
        mov ecx, esi
        call public_6310070
        test al, al
        jne public_631f000
        pop edi
        pop ebp
        pop ebx
        public_631f156 : nop
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x631efe0)
    }
}

#undef public_631f000
#undef public_631f03c
#undef public_631f050
#undef public_631f090
#undef public_631f0c4
#undef public_631f0d8
#undef public_631f10d
#undef public_631f120
#undef public_631f144
#undef public_631f156
