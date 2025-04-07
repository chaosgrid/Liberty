#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7180);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebb890);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6ebb6a7 _public_6ebb6a7
#define public_6ebb6e4 _public_6ebb6e4
#define public_6ebb726 _public_6ebb726
#define public_6ebb7e4 _public_6ebb7e4
#define public_6ebb821 _public_6ebb821
#define public_6ebb823 _public_6ebb823
#define public_6ebb836 _public_6ebb836
#define public_6ebb855 _public_6ebb855
#define public_6ebb87b _public_6ebb87b

PROC_DECLARE(0x6ebb680, internal_6ebb680, public_6ebb680);
extern "C" NAKED register_t __cdecl internal_6ebb680()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        mov dword ptr ds : [esi+0x78], 2
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 4
        je public_6ebb6a7
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x7C], al
        public_6ebb6a7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        cmp dword ptr ds : [esi+0x78], 1
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0x7D], 1
        jne public_6ebb726
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push eax
        call public_6eb7120
        mov ebp, dword ptr ds : [esi+4]
        mov edi, offset public_6ed225c
        mov eax, 1
        public_6ebb6e4 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push 0
        push ebp
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebb6e4
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed22cc @0x6ebb702*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed22cc
        push 1
        push eax
        call public_6eb71b0
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed220c @0x6ebb712*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed220c
        push ecx
        call public_6eb7180
        add esp, 0x14
        pop ebp
        jmp public_6ebb7e4
        public_6ebb726 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0xAC]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push edx
        call public_6eb7120
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 1
        push eax
        add ecx, 0x2C
        call public_6eb7120
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed225c @0x6ebb755*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed225c
        push 0
        push ecx
        call public_6eb71b0
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed2294 @0x6ebb765*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed2294
        push 1
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed22cc @0x6ebb775*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed22cc
        push 2
        push eax
        call public_6eb71b0
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed220c @0x6ebb785*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed220c
        push ecx
        call public_6eb7180
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        add esp, 0x2C
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x68]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, edx
        mov dword ptr ss : [esp+8], edx
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x100]
        public_6ebb7e4 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x110]
        test eax, eax
        push 1
        mov ecx, esi
        setge bl
        call public_6ebb890
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x110]
        mov edi, eax
        test edi, edi
        setge cl
        test bl, bl
        je public_6ebb821
        test cl, cl
        je public_6ebb821
        mov eax, 1
        jmp public_6ebb823
        public_6ebb821 : nop
        xor eax, eax
        public_6ebb823 : nop
        test bl, bl
        mov byte ptr ds : [esi+0x7D], al
        pop ebx
        je public_6ebb836
        test cl, cl
        je public_6ebb836
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        jne public_6ebb87b
        public_6ebb836 : nop
        mov edi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [esi+8]
        add edi, 0x2C
        cmp eax, 0xFFFFFFFF
        je public_6ebb855
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_6ebb855 : nop
        push 0
        mov ecx, esi
        mov byte ptr ds : [esi+0x7D], 0
        mov byte ptr ds : [esi+0x7C], 0
        mov dword ptr ds : [esi+0x78], 1
        call public_6ebb890
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edi, eax
        public_6ebb87b : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6ebb680)
    }
}

#undef public_6ebb6a7
#undef public_6ebb6e4
#undef public_6ebb726
#undef public_6ebb7e4
#undef public_6ebb821
#undef public_6ebb823
#undef public_6ebb836
#undef public_6ebb855
#undef public_6ebb87b
