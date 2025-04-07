#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2c530);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ce40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cec0);

#define public_6f2c415 _public_6f2c415
#define public_6f2c422 _public_6f2c422
#define public_6f2c44b _public_6f2c44b
#define public_6f2c458 _public_6f2c458
#define public_6f2c480 _public_6f2c480
#define public_6f2c4b1 _public_6f2c4b1
#define public_6f2c4d8 _public_6f2c4d8
#define public_6f2c500 _public_6f2c500
#define public_6f2c528 _public_6f2c528

PROC_DECLARE(0x6f2c3e0, internal_6f2c3e0, public_6f2c3e0);
extern "C" NAKED register_t __cdecl internal_6f2c3e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+0x10]
        test bl, 1
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6f2c422
        mov eax, dword ptr ds : [public_6f5e1b8]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c3fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        cmp byte ptr ds : [edi], 0
        mov eax, offset public_6f5e794
        jne public_6f2c415
        mov eax, offset public_6f5e790
        public_6f2c415 : nop
        push eax
/*FIXUP push offset public_6f5f68c @0x6f2c416*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f68c
        mov ecx, esi
        call public_6f2cc90
        public_6f2c422 : nop
        test bl, 2
        je public_6f2c458
        mov ecx, dword ptr ds : [public_6f5e1bc]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c42e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov al, byte ptr ds : [edi+1]
        test al, al
        mov eax, offset public_6f5e794
        jne public_6f2c44b
        mov eax, offset public_6f5e790
        public_6f2c44b : nop
        push eax
/*FIXUP push offset public_6f5f68c @0x6f2c44c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f68c
        mov ecx, esi
        call public_6f2cc90
        public_6f2c458 : nop
        test bl, 4
        je public_6f2c480
        mov edx, dword ptr ds : [public_6f5e1c0]
        push edx
/*FIXUP push offset public_6f5ee7c @0x6f2c464*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        lea eax, ds:[edi+4]
        push eax
/*FIXUP push offset public_6f5f67c @0x6f2c474*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f67c
        mov ecx, esi
        call public_6f2cec0
        public_6f2c480 : nop
        test bl, 8
        je public_6f2c4b1
        mov ecx, dword ptr ds : [public_6f5e1c4]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c48c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov edx, dword ptr ds : [edi+0x10]
        push edx
        call public_6f2c530
        add esp, 4
        push eax
/*FIXUP push offset public_6f5f68c @0x6f2c4a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f68c
        mov ecx, esi
        call public_6f2cc90
        public_6f2c4b1 : nop
        test bl, 0x10
        je public_6f2c4d8
        mov eax, dword ptr ds : [public_6f5e1c8]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c4bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
/*FIXUP push offset public_6f5f674 @0x6f2c4cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        mov ecx, esi
        call public_6f2ce40
        public_6f2c4d8 : nop
        test bl, 0x20
        je public_6f2c500
        mov edx, dword ptr ds : [public_6f5e1cc]
        push edx
/*FIXUP push offset public_6f5ee7c @0x6f2c4e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov eax, dword ptr ds : [edi+0x18]
        push eax
/*FIXUP push offset public_6f5f674 @0x6f2c4f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        mov ecx, esi
        call public_6f2ce40
        public_6f2c500 : nop
        test bl, 0x40
        je public_6f2c528
        mov ecx, dword ptr ds : [public_6f5e1d0]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c50c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov edx, dword ptr ds : [edi+0x1C]
        push edx
/*FIXUP push offset public_6f5f674 @0x6f2c51c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        mov ecx, esi
        call public_6f2ce40
        public_6f2c528 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f2c3e0)
    }
}

#undef public_6f2c415
#undef public_6f2c422
#undef public_6f2c44b
#undef public_6f2c458
#undef public_6f2c480
#undef public_6f2c4b1
#undef public_6f2c4d8
#undef public_6f2c500
#undef public_6f2c528
