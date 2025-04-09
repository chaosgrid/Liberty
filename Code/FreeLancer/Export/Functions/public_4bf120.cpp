#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4be7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4bf120);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5a0ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd580);

#define public_4bf271 _public_4bf271
#define public_4bf273 _public_4bf273
#define public_4bf2aa _public_4bf2aa
#define public_4bf2b2 _public_4bf2b2
#define public_4bf2c3 _public_4bf2c3
#define public_4bf30c _public_4bf30c
#define public_4bf30e _public_4bf30e
#define public_4bf339 _public_4bf339
#define public_4bf348 _public_4bf348

PROC_DECLARE(0x4bf120, internal_4bf120, public_4bf120);
extern "C" NAKED register_t __cdecl internal_4bf120()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd580 @0x4bf122*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd580
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, ds:[esi+0x10]
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x94], esi
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov cl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x20]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0xD8], ebx
        call dword ptr ds : [public_5c6414]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edi, ds:[esi+0x38]
        mov ecx, edi
        mov byte ptr ss : [esp+0xD0], 1
        call dword ptr ds : [public_5c6364]
        mov edx, dword ptr ss : [esp+0xD8]
        mov cl, byte ptr ss : [esp+0xF8]
        mov eax, dword ptr ss : [esp+0xF4]
        mov dword ptr ds : [esi+0xC], edx
        mov dl, byte ptr ss : [esp+0xFC]
        mov byte ptr ds : [esi+0x5C], cl
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi], offset public_5d628c
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], eax
        mov byte ptr ds : [esi+0x5D], bl
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov byte ptr ds : [esi+0x5E], dl
        call dword ptr ds : [public_5c6428]
        lea ecx, ss:[esp+0x98]
        mov dword ptr ds : [esi+0x58], ebx
        call public_4215b0
        mov ecx, dword ptr ss : [esp+0xD8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x98]
        push edx
        mov edx, dword ptr ss : [esp+0xE0]
        push edx
        mov dword ptr ss : [esp+0xCC], ebx
        mov dword ptr ss : [esp+0xC8], ebx
        mov dword ptr ss : [esp+0xC4], ebx
        call dword ptr ds : [eax+0x90]
        mov eax, dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ss : [esp+0xC0]
        mov edx, dword ptr ss : [esp+0xC4]
        push 0x2C
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0xD0], 2
        je public_4bf271
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edi], offset public_5d6028
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+0x24], ebx
        mov eax, dword ptr ds : [esi+0xC]
        push ecx
        push eax
        mov ecx, edi
        call public_4be7e0
        jmp public_4bf273
        public_4bf271 : nop
        xor edi, edi
        public_4bf273 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x2C]
        push edx
        push 1
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0xDC], 1
        mov dword ptr ss : [esp+0x38], edi
        call public_537260
        mov eax, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        je public_4bf2aa
        fld dword ptr ds : [eax+0xB8]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x20]
        jmp public_4bf2b2
        public_4bf2aa : nop
        mov dword ptr ss : [esp+0x20], 0
        public_4bf2b2 : nop
        mov edi, dword ptr ss : [esp+0xF4]
        cmp edi, 1
        jle public_4bf339
        dec edi
        mov dword ptr ss : [esp+0x28], edi
        public_4bf2c3 : nop
        fld dword ptr ss : [esp+0x18]
        push 0x2C
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x1C]
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x90], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0xD0], 3
        je public_4bf30c
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edi], offset public_5d6028
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+0x24], ebx
        mov eax, dword ptr ds : [esi+0xC]
        push ecx
        push eax
        mov ecx, edi
        call public_4be7e0
        jmp public_4bf30e
        public_4bf30c : nop
        xor edi, edi
        public_4bf30e : nop
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x24]
        push edx
        push 1
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0xDC], 1
        mov dword ptr ss : [esp+0x30], edi
        call public_537260
        dec dword ptr ss : [esp+0x28]
        jne public_4bf2c3
        mov edi, dword ptr ss : [esp+0xF4]
        public_4bf339 : nop
        cmp edi, 4
        mov ebp, offset public_5d6250
        je public_4bf348
        mov ebp, offset public_5d6214
        public_4bf348 : nop
        mov ecx, dword ptr ds : [public_6728b8]
        push ecx
/*FIXUP push offset public_5d6208 @0x4bf34f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6208
/*FIXUP push offset public_5d601c @0x4bf354*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d601c
/*FIXUP push offset public_6724b8 @0x4bf359*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        mov dword ptr ss : [esp+0x24], 0x3C23D70A
        mov dword ptr ss : [esp+0x28], 0x3C9374BC
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x88], 0x3C449BA6
        mov dword ptr ss : [esp+0x8C], 0x3C1374BC
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3C449BA6
        mov dword ptr ss : [esp+0x5C], 0x3C1374BC
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x94], 0x3C23D70A
        mov dword ptr ss : [esp+0x98], 0x3E0F5C29
        mov dword ptr ss : [esp+0x9C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        call dword ptr ds : [public_5c71ec]
        add esp, 0x10
        mov eax, dword ptr ds : [public_6728b8]
        push ebx
        push ebx
        push edi
        mov ecx, dword ptr ss : [esp+0xF8]
        push ebx
        push ebx
        push ebx
        inc eax
        mov dword ptr ds : [public_6728b8], eax
        mov eax, dword ptr ss : [esp+0x108]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x10C]
        lea eax, ss:[esp+0x7C]
        push eax
/*FIXUP push offset public_5d61d4 @0x4bf48e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d61d4
        push ebx
        lea ecx, ss:[esp+0xAC]
        push ecx
        push edx
        mov edx, dword ptr ss : [esp+0x124]
        lea eax, ss:[esp+0x78]
        push eax
/*FIXUP push offset public_5d61a4 @0x4bf4a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d61a4
        push ebx
        lea ecx, ss:[esp+0x90]
        push ecx
        push edx
        mov edx, dword ptr ss : [esp+0x130]
        lea eax, ss:[esp+0xBC]
        push eax
/*FIXUP push offset public_5d6170 @0x4bf4c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6170
        push 1
        lea ecx, ss:[esp+0xE0]
        push ecx
        mov ecx, dword ptr ss : [esp+0x138]
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        push ebp
/*FIXUP push offset public_6724b8 @0x4bf4e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6724b8
        call public_5a0ef0
        mov dword ptr ds : [esi+8], eax
        push 0xFFFFFFFF
        mov ecx, esi
        mov dword ptr ds : [eax+0x2F0], esi
        call public_4bf850
        mov ecx, dword ptr ss : [esp+0xC8]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC4
        ret 0x28
        UNREACHABLE_TRAP(0x4bf120)
    }
}

#undef public_4bf271
#undef public_4bf273
#undef public_4bf2aa
#undef public_4bf2b2
#undef public_4bf2c3
#undef public_4bf30c
#undef public_4bf30e
#undef public_4bf339
#undef public_4bf348
