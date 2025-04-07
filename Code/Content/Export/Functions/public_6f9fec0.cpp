#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0050);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1f11);

#define public_6f9ff03 _public_6f9ff03
#define public_6f9ff0b _public_6f9ff0b
#define public_6f9ff11 _public_6f9ff11
#define public_6f9ff30 _public_6f9ff30
#define public_6f9ff38 _public_6f9ff38
#define public_6f9ff42 _public_6f9ff42
#define public_6f9ff61 _public_6f9ff61
#define public_6f9ff69 _public_6f9ff69
#define public_6f9ff6f _public_6f9ff6f
#define public_6f9ff90 _public_6f9ff90
#define public_6f9ff98 _public_6f9ff98
#define public_6f9ffa2 _public_6f9ffa2

PROC_DECLARE(0x6f9fec0, internal_6f9fec0, public_6f9fec0);
extern "C" NAKED register_t __cdecl internal_6f9fec0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1f11 @0x6f9fec2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1f11
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov dl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [esi+0xC], dl
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f9ff03
        xor eax, eax
        jmp public_6f9ff0b
        public_6f9ff03 : nop
        mov eax, dword ptr ds : [edi+0x14]
        sub eax, ecx
        sar eax, 2
        public_6f9ff0b : nop
        test eax, eax
        jge public_6f9ff11
        xor eax, eax
        public_6f9ff11 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [esi+0x10], eax
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [edi+0x10]
        add esp, 4
        cmp ecx, edx
        je public_6f9ff42
        lea ebx, ds:[ebx]
        public_6f9ff30 : nop
        test eax, eax
        je public_6f9ff38
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6f9ff38 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f9ff30
        public_6f9ff42 : nop
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov cl, byte ptr ds : [edi+0x1C]
        mov byte ptr ds : [esi+0x1C], cl
        mov ecx, dword ptr ds : [edi+0x20]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], 0
        jne public_6f9ff61
        xor eax, eax
        jmp public_6f9ff69
        public_6f9ff61 : nop
        mov eax, dword ptr ds : [edi+0x24]
        sub eax, ecx
        sar eax, 2
        public_6f9ff69 : nop
        test eax, eax
        jge public_6f9ff6f
        xor eax, eax
        public_6f9ff6f : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [esi+0x20], eax
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edi+0x20]
        add esp, 4
        cmp ecx, edx
        je public_6f9ffa2
        lea esp, ss:[esp]
        public_6f9ff90 : nop
        test eax, eax
        je public_6f9ff98
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6f9ff98 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f9ff90
        public_6f9ffa2 : nop
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov al, byte ptr ds : [edi+0x2C]
        mov byte ptr ds : [esi+0x2C], al
        mov cl, byte ptr ds : [edi+0x34]
        lea ebp, ds:[edi+0x34]
        lea ebx, ds:[esi+0x34]
        push 0x14
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [ebx], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        add esp, 4
        mov dword ptr ds : [ebx+8], 0
        mov edx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], edx
        call public_6f1df30
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        mov ebp, eax
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [ebp]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, ebx
        call public_6fa0350
        mov dword ptr ds : [esi+0x30], offset public_6fbd50c
        lea eax, ds:[edi+0x40]
        push eax
        lea ecx, ds:[esi+0x40]
        mov byte ptr ss : [esp+0x28], 2
        call public_6fa0050
        mov ecx, dword ptr ds : [edi+0x110]
        pop edi
        mov dword ptr ds : [esi+0x110], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], offset public_6fbd550
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f9fec0)
    }
}

#undef public_6f9ff03
#undef public_6f9ff0b
#undef public_6f9ff11
#undef public_6f9ff30
#undef public_6f9ff38
#undef public_6f9ff42
#undef public_6f9ff61
#undef public_6f9ff69
#undef public_6f9ff6f
#undef public_6f9ff90
#undef public_6f9ff98
#undef public_6f9ffa2
