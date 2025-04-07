#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7170);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f5b000);
CLANG_FORWARD_PROC_SYMBOL(public_6f5b4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5b690);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf89b);

#define public_6f5b518 _public_6f5b518
#define public_6f5b5ea _public_6f5b5ea
#define public_6f5b60e _public_6f5b60e
#define public_6f5b65e _public_6f5b65e
#define public_6f5b67a _public_6f5b67a

PROC_DECLARE(0x6f5b4e0, internal_6f5b4e0, public_6f5b4e0);
extern "C" NAKED register_t __cdecl internal_6f5b4e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf89b @0x6f5b4e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf89b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_6f5b67a
        push ebx
        push esi
        push edi
        xor ebx, ebx
        public_6f5b518 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        cmp dword ptr ds : [ecx+0x10], ebx
        je public_6f5b65e
        mov edx, ecx
        mov esi, dword ptr ds : [edx+0x10]
        mov ecx, esi
        call public_6f57710
        test al, al
        jne public_6f5b65e
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        call public_6f478c0
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_6eb70a0
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, esi
        call public_6eb7170
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ss : [esp+0x34], cl
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov dword ptr ss : [esp+0x98], ebx
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov al, byte ptr ss : [esp+0xF]
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea ecx, ss:[esp+0xF]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        push edi
        mov byte ptr ss : [esp+0xB0], 2
        call public_6f5b000
        mov al, byte ptr ss : [esp+0x27]
        add esp, 0x18
        cmp al, bl
        jne public_6f5b60e
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f5b5ea
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        public_6f5b5ea : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, dword ptr ss : [esp+0x54]
        lea edx, ss:[esp+0x70]
        push edx
        push esi
        push edi
        call public_6f5b690
        public_6f5b60e : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0xA4], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        public_6f5b65e : nop
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0bc0]
        jne public_6f5b518
        pop edi
        pop esi
        pop ebx
        public_6f5b67a : nop
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6f5b4e0)
    }
}

#undef public_6f5b518
#undef public_6f5b5ea
#undef public_6f5b60e
#undef public_6f5b65e
#undef public_6f5b67a
