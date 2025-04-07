#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e610);
CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_41e790);
CLANG_FORWARD_PROC_SYMBOL(public_41e880);
CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b82d0);

#define public_41e63b _public_41e63b
#define public_41e6bc _public_41e6bc
#define public_41e6e0 _public_41e6e0
#define public_41e6f5 _public_41e6f5
#define public_41e706 _public_41e706
#define public_41e727 _public_41e727

PROC_DECLARE(0x41e610, internal_41e610, public_41e610);
extern "C" NAKED register_t __cdecl internal_41e610()
{
    __asm
    {
        mov al, byte ptr ds : [public_61682c]
        test al, 1
        jne public_41e63b
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x41e62e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_41e63b : nop
        mov al, byte ptr ds : [public_616854]
        push ebx
        xor ebx, ebx
        cmp al, bl
        push esi
        jne public_41e6bc
        mov byte ptr ds : [public_616854], 1
        call dword ptr ds : [public_5c72c4]
        push ebx
/*FIXUP push offset public_6167c4 @0x41e656*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c4
/*FIXUP push offset public_5e752c @0x41e65b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e752c
        push 0x800
        push ebx
        mov dword ptr ds : [public_6167f8], eax
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b82d0
        mov eax, dword ptr ds : [public_6167c4]
        mov ecx, dword ptr ds : [eax]
        push ebx
/*FIXUP push offset public_6167c8 @0x41e67f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c8
/*FIXUP push offset public_5e74ec @0x41e684*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74ec
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_6167c8]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e772c @0x41e694*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e772c
        push eax
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [public_6167cc]
        or al, 0x60
        test al, 0x40
        mov byte ptr ds : [public_6167cc], al
        je public_41e6bc
        push 0x80
        mov ecx, offset public_6167b8
        call public_41e790
        public_41e6bc : nop
        mov eax, dword ptr ds : [public_6167c8]
        cmp eax, ebx
        je public_41e6e0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_6167c8]
        cmp eax, ebx
        je public_41e6e0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6167c8], ebx
        public_41e6e0 : nop
        mov eax, dword ptr ds : [public_6167c4]
        cmp eax, ebx
        je public_41e6f5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6167c4], ebx
        public_41e6f5 : nop
        mov eax, dword ptr ds : [public_616740]
        xor esi, esi
        cmp eax, ebx
        mov dword ptr ds : [public_616858], ebx
        jbe public_41e727
        public_41e706 : nop
        mov edx, dword ptr ds : [esi*4+public_616744]
        push edx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi*4+public_616744], ebx
        mov eax, dword ptr ds : [public_616740]
        inc esi
        cmp esi, eax
        jb public_41e706
        public_41e727 : nop
        mov ecx, offset public_616728
        mov dword ptr ds : [public_616740], ebx
        call public_425a20
        pop esi
        mov byte ptr ds : [public_616855], bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x41e610)
    }
}

#undef public_41e63b
#undef public_41e6bc
#undef public_41e6e0
#undef public_41e6f5
#undef public_41e706
#undef public_41e727
