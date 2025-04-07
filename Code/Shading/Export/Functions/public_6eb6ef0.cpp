#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7180);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb71f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6eb6f17 _public_6eb6f17
#define public_6eb6f54 _public_6eb6f54
#define public_6eb6f96 _public_6eb6f96
#define public_6eb7049 _public_6eb7049
#define public_6eb7069 _public_6eb7069
#define public_6eb70a6 _public_6eb70a6
#define public_6eb70a8 _public_6eb70a8
#define public_6eb70bb _public_6eb70bb
#define public_6eb70da _public_6eb70da
#define public_6eb7100 _public_6eb7100

PROC_DECLARE(0x6eb6ef0, internal_6eb6ef0, public_6eb6ef0);
extern "C" NAKED register_t __cdecl internal_6eb6ef0()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        mov dword ptr ds : [esi+0x74], 2
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 4
        je public_6eb6f17
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x78], al
        public_6eb6f17 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        cmp dword ptr ds : [esi+0x74], 1
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0x79], 1
        jne public_6eb6f96
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
        mov edi, offset public_6ed18dc
        mov eax, 1
        public_6eb6f54 : nop
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
        jne public_6eb6f54
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed194c @0x6eb6f72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed194c
        push 1
        push eax
        call public_6eb71b0
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed188c @0x6eb6f82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed188c
        push ecx
        call public_6eb7180
        add esp, 0x14
        pop ebp
        jmp public_6eb7069
        public_6eb6f96 : nop
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
/*FIXUP push offset public_6ed18dc @0x6eb6fb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed18dc
        push 0
        push eax
        call public_6eb71b0
        mov cl, byte ptr ds : [esi+0x79]
        add esp, 0xC
        test cl, cl
        mov eax, 1
        je public_6eb7049
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        add ecx, 0x2C
        call public_6eb7120
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed1914 @0x6eb6fe3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1914
        push 1
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [edx+0x100]
        mov eax, 2
        public_6eb7049 : nop
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed194c @0x6eb704c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed194c
        push eax
        push edx
        call public_6eb71b0
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6ed188c @0x6eb705b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed188c
        push eax
        call public_6eb7180
        add esp, 0x14
        public_6eb7069 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x110]
        test eax, eax
        push 1
        mov ecx, esi
        setge bl
        call public_6eb71f0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x110]
        mov edi, eax
        test edi, edi
        setge cl
        test bl, bl
        je public_6eb70a6
        test cl, cl
        je public_6eb70a6
        mov eax, 1
        jmp public_6eb70a8
        public_6eb70a6 : nop
        xor eax, eax
        public_6eb70a8 : nop
        test bl, bl
        mov byte ptr ds : [esi+0x79], al
        pop ebx
        je public_6eb70bb
        test cl, cl
        je public_6eb70bb
        mov al, byte ptr ds : [esi+0x78]
        test al, al
        jne public_6eb7100
        public_6eb70bb : nop
        mov edi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [esi+8]
        add edi, 0x2C
        cmp eax, 0xFFFFFFFF
        je public_6eb70da
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_6eb70da : nop
        push 0
        mov ecx, esi
        mov byte ptr ds : [esi+0x79], 0
        mov byte ptr ds : [esi+0x78], 0
        mov dword ptr ds : [esi+0x74], 1
        call public_6eb71f0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edi, eax
        public_6eb7100 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6eb6ef0)
    }
}

#undef public_6eb6f17
#undef public_6eb6f54
#undef public_6eb6f96
#undef public_6eb7049
#undef public_6eb7069
#undef public_6eb70a6
#undef public_6eb70a8
#undef public_6eb70bb
#undef public_6eb70da
#undef public_6eb7100
