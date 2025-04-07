#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f336a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f60340);
CLANG_FORWARD_PROC_SYMBOL(public_6f732e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73680);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb007c);

#define public_6f73351 _public_6f73351
#define public_6f734ec _public_6f734ec
#define public_6f734ee _public_6f734ee
#define public_6f73507 _public_6f73507
#define public_6f735f5 _public_6f735f5
#define public_6f73662 _public_6f73662

PROC_DECLARE(0x6f732e0, internal_6f732e0, public_6f732e0);
extern "C" NAKED register_t __cdecl internal_6f732e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb007c @0x6f732e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb007c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x514
        push ebx
        mov ebx, dword ptr ss : [esp+0x528]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push ebx
        lea ecx, ss:[esp+0x24]
        call public_6f73680
        mov ecx, dword ptr ds : [ebx+0x7C]
        mov al, byte ptr ds : [ebx+0x78]
        mov dl, byte ptr ds : [ebx+0x80]
        lea esi, ds:[ebx+0x80]
        mov dword ptr ss : [esp+0x9C], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x52C], 0
        mov byte ptr ss : [esp+0x98], al
        mov byte ptr ss : [esp+0xA0], dl
        call public_6eae300
        test eax, eax
        jge public_6f73351
        xor eax, eax
        public_6f73351 : nop
        shl eax, 3
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ecx
        push esi
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0xB0], eax
        call public_6ed2700
        mov dword ptr ss : [esp+0xA8], eax
        mov dword ptr ss : [esp+0xAC], eax
        lea esi, ds:[ebx+0x90]
        mov ecx, 9
        lea edi, ss:[esp+0xB0]
        rep movsd
        lea ecx, ds:[ebx+0xB4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xDC], ecx
        mov dword ptr ss : [esp+0xD4], edx
        mov edx, dword ptr ds : [ebx+0xC0]
        mov dword ptr ss : [esp+0xD8], eax
        mov eax, dword ptr ds : [ebx+0xF8]
        mov dword ptr ss : [esp+0xE0], edx
        lea esi, ds:[ebx+0xC4]
        mov ecx, 0xD
        lea edi, ss:[esp+0xE4]
        rep movsd
        lea ecx, ds:[ebx+0xFC]
        push ecx
        lea ecx, ss:[esp+0x120]
        mov byte ptr ss : [esp+0x530], 1
        mov dword ptr ss : [esp+0x11C], eax
        call public_6f21fd0
        mov edx, dword ptr ds : [ebx+0x100]
        mov ecx, dword ptr ds : [ebx+0x108]
        mov eax, dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [esp+0x120], edx
        mov edx, dword ptr ds : [ebx+0x10C]
        mov dword ptr ss : [esp+0x128], ecx
        mov ecx, dword ptr ds : [ebx+0x114]
        mov dword ptr ss : [esp+0x12C], edx
        mov dword ptr ss : [esp+0x124], eax
        mov eax, dword ptr ds : [ebx+0x110]
        lea edx, ds:[ebx+0x118]
        mov dword ptr ss : [esp+0x134], ecx
        push edx
        lea ecx, ss:[esp+0x13C]
        mov byte ptr ss : [esp+0x530], 2
        mov dword ptr ss : [esp+0x134], eax
        call public_6f0deb0
        mov eax, dword ptr ds : [ebx+0x4FC]
        lea esi, ds:[ebx+0x124]
        mov ecx, 0xF6
        lea edi, ss:[esp+0x144]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x500]
        mov dword ptr ss : [esp+0x51C], eax
        mov dword ptr ss : [esp+0x520], ecx
        mov eax, dword ptr ss : [esp+0x538]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x52C], 3
        mov dword ptr ss : [esp+0x5C], ebp
        jne public_6f735f5
        push 0x5B0
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x52C], 4
        je public_6f734ec
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, eax
        call public_6f336a0
        jmp public_6f734ee
        public_6f734ec : nop
        xor eax, eax
        public_6f734ee : nop
        mov ecx, dword ptr ss : [esp+0x53C]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x52C], 3
        mov dword ptr ss : [esp+0x14], eax
        je public_6f73507
        mov dword ptr ds : [ecx], eax
        public_6f73507 : nop
        mov edi, dword ptr ss : [ebp+0xE0]
        mov eax, dword ptr ds : [edi+4]
        lea esi, ss:[ebp+0xDC]
        push eax
        push edi
        mov ecx, esi
        call public_6f93790
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov ebp, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        push 0x1010
        inc ebp
        push ecx
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x24], ebx
        call public_6f24070
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x13C]
        mov dword ptr ss : [esp+0x530], 7
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x13C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x144]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x13C]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x13C], ebx
        mov dword ptr ss : [esp+0x140], ebx
        mov byte ptr ss : [esp+0x52C], 6
        call public_6f28e10
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x52C], 5
        call public_6eec8d0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x52C], 0xFFFFFFFF
        call public_6ef4ab0
        xor eax, eax
        jmp public_6f73662
        public_6f735f5 : nop
        mov edx, dword ptr ss : [esp+0x53C]
        push edx
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        call public_6f60340
        add esp, 0xC
        mov esi, eax
        lea ecx, ss:[esp+0x138]
        mov dword ptr ss : [esp+0x52C], 0xA
        call public_6f15350
        lea ecx, ss:[esp+0x11C]
        mov byte ptr ss : [esp+0x52C], 9
        call public_6f28e10
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x52C], 8
        call public_6eec8d0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x52C], 0xFFFFFFFF
        call public_6ef4ab0
        mov eax, esi
        public_6f73662 : nop
        mov ecx, dword ptr ss : [esp+0x524]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x520
        ret 0xC
        UNREACHABLE_TRAP(0x6f732e0)
    }
}

#undef public_6f73351
#undef public_6f734ec
#undef public_6f734ee
#undef public_6f73507
#undef public_6f735f5
#undef public_6f73662
