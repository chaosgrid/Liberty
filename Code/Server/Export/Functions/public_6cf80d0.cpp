#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf63f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a200);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60b88);

#define public_6cf81e8 _public_6cf81e8
#define public_6cf81fa _public_6cf81fa
#define public_6cf8232 _public_6cf8232
#define public_6cf82cf _public_6cf82cf
#define public_6cf82d4 _public_6cf82d4
#define public_6cf8340 _public_6cf8340
#define public_6cf8377 _public_6cf8377
#define public_6cf839f _public_6cf839f
#define public_6cf83a4 _public_6cf83a4

PROC_DECLARE(0x6cf80d0, internal_6cf80d0, public_6cf80d0);
extern "C" NAKED register_t __cdecl internal_6cf80d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60b88 @0x6cf80d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60b88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xF8]
        mov eax, dword ptr ds : [esi+8]
        push edi
        push eax
        call public_6d00280
        mov edi, eax
        xor ebx, ebx
        add esp, 4
        cmp edi, ebx
        je public_6cf839f
        lea ecx, ss:[esp+0x20]
        call public_6cf63f0
        mov byte ptr ss : [esp+0xCC], bl
        mov byte ptr ss : [esp+0xCD], bl
        mov dword ptr ss : [esp+0xD0], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], offset public_6d66b7c
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0xF0], ebx
        mov byte ptr ss : [esp+0xD4], 1
        call dword ptr ds : [public_6d644a8]
        mov dword ptr ss : [esp+0xDC], ebx
        mov cl, byte ptr ds : [esi+0x88]
        cmp cl, bl
        lea eax, ds:[esi+0x88]
        mov dword ptr ss : [esp+0xF0], 1
        je public_6cf82cf
        push eax
        call dword ptr ds : [public_6d643b4]
        mov ecx, dword ptr ss : [esp+0xFC]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [esi+0x7C]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xDC], eax
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0x8C], eax
        lea eax, ds:[esi+0x40]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [esp+0x40], edx
        add esp, 4
        xor edx, edx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x64], ecx
        jle public_6cf81fa
        push ebp
        lea ebp, ss:[esp+0x38]
        lea ecx, ss:[esp+0x48]
        sub eax, ebp
        public_6cf81e8 : nop
        mov ebp, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ss : [esp+0x68]
        inc edx
        add ecx, 4
        cmp edx, ebp
        jl public_6cf81e8
        pop ebp
        public_6cf81fa : nop
        mov edx, dword ptr ds : [esi+0x78]
        mov eax, dword ptr ds : [esi+0x74]
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [public_6d8d868]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x74], ecx
        jne public_6cf8232
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d868], eax
        public_6cf8232 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x18]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [esi+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x88], edx
        mov dword ptr ss : [esp+0x90], eax
        call dword ptr ds : [public_6d644a4]
        add esp, 4
        lea edx, ss:[esp+0xA0]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_6d644a0]
        mov ecx, dword ptr ds : [esi+0xCC]
        mov al, byte ptr ds : [esi+0x80]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xDC], ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0xD8], al
        mov byte ptr ss : [esp+0xD0], 1
        mov byte ptr ss : [esp+0xD1], 1
        call public_6d0a200
        mov esi, eax
        neg esi
        sbb esi, esi
        neg esi
        dec esi
        jmp public_6cf82d4
        public_6cf82cf : nop
        mov esi, 0xFFFFFFFC
        public_6cf82d4 : nop
        mov dword ptr ss : [esp+0x20], offset public_6d65f68
        mov eax, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0xFC], 3
        call dword ptr ds : [public_6d64394]
        mov ecx, dword ptr ss : [esp+0xB0]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0xB4], ebx
        mov dword ptr ss : [esp+0xB8], ebx
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov byte ptr ss : [esp+0xF0], 2
        mov edi, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_6cf8377
        lea ecx, ds:[ecx]
        public_6cf8340 : nop
        push ebx
        lea edx, ss:[esp+0xE8]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0xE4]
        push ecx
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_6d643d0]
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6cf8340
        mov eax, dword ptr ss : [esp+0xA4]
        public_6cf8377 : nop
        push eax
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x98]
        push edx
        mov dword ptr ss : [esp+0xAC], ebx
        mov dword ptr ss : [esp+0xB0], ebx
        call public_6d5ffb0
        add esp, 8
        mov eax, esi
        jmp public_6cf83a4
        public_6cf839f : nop
        mov eax, 0xFFFFFFFC
        public_6cf83a4 : nop
        mov ecx, dword ptr ss : [esp+0xE8]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 
        UNREACHABLE_TRAP(0x6cf80d0)
    }
}

#undef public_6cf81e8
#undef public_6cf81fa
#undef public_6cf8232
#undef public_6cf82cf
#undef public_6cf82d4
#undef public_6cf8340
#undef public_6cf8377
#undef public_6cf839f
#undef public_6cf83a4
