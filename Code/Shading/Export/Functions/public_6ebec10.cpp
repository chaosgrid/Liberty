#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebea50);
CLANG_FORWARD_PROC_SYMBOL(public_6ebea90);
CLANG_FORWARD_PROC_SYMBOL(public_6ebec10);

#define public_6ebed64 _public_6ebed64
#define public_6ebed7c _public_6ebed7c
#define public_6ebed88 _public_6ebed88
#define public_6ebeda3 _public_6ebeda3
#define public_6ebedc2 _public_6ebedc2
#define public_6ebedd0 _public_6ebedd0
#define public_6ebeddc _public_6ebeddc
#define public_6ebedf0 _public_6ebedf0
#define public_6ebee0f _public_6ebee0f
#define public_6ebee40 _public_6ebee40
#define public_6ebee5a _public_6ebee5a
#define public_6ebee60 _public_6ebee60
#define public_6ebee7a _public_6ebee7a
#define public_6ebee98 _public_6ebee98
#define public_6ebeea0 _public_6ebeea0
#define public_6ebeeba _public_6ebeeba
#define public_6ebeec0 _public_6ebeec0
#define public_6ebeeda _public_6ebeeda
#define public_6ebeef8 _public_6ebeef8
#define public_6ebef00 _public_6ebef00
#define public_6ebef1a _public_6ebef1a
#define public_6ebef20 _public_6ebef20
#define public_6ebef3a _public_6ebef3a
#define public_6ebef58 _public_6ebef58
#define public_6ebef60 _public_6ebef60
#define public_6ebef7a _public_6ebef7a
#define public_6ebef80 _public_6ebef80
#define public_6ebef9a _public_6ebef9a
#define public_6ebefb8 _public_6ebefb8
#define public_6ebefc0 _public_6ebefc0
#define public_6ebefda _public_6ebefda
#define public_6ebefe0 _public_6ebefe0
#define public_6ebeffa _public_6ebeffa
#define public_6ebf018 _public_6ebf018
#define public_6ebf020 _public_6ebf020
#define public_6ebf03a _public_6ebf03a
#define public_6ebf040 _public_6ebf040
#define public_6ebf05a _public_6ebf05a
#define public_6ebf075 _public_6ebf075
#define public_6ebf079 _public_6ebf079
#define public_6ebf0bf _public_6ebf0bf
#define public_6ebf0e3 _public_6ebf0e3
#define public_6ebf0ee _public_6ebf0ee
#define public_6ebf0fe _public_6ebf0fe

