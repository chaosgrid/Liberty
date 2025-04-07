#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3aa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f3abe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c010);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d130);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58e18);

#define public_6f3aa50 _public_6f3aa50
#define public_6f3aac9 _public_6f3aac9
#define public_6f3aaea _public_6f3aaea
#define public_6f3ab26 _public_6f3ab26
#define public_6f3ab50 _public_6f3ab50
#define public_6f3ab5d _public_6f3ab5d
#define public_6f3ab65 _public_6f3ab65
#define public_6f3ab73 _public_6f3ab73
#define public_6f3ab78 _public_6f3ab78
#define public_6f3ab7e _public_6f3ab7e
#define public_6f3ab86 _public_6f3ab86

PROC_DECLARE(0x6f3aa00, internal_6f3aa00, public_6f3aa00);
extern "C" NAKED register_t __cdecl internal_6f3aa00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58e18 @0x6f3aa02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58e18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0xE]
        push eax
        mov edi, ecx
        xor ebp, ebp
        push ebp
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f3d130
        mov esi, dword ptr ds : [edi+0xDC]
        cmp esi, dword ptr ds : [edi+0xE0]
        mov dword ptr ss : [esp+0x68], ebp
        je public_6f3aaea
        push ebx
        mov ebx, 1
        nop 
        public_6f3aa50 : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x18], eax
        mov byte ptr ss : [esp+0x38], dl
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], ebp
        mov eax, dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x70], bl
        mov dword ptr ss : [esp+0x50], eax
        call public_6f3c010
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x74], 2
        call public_6f3d1b0
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x6C], bl
        call public_6f3bbd0
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x6C], 0
        call public_6f3bbd0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [esp+0x20]
        add ecx, 0x10
        test al, al
        je public_6f3aac9
        mov byte ptr ds : [ecx+0x10], 0
        public_6f3aac9 : nop
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push eax
        call public_6f3cc90
        mov eax, dword ptr ds : [edi+0xE0]
        add esi, 4
        cmp esi, eax
        jne public_6f3aa50
        pop ebx
        public_6f3aaea : nop
        mov ecx, dword ptr ds : [edi+0xDC]
        mov eax, dword ptr ds : [edi+0xE0]
        lea esi, ds:[edi+0xD8]
        push ecx
        push eax
        push eax
        call public_6f3f660
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_6f3ceb0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f3ab86
        public_6f3ab26 : nop
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_6f3abe0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x25]
        add esp, 0xC
        test dl, dl
        jne public_6f3ab5d
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x25]
        test dl, dl
        jne public_6f3ab78
        public_6f3ab50 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x25]
        test dl, dl
        je public_6f3ab50
        jmp public_6f3ab78
        public_6f3ab5d : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f3ab73
        public_6f3ab65 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f3ab65
        public_6f3ab73 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f3ab7e
        public_6f3ab78 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        public_6f3ab7e : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        jne public_6f3ab26
        public_6f3ab86 : nop
        mov eax, dword ptr ds : [ecx]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_6f3d3c0
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x38], ebp
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x6f3aa00)
    }
}

#undef public_6f3aa50
#undef public_6f3aac9
#undef public_6f3aaea
#undef public_6f3ab26
#undef public_6f3ab50
#undef public_6f3ab5d
#undef public_6f3ab65
#undef public_6f3ab73
#undef public_6f3ab78
#undef public_6f3ab7e
#undef public_6f3ab86
