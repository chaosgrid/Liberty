#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d55bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d55c00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a8);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63a3c);

#define public_6d55aae _public_6d55aae
#define public_6d55ab0 _public_6d55ab0
#define public_6d55ac5 _public_6d55ac5
#define public_6d55aea _public_6d55aea
#define public_6d55aee _public_6d55aee
#define public_6d55b2c _public_6d55b2c
#define public_6d55b50 _public_6d55b50

PROC_DECLARE(0x6d55960, internal_6d55960, public_6d55960);
extern "C" NAKED register_t __cdecl internal_6d55960()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6d63a3c @0x6d5596c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63a3c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0x40
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d55b50
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6d55b50
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], ebx
        je public_6d55b50
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x6C]
        mov edi, dword ptr ss : [esp+0x68]
        mov esi, dword ptr ds : [public_6d64788]
        mov dword ptr ss : [esp+0xC], ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x18], edi
        call esi
        mov ecx, dword ptr ss : [esp+0x74]
        mov al, byte ptr ss : [esp+0x70]
        push ecx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x4C], al
        call esi
        cmp edi, ebx
        je public_6d55aea
        mov edx, edi
        imul edx, 0x1C
        add edx, 4
        push edx
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x70], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x54], 1
        je public_6d55aae
/*FIXUP push offset _public_6d55c00 @0x6d55a94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d55c00
/*FIXUP push offset _public_6d55bc0 @0x6d55a99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d55bc0
        push edi
        lea esi, ds:[eax+4]
        push 0x1C
        push esi
        mov dword ptr ds : [eax], edi
        call public_6d601a8
        jmp public_6d55ab0
        public_6d55aae : nop
        xor esi, esi
        public_6d55ab0 : nop
        cmp edi, ebx
        mov byte ptr ss : [esp+0x54], bl
        mov dword ptr ss : [esp+0x10], esi
        jbe public_6d55aee
        push ebp
        mov ebp, edi
        mov edi, dword ptr ss : [esp+0x68]
        xor esi, esi
        public_6d55ac5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi+edi+4]
        push eax
        add ecx, esi
        call dword ptr ds : [public_6d64788]
        mov edx, dword ptr ds : [esi+edi]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+eax+0x18], edx
        add esi, 0x1C
        dec ebp
        jne public_6d55ac5
        pop ebp
        jmp public_6d55aee
        public_6d55aea : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_6d55aee : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0x60]
        push eax
        call dword ptr ds : [edx+0x120]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        pop edi
        je public_6d55b2c
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
/*FIXUP push offset _public_6d55c00 @0x6d55b15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d55c00
        push ecx
        push 0x1C
        push eax
        call public_6d6001e
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d55b2c : nop
        mov esi, dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x50], 2
        call esi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call esi
        mov eax, ebx
        public_6d55b50 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x6d55960)
    }
}

#undef public_6d55aae
#undef public_6d55ab0
#undef public_6d55ac5
#undef public_6d55aea
#undef public_6d55aee
#undef public_6d55b2c
#undef public_6d55b50