PROC_DECLARE(0x6ebec10, internal_6ebec10, public_6ebec10);
extern "C" NAKED register_t __cdecl internal_6ebec10()
{
    __asm
    {
        sub esp, 0x428
        push ebx
        push esi
        call public_6ebea50
        lea eax, ss:[esp+8]
        push eax
        push 0x504F4144
        xor ebx, ebx
        push ebx
        push 0xFFFFFFFF
        push 8
        push 8
        push 8
        push 8
        call public_6ebea90
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0x31414144
        push ebx
        push 1
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_6ebea90
        add esp, 0x40
        lea edx, ss:[esp+8]
        push edx
        push 0x34414144
        push ebx
        push 4
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_6ebea90
        lea eax, ss:[esp+0x28]
        push eax
        push 0x38414144
        push ebx
        push 8
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_6ebea90
        add esp, 0x40
        lea ecx, ss:[esp+8]
        push ecx
        push 0x544F4144
        push ebx
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_6ebea90
        lea edx, ss:[esp+0x28]
        push edx
        push 0x31414144
        push 1
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_6ebea90
        add esp, 0x40
        lea eax, ss:[esp+8]
        push eax
        push 0x34414144
        push 4
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_6ebea90
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0x38414144
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_6ebea90
        add esp, 0x40
        call dword ptr ds : [public_6ed1008]
        lea ecx, ss:[esp+0xC]
        push ecx
/*FIXUP push offset public_6ed48b4 @0x6ebed09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        mov dword ptr ss : [esp+0x14], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6ebf0ee
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push 3
/*FIXUP push offset public_6ed48a0 @0x6ebed27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48a0
        push eax
        call dword ptr ds : [edx+0x14]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], esi
        je public_6ebf0ee
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push 0x400
        lea edx, ss:[esp+0x30]
        push edx
        push ebx
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        je public_6ebf0e3
        push ebp
        push edi
        mov edi, dword ptr ds : [public_6ed1048]
        public_6ebed64 : nop
        lea eax, ss:[esp+0x34]
        push 0x3B
        inc ebx
        push eax
        mov dword ptr ss : [esp+0x38], ebx
        call edi
        add esp, 8
        test eax, eax
        je public_6ebed7c
        mov byte ptr ds : [eax], 0
        public_6ebed7c : nop
        mov al, byte ptr ss : [esp+0x34]
        test al, al
        lea ebp, ss:[esp+0x34]
        je public_6ebeda3
        public_6ebed88 : nop
        movsx ecx, byte ptr ss : [ebp]
        push ecx
/*FIXUP push offset public_6ed489c @0x6ebed8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed489c
        call edi
        add esp, 8
        test eax, eax
        je public_6ebeda3
        mov al, byte ptr ss : [ebp+1]
        inc ebp
        test al, al
        jne public_6ebed88
        public_6ebeda3 : nop
        push 3
/*FIXUP push offset public_6ed4894 @0x6ebeda5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4894
        push ebp
        call dword ptr ds : [public_6ed1088]
        add esp, 0xC
        test eax, eax
        jne public_6ebedc2
        call public_6ebea50
        jmp public_6ebf0bf
        public_6ebedc2 : nop
        mov al, byte ptr ss : [ebp]
        test al, al
        mov esi, ebp
        je public_6ebeddc
        nop 
        lea esp, ss:[esp]
        public_6ebedd0 : nop
        cmp al, 0x3D
        je public_6ebeddc
        mov al, byte ptr ss : [ebp+1]
        inc ebp
        test al, al
        jne public_6ebedd0
        public_6ebeddc : nop
        mov byte ptr ss : [ebp], 0
        mov al, byte ptr ss : [ebp+1]
        inc ebp
        test al, al
        je public_6ebf0bf
        lea esp, ss:[esp]
        public_6ebedf0 : nop
        movsx edx, al
        push edx
/*FIXUP push offset public_6ed489c @0x6ebedf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed489c
        call edi
        add esp, 8
        test eax, eax
        je public_6ebee0f
        mov al, byte ptr ss : [ebp+1]
        inc ebp
        test al, al
        jne public_6ebedf0
        jmp public_6ebf0bf
        public_6ebee0f : nop
        cmp byte ptr ss : [ebp], 0
        je public_6ebf0bf
        mov eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x24], eax
        mov al, byte ptr ds : [esi]
        test al, al
        mov ebx, esi
        je public_6ebee5a
        mov edi, edi
        public_6ebee40 : nop
        movsx eax, al
        push eax
/*FIXUP push offset public_6ed489c @0x6ebee44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed489c
        call edi
        add esp, 8
        test eax, eax
        je public_6ebee5a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebee40
        public_6ebee5a : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6ebee7a
        public_6ebee60 : nop
        movsx ecx, al
        push ecx
/*FIXUP push offset public_6ed4888 @0x6ebee64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4888
        call edi
        add esp, 8
        test eax, eax
        je public_6ebee7a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebee60
        public_6ebee7a : nop
        push 0x2A
        mov byte ptr ds : [esi], 0
        push ebx
        inc esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6ebee98
        push ebx
        call dword ptr ds : [public_6ed1040]
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        public_6ebee98 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        mov ebx, esi
        je public_6ebeeba
        public_6ebeea0 : nop
        movsx edx, al
        push edx
/*FIXUP push offset public_6ed4884 @0x6ebeea4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4884
        call edi
        add esp, 8
        test eax, eax
        je public_6ebeeba
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebeea0
        public_6ebeeba : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6ebeeda
        public_6ebeec0 : nop
        movsx eax, al
        push eax
/*FIXUP push offset public_6ed4888 @0x6ebeec4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4888
        call edi
        add esp, 8
        test eax, eax
        je public_6ebeeda
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebeec0
        public_6ebeeda : nop
        push 0x2A
        mov byte ptr ds : [esi], 0
        push ebx
        inc esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6ebeef8
        push ebx
        call dword ptr ds : [public_6ed1040]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        public_6ebeef8 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        mov ebx, esi
        je public_6ebef1a
        public_6ebef00 : nop
        movsx ecx, al
        push ecx
/*FIXUP push offset public_6ed4884 @0x6ebef04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4884
        call edi
        add esp, 8
        test eax, eax
        je public_6ebef1a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebef00
        public_6ebef1a : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6ebef3a
        public_6ebef20 : nop
        movsx edx, al
        push edx
/*FIXUP push offset public_6ed4888 @0x6ebef24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4888
        call edi
        add esp, 8
        test eax, eax
        je public_6ebef3a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebef20
        public_6ebef3a : nop
        push 0x2A
        mov byte ptr ds : [esi], 0
        push ebx
        inc esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6ebef58
        push ebx
        call dword ptr ds : [public_6ed1040]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        public_6ebef58 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        mov ebx, esi
        je public_6ebef7a
        public_6ebef60 : nop
        movsx eax, al
        push eax
/*FIXUP push offset public_6ed4884 @0x6ebef64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4884
        call edi
        add esp, 8
        test eax, eax
        je public_6ebef7a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebef60
        public_6ebef7a : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6ebef9a
        public_6ebef80 : nop
        movsx ecx, al
        push ecx
/*FIXUP push offset public_6ed4888 @0x6ebef84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4888
        call edi
        add esp, 8
        test eax, eax
        je public_6ebef9a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebef80
        public_6ebef9a : nop
        push 0x2A
        mov byte ptr ds : [esi], 0
        push ebx
        inc esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6ebefb8
        push ebx
        call dword ptr ds : [public_6ed1040]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        public_6ebefb8 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        mov ebx, esi
        je public_6ebefda
        public_6ebefc0 : nop
        movsx edx, al
        push edx
/*FIXUP push offset public_6ed4884 @0x6ebefc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4884
        call edi
        add esp, 8
        test eax, eax
        je public_6ebefda
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebefc0
        public_6ebefda : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6ebeffa
        public_6ebefe0 : nop
        movsx eax, al
        push eax
/*FIXUP push offset public_6ed4888 @0x6ebefe4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4888
        call edi
        add esp, 8
        test eax, eax
        je public_6ebeffa
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebefe0
        public_6ebeffa : nop
        push 0x2A
        mov byte ptr ds : [esi], 0
        push ebx
        inc esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6ebf018
        push ebx
        call dword ptr ds : [public_6ed1040]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        public_6ebf018 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        mov ebx, esi
        je public_6ebf03a
        public_6ebf020 : nop
        movsx ecx, al
        push ecx
/*FIXUP push offset public_6ed4884 @0x6ebf024*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4884
        call edi
        add esp, 8
        test eax, eax
        je public_6ebf03a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebf020
        public_6ebf03a : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6ebf05a
        public_6ebf040 : nop
        movsx edx, al
        push edx
/*FIXUP push offset public_6ed4888 @0x6ebf044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4888
        call edi
        add esp, 8
        test eax, eax
        je public_6ebf05a
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ebf040
        public_6ebf05a : nop
        push 0x2A
        push ebx
        mov byte ptr ds : [esi], 0
        call edi
        add esp, 8
        test eax, eax
        jne public_6ebf075
        push ebx
        call dword ptr ds : [public_6ed1040]
        add esp, 4
        jmp public_6ebf079
        public_6ebf075 : nop
        mov eax, dword ptr ss : [esp+0x28]
        public_6ebf079 : nop
        xor edx, edx
        mov dh, byte ptr ss : [ebp+3]
        lea ecx, ss:[esp+0x10]
        push ecx
        movzx ecx, byte ptr ss : [ebp+1]
        mov dl, byte ptr ss : [ebp+2]
        shl edx, 8
        or edx, ecx
        movzx ecx, byte ptr ss : [ebp]
        shl edx, 8
        or edx, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        push edx
        push eax
        call public_6ebea90
        mov ebx, dword ptr ss : [esp+0x50]
        add esp, 0x20
        public_6ebf0bf : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        push 0x400
        lea edx, ss:[esp+0x38]
        push edx
        push ebx
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        jne public_6ebed64
        pop edi
        pop ebp
        public_6ebf0e3 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6ebf0ee : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        pop esi
        pop ebx
        je public_6ebf0fe
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ebf0fe : nop
        xor eax, eax
        add esp, 0x428
        ret 
        UNREACHABLE_TRAP(0x6ebec10)
    }
}

#undef public_6ebed64
#undef public_6ebed7c
#undef public_6ebed88
#undef public_6ebeda3
#undef public_6ebedc2
#undef public_6ebedd0
#undef public_6ebeddc
#undef public_6ebedf0
#undef public_6ebee0f
#undef public_6ebee40
#undef public_6ebee5a
#undef public_6ebee60
#undef public_6ebee7a
#undef public_6ebee98
#undef public_6ebeea0
#undef public_6ebeeba
#undef public_6ebeec0
#undef public_6ebeeda
#undef public_6ebeef8
#undef public_6ebef00
#undef public_6ebef1a
#undef public_6ebef20
#undef public_6ebef3a
#undef public_6ebef58
#undef public_6ebef60
#undef public_6ebef7a
#undef public_6ebef80
#undef public_6ebef9a
#undef public_6ebefb8
#undef public_6ebefc0
#undef public_6ebefda
#undef public_6ebefe0
#undef public_6ebeffa
#undef public_6ebf018
#undef public_6ebf020
#undef public_6ebf03a
#undef public_6ebf040
#undef public_6ebf05a
#undef public_6ebf075
#undef public_6ebf079
#undef public_6ebf0bf
#undef public_6ebf0e3
#undef public_6ebf0ee
#undef public_6ebf0fe
