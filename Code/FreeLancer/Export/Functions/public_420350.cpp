#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_41e790);
CLANG_FORWARD_PROC_SYMBOL(public_41e880);
CLANG_FORWARD_PROC_SYMBOL(public_420060);
CLANG_FORWARD_PROC_SYMBOL(public_4201a0);
CLANG_FORWARD_PROC_SYMBOL(public_420350);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b82d0);

#define public_42038b _public_42038b
#define public_42040b _public_42040b
#define public_420429 _public_420429
#define public_420461 _public_420461
#define public_4204b3 _public_4204b3
#define public_4204c0 _public_4204c0
#define public_4204c9 _public_4204c9
#define public_4204d5 _public_4204d5
#define public_4204ef _public_4204ef
#define public_42051a _public_42051a
#define public_42053c _public_42053c
#define public_42057b _public_42057b
#define public_42059e _public_42059e
#define public_4205b1 _public_4205b1

PROC_DECLARE(0x420350, internal_420350, public_420350);
extern "C" NAKED register_t __cdecl internal_420350()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        sub esp, 0x1C
        test al, al
        push ebx
        jne public_4204d5
        mov al, byte ptr ds : [public_61682c]
        test al, 1
        jne public_42038b
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x42037e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_42038b : nop
        mov al, byte ptr ds : [public_616854]
        test al, al
        jne public_42040b
        mov byte ptr ds : [public_616854], 1
        call dword ptr ds : [public_5c72c4]
        push 0
/*FIXUP push offset public_6167c4 @0x4203a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c4
/*FIXUP push offset public_5e752c @0x4203a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e752c
        push 0x800
        push 0
        mov dword ptr ds : [public_6167f8], eax
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b82d0
        mov eax, dword ptr ds : [public_6167c4]
        mov ecx, dword ptr ds : [eax]
        push 0
/*FIXUP push offset public_6167c8 @0x4203ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c8
/*FIXUP push offset public_5e74ec @0x4203d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74ec
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_6167c8]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e772c @0x4203e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e772c
        push eax
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [public_6167cc]
        or al, 0x60
        test al, 0x40
        mov byte ptr ds : [public_6167cc], al
        je public_42040b
        push 0x80
        mov ecx, offset public_6167b8
        call public_41e790
        public_42040b : nop
        mov dl, byte ptr ds : [public_6167cc]
        mov eax, dword ptr ds : [public_6167c8]
        and dl, 0xFE
        test eax, eax
        mov byte ptr ds : [public_6167cc], dl
        je public_420429
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_420429 : nop
        mov dl, byte ptr ds : [public_6167cc]
        and dl, 0xF3
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_6167cc], dl
        call public_535980
        mov eax, dword ptr ds : [public_6167c8]
        test eax, eax
        je public_420461
        mov ecx, dword ptr ds : [public_67eca0]
        mov edx, dword ptr ds : [eax]
        push 6
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        and byte ptr ds : [public_6167cc], 0xF7
        public_420461 : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0x14
        call dword ptr ds : [public_5c72b0]
        test byte ptr ss : [esp+0x10], 1
        jne public_4204c9
        mov eax, dword ptr ds : [public_616840]
        mov ecx, dword ptr ds : [public_616844]
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [public_67eca0]
        push edx
        push eax
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [public_5c72b4]
        test eax, eax
        je public_4204b3
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        push edx
        call dword ptr ds : [public_5c72b8]
        public_4204b3 : nop
        push esi
        mov esi, dword ptr ds : [public_5c72c8]
        lea ebx, ds:[ebx]
        public_4204c0 : nop
        push 1
        call esi
        test eax, eax
        jle public_4204c0
        pop esi
        public_4204c9 : nop
        mov byte ptr ds : [public_61685c], 0
        pop ebx
        add esp, 0x1C
        ret 
        public_4204d5 : nop
        mov bl, byte ptr ss : [esp+0x30]
        test bl, bl
        jne public_4204ef
        call dword ptr ds : [public_5c72a8]
        cmp eax, dword ptr ds : [public_67eca0]
        jne public_4205b1
        public_4204ef : nop
        mov al, byte ptr ds : [public_61682c]
        test al, 1
        jne public_42051a
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x42050d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_42051a : nop
        mov al, byte ptr ds : [public_616854]
        test al, al
        jne public_42053c
        mov eax, dword ptr ds : [public_67eca0]
        push 1
        push eax
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_616854], 1
        call public_420060
        public_42053c : nop
        mov al, byte ptr ds : [public_6167cc]
        shl bl, 4
        xor bl, al
        and bl, 0x10
        xor al, bl
        mov byte ptr ds : [public_6167cc], al
        mov al, byte ptr ds : [public_61682c]
        test al, 1
        jne public_42057b
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x42056e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_42057b : nop
        mov al, byte ptr ds : [public_616854]
        test al, al
        jne public_42059e
        mov ecx, dword ptr ds : [public_67eca0]
        push 1
        push ecx
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_616854], 1
        call public_420060
        public_42059e : nop
        push 1
        mov ecx, offset public_6167b8
        call public_4201a0
        mov byte ptr ds : [public_61685c], 1
        public_4205b1 : nop
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x420350)
    }
}

#undef public_42038b
#undef public_42040b
#undef public_420429
#undef public_420461
#undef public_4204b3
#undef public_4204c0
#undef public_4204c9
#undef public_4204d5
#undef public_4204ef
#undef public_42051a
#undef public_42053c
#undef public_42057b
#undef public_42059e
#undef public_4205b1
