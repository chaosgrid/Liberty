#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_409047 _public_409047
#define public_409078 _public_409078
#define public_4090a9 _public_4090a9
#define public_4090da _public_4090da
#define public_4090fe _public_4090fe
#define public_409122 _public_409122
#define public_409146 _public_409146
#define public_409172 _public_409172
#define public_4091bd _public_4091bd
#define public_409208 _public_409208
#define public_409234 _public_409234
#define public_409260 _public_409260
#define public_4092b1 _public_4092b1
#define public_4092e0 _public_4092e0
#define public_40930f _public_40930f
#define public_40933e _public_40933e
#define public_40936d _public_40936d
#define public_40939c _public_40939c
#define public_4093cb _public_4093cb
#define public_4093d0 _public_4093d0

PROC_DECLARE(0x408ff0, internal_408ff0, public_408ff0);
extern "C" NAKED register_t __cdecl internal_408ff0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        mov edi, ecx
        mov byte ptr ss : [esp+0x17], 1
        call public_406dc0
        test al, al
        jne public_4093d0
        mov ebp, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c7ce8 @0x409014*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7ce8
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_409047
        push 0
        call dword ptr ds : [public_5c6024]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x9C], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409047 : nop
        push offset public_5c7cd8 @0x409047*/
  FIXUP public_409047 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7cd8
        call ebp
        test al, al
        mov ecx, esi
        je public_409078
        push 0
        call dword ptr ds : [public_5c6024]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0xA0], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409078 : nop
        push offset public_5c7cc4 @0x409078*/
  FIXUP public_409078 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7cc4
        call ebp
        test al, al
        mov ecx, esi
        je public_4090a9
        push 0
        call dword ptr ds : [public_5c6024]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0xA4], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_4090a9 : nop
        push offset public_5c7cac @0x4090a9*/
  FIXUP public_4090a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7cac
        call ebp
        test al, al
        mov ecx, esi
        je public_4090da
        push 0
        call dword ptr ds : [public_5c6024]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0xA8], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_4090da : nop
        push offset public_5c7c98 @0x4090da*/
  FIXUP public_4090da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c98
        call ebp
        test al, al
        mov ecx, esi
        je public_4090fe
        push 0
        call dword ptr ds : [public_5c6d00]
        mov dword ptr ds : [edi+0x54], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_4090fe : nop
        push offset public_5c7c84 @0x4090fe*/
  FIXUP public_4090fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c84
        call ebp
        test al, al
        mov ecx, esi
        je public_409122
        push 0
        call dword ptr ds : [public_5c6d00]
        mov dword ptr ds : [edi+0x58], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409122 : nop
        push offset public_5c7c68 @0x409122*/
  FIXUP public_409122 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c68
        call ebp
        test al, al
        mov ecx, esi
        je public_409146
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x5C]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409146 : nop
        push offset public_5c7c58 @0x409146*/
  FIXUP public_409146 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c58
        call ebp
        test al, al
        mov ecx, esi
        je public_409172
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x60], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409172 : nop
        push offset public_5c7c44 @0x409172*/
  FIXUP public_409172 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c44
        call ebp
        test al, al
        mov ecx, esi
        je public_4091bd
        mov ebx, dword ptr ds : [public_5c6d00]
        push 0
        call ebx
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi+0x64], eax
        call ebx
        cmp dword ptr ds : [edi+0x64], eax
        mov dword ptr ds : [edi+0x68], eax
        jle public_4093d0
/*FIXUP push offset public_5c7c20 @0x40919e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c20
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        mov eax, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [edi+0x68], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_4091bd : nop
        push offset public_5c7c0c @0x4091bd*/
  FIXUP public_4091bd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c0c
        call ebp
        test al, al
        mov ecx, esi
        je public_409208
        mov ebx, dword ptr ds : [public_5c6d00]
        push 0
        call ebx
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi+0x6C], eax
        call ebx
        cmp dword ptr ds : [edi+0x6C], eax
        mov dword ptr ds : [edi+0x70], eax
        jle public_4093d0
/*FIXUP push offset public_5c7be8 @0x4091e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7be8
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        mov ecx, dword ptr ds : [edi+0x6C]
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi+0x70], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409208 : nop
        push offset public_5c7bd0 @0x409208*/
  FIXUP public_409208 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7bd0
        call ebp
        test al, al
        mov ecx, esi
        je public_409234
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x74], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409234 : nop
        push offset public_5c7bb8 @0x409234*/
  FIXUP public_409234 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7bb8
        call ebp
        test al, al
        mov ecx, esi
        je public_409260
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x78], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_409260 : nop
        push offset public_5c7ba0 @0x409260*/
  FIXUP public_409260 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7ba0
        call ebp
        test al, al
        mov ecx, esi
        je public_4092b1
        mov ebx, dword ptr ds : [public_5c6d00]
        push 0
        call ebx
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi+0x7C], eax
        call ebx
        cmp dword ptr ds : [edi+0x7C], eax
        mov dword ptr ds : [edi+0x80], eax
        jle public_4093d0
/*FIXUP push offset public_5c7b7c @0x40928f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7b7c
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        mov edx, dword ptr ds : [edi+0x7C]
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi+0x80], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_4092b1 : nop
        push offset public_5c7b68 @0x4092b1*/
  FIXUP public_4092b1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7b68
        call ebp
        test al, al
        mov ecx, esi
        je public_4092e0
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x88], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_4092e0 : nop
        push offset public_5c7b54 @0x4092e0*/
  FIXUP public_4092e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7b54
        call ebp
        test al, al
        mov ecx, esi
        je public_40930f
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x8C], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_40930f : nop
        push offset public_5c7b40 @0x40930f*/
  FIXUP public_40930f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7b40
        call ebp
        test al, al
        mov ecx, esi
        je public_40933e
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x90], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_40933e : nop
        push offset public_5c7b28 @0x40933e*/
  FIXUP public_40933e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7b28
        call ebp
        test al, al
        mov ecx, esi
        je public_40936d
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x94], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_40936d : nop
        push offset public_5c7b10 @0x40936d*/
  FIXUP public_40936d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7b10
        call ebp
        test al, al
        mov ecx, esi
        je public_40939c
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x98], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_40939c : nop
        push offset public_5c7afc @0x40939c*/
  FIXUP public_40939c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7afc
        call ebp
        test al, al
        je public_4093cb
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x84], eax
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_4093cb : nop
        mov byte ptr ss : [esp+0x13], 0
        public_4093d0 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x408ff0)
    }
}

#undef public_409047
#undef public_409078
#undef public_4090a9
#undef public_4090da
#undef public_4090fe
#undef public_409122
#undef public_409146
#undef public_409172
#undef public_4091bd
#undef public_409208
#undef public_409234
#undef public_409260
#undef public_4092b1
#undef public_4092e0
#undef public_40930f
#undef public_40933e
#undef public_40936d
#undef public_40939c
#undef public_4093cb
#undef public_4093d0
