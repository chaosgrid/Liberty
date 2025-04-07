#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f86c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f91310);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1491);

#define public_6f90fb8 _public_6f90fb8
#define public_6f90fce _public_6f90fce
#define public_6f910b8 _public_6f910b8
#define public_6f910c6 _public_6f910c6
#define public_6f911bc _public_6f911bc
#define public_6f9123b _public_6f9123b
#define public_6f9123d _public_6f9123d
#define public_6f912a9 _public_6f912a9
#define public_6f912c4 _public_6f912c4
#define public_6f912dd _public_6f912dd
#define public_6f912ea _public_6f912ea

PROC_DECLARE(0x6f90f60, internal_6f90f60, public_6f90f60);
extern "C" NAKED register_t __cdecl internal_6f90f60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1491 @0x6f90f62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1491
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x100
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ds : [ecx+0x8C]
        mov edx, dword ptr ds : [ecx+0x14]
        push ebx
        xor ebx, ebx
        xor al, al
        cmp edx, ebx
        je public_6f912ea
        push esi
        mov esi, dword ptr ss : [esp+0x118]
        mov eax, edx
        mov eax, dword ptr ds : [eax+0x48]
        push edi
        lea edi, ds:[esi+0x3C]
        mov dword ptr ds : [edi], eax
        cmp dword ptr ds : [esi+0xFC], 2
        jne public_6f90fb8
        mov byte ptr ds : [esi+0x9D], 1
        public_6f90fb8 : nop
        mov eax, dword ptr ds : [esi+0x104]
        cmp eax, ebx
        je public_6f90fce
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 0x50BB8
        mov dword ptr ds : [esi+0x44], ecx
        public_6f90fce : nop
        cmp byte ptr ds : [esi+0xE4], bl
        je public_6f910b8
        mov eax, dword ptr ds : [esi+0x48]
        test eax, 0x3FFFFFFF
        je public_6f910c6
        lea edx, ss:[esp+0xE8]
        push edx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3664]
        mov ecx, dword ptr ds : [esi+0x48]
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3660]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [esi+0xE0]
        lea edx, ds:[esi+0x58]
        fld dword ptr ss : [esp+0x40]
        push edi
        fadd dword ptr ds : [esi+0xDC]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi+0xD8]
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        lea ecx, ds:[esi+0x4C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x50]
        lea eax, ds:[esi+0x88]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, 0x3F800000
        lea edx, ds:[esi+0x34]
        push edx
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x68], ebx
        call dword ptr ds : [public_6fb34dc]
        add esp, 0x20
        jmp public_6f910c6
        public_6f910b8 : nop
        lea eax, ds:[esi+0x34]
        push edi
        push eax
        call dword ptr ds : [public_6fb34dc]
        add esp, 8
        public_6f910c6 : nop
        mov ecx, dword ptr ds : [public_6fbc2e8]
        mov dl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x8C], ecx
        mov byte ptr ss : [esp+0x98], dl
        mov edx, dword ptr ds : [public_6fb30b0]
        xor eax, eax
        xor ecx, ecx
        mov dword ptr ss : [esp+0x48], offset public_6fbc7c8
        mov byte ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x50], ebx
        mov byte ptr ss : [esp+0x54], bl
        mov dword ptr ss : [esp+0x84], 2
        mov dword ptr ss : [esp+0x88], ebx
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0xA0], ecx
        mov dword ptr ss : [esp+0xA4], ebx
        mov dword ptr ss : [esp+0xB8], ebx
        mov dx, word ptr ds : [edx]
        mov word ptr ss : [esp+0xBC], dx
        mov dword ptr ss : [esp+0xC0], ebx
        mov dword ptr ss : [esp+0x48], offset public_6fbc850
        mov edx, dword ptr ds : [esi+0x48]
        mov edi, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0xA8], edx
        mov edx, dword ptr ds : [esi+0x94]
        mov dword ptr ss : [esp+0xAC], edx
        mov edx, dword ptr ds : [esi+0x100]
        mov esi, dword ptr ds : [esi+0xFC]
        cmp esi, 2
        mov dword ptr ss : [esp+0x114], ebx
        mov dword ptr ss : [esp+0x90], edi
        mov dword ptr ss : [esp+0xB4], edx
        mov dword ptr ss : [esp+0xB0], esi
        jne public_6f912a9
        cmp edx, 1
        mov dword ptr ss : [esp+0x88], esi
        je public_6f911bc
        push 0x3F800000
        push 1
        push ebx
        push edi
        call dword ptr ds : [public_6fb35ac]
        add esp, 0x10
        public_6f911bc : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [eax+0x60]
        push 0x7C
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x114], 1
        je public_6f9123b
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, esi
        call public_6f91310
        mov edx, dword ptr ss : [esp+0xA8]
        mov dword ptr ds : [esi+0x60], edx
        mov eax, dword ptr ss : [esp+0xAC]
        mov dword ptr ds : [esi+0x64], eax
        mov ecx, dword ptr ss : [esp+0xB0]
        mov dword ptr ds : [esi+0x68], ecx
        mov edx, dword ptr ss : [esp+0xB4]
        mov dword ptr ds : [esi+0x6C], edx
        mov eax, dword ptr ss : [esp+0xB8]
        mov dword ptr ds : [esi+0x70], eax
        mov cx, word ptr ss : [esp+0xBC]
        mov word ptr ds : [esi+0x74], cx
        mov edx, dword ptr ss : [esp+0xC0]
        mov dword ptr ds : [esi+0x78], edx
        mov dword ptr ds : [esi], offset public_6fbc850
        jmp public_6f9123d
        public_6f9123b : nop
        xor esi, esi
        public_6f9123d : nop
        mov eax, dword ptr ds : [edi+0x28]
        lea ecx, ds:[edi+0x24]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov byte ptr ss : [esp+0x120], bl
        mov dword ptr ss : [esp+0x18], esi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [public_6fd3b98]
        push ebx
        push ecx
        push edx
        lea ecx, ss:[esp+0xD0]
        call public_6f86c80
        mov esi, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [edi+0x10]
        lea ecx, ds:[edi+0x10]
        push esi
        push eax
        mov byte ptr ss : [esp+0x11C], 2
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0xC4], offset public_6fb7730
        public_6f912a9 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x114], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x48], offset public_6fbc7c8
        mov edi, ecx
        mov esi, eax
        je public_6f912dd
        public_6f912c4 : nop
        push ebx
        mov ecx, esi
        call public_6f94b00
        add esi, 0x108
        cmp esi, edi
        jne public_6f912c4
        mov eax, dword ptr ss : [esp+0x9C]
        public_6f912dd : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        mov al, 1
        pop esi
        public_6f912ea : nop
        mov ecx, dword ptr ss : [esp+0x104]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10C
        ret 4
        UNREACHABLE_TRAP(0x6f90f60)
    }
}

#undef public_6f90fb8
#undef public_6f90fce
#undef public_6f910b8
#undef public_6f910c6
#undef public_6f911bc
#undef public_6f9123b
#undef public_6f9123d
#undef public_6f912a9
#undef public_6f912c4
#undef public_6f912dd
#undef public_6f912ea
