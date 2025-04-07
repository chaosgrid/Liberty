#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0660);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);

#define public_62f069a _public_62f069a
#define public_62f06e4 _public_62f06e4
#define public_62f06f9 _public_62f06f9
#define public_62f0738 _public_62f0738
#define public_62f074a _public_62f074a
#define public_62f076e _public_62f076e
#define public_62f0792 _public_62f0792
#define public_62f07bf _public_62f07bf
#define public_62f07e3 _public_62f07e3
#define public_62f0807 _public_62f0807
#define public_62f082b _public_62f082b
#define public_62f0885 _public_62f0885
#define public_62f08a9 _public_62f08a9
#define public_62f08cc _public_62f08cc
#define public_62f08d6 _public_62f08d6
#define public_62f08f8 _public_62f08f8

PROC_DECLARE(0x62f0660, internal_62f0660, public_62f0660);
extern "C" NAKED register_t __cdecl internal_62f0660()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
/*FIXUP push offset public_63994e8 @0x62f066b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f069a
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f069a : nop
        push offset public_63a13fc @0x62f069a*/
  FIXUP public_62f069a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13fc
        call public_6310410
        test al, al
        jne public_62f08d6
/*FIXUP push offset public_6399dd4 @0x62f06ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dd4
        mov ecx, esi
        call public_6310410
        test al, al
        jne public_62f08d6
/*FIXUP push offset public_63a13f4 @0x62f06c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13f4
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f074a
        push ebp
        push edi
        push 0
        call public_6310a30
        mov ebp, eax
        mov esi, offset public_63ec810
        xor edi, edi
        public_62f06e4 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62f06f9
        push eax
        push ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62f0738
        public_62f06f9 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0xE8
        jb public_62f06e4
        push ebp
        push 0xE1
/*FIXUP push offset public_63a123c @0x62f070d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100002
/*FIXUP push offset public_63a1208 @0x62f0717*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1208
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        xor esi, esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], esi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_62f0738 : nop
        mov esi, dword ptr ds : [esi+4]
        pop edi
        pop ebp
        mov dword ptr ds : [ebx+0x10], esi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f074a : nop
        push offset public_6399f18 @0x62f074a*/
  FIXUP public_62f074a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f18
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f076e
        push 0
        call public_63107c0
        mov dword ptr ds : [ebx+0x14], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f076e : nop
        push offset public_6399f04 @0x62f076e*/
  FIXUP public_62f076e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f04
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f0792
        push 0
        call public_63107c0
        mov dword ptr ds : [ebx+0x18], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f0792 : nop
        push offset public_63a13e4 @0x62f0792*/
  FIXUP public_62f0792 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13e4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f07bf
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [ebx+0x24], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f07bf : nop
        push offset public_63a13cc @0x62f07bf*/
  FIXUP public_62f07bf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13cc
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f07e3
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0x28]
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f07e3 : nop
        push offset public_63a13c4 @0x62f07e3*/
  FIXUP public_62f07e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13c4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f0807
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0x1C]
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f0807 : nop
        push offset public_63a13bc @0x62f0807*/
  FIXUP public_62f0807 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13bc
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f082b
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0x20]
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f082b : nop
        push offset public_63a13a8 @0x62f082b*/
  FIXUP public_62f082b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13a8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f0885
        push 0
        call public_63108f0
        fstp dword ptr ss : [esp+8]
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0xC]
        push 2
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ds:[ebx+0x2C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        pop esi
        mov byte ptr ds : [ebx+0x38], 1
        mov dword ptr ds : [ecx+8], edx
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f0885 : nop
        push offset public_63a1398 @0x62f0885*/
  FIXUP public_62f0885 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1398
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f08a9
        push 0
        call public_63105b0
        mov byte ptr ds : [ebx+0x39], al
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_62f08a9 : nop
        push offset public_63a1384 @0x62f08a9*/
  FIXUP public_62f08a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1384
        call public_6310410
        test al, al
        jne public_62f08f8
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_62f08cc
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+8]
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_62f08cc : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_62f08d6 : nop
        push 0
        mov ecx, esi
        call public_6310a30
        lea ecx, ss:[esp+0x18]
        mov esi, eax
        call public_6333e30
        push 1
        push esi
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [ebx+0xC], eax
        public_62f08f8 : nop
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62f0660)
    }
}

#undef public_62f069a
#undef public_62f06e4
#undef public_62f06f9
#undef public_62f0738
#undef public_62f074a
#undef public_62f076e
#undef public_62f0792
#undef public_62f07bf
#undef public_62f07e3
#undef public_62f0807
#undef public_62f082b
#undef public_62f0885
#undef public_62f08a9
#undef public_62f08cc
#undef public_62f08d6
#undef public_62f08f8
