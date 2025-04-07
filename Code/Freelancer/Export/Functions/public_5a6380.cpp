#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_46aa10);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_5a70b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c51aa);

#define public_5a63ec _public_5a63ec
#define public_5a64c9 _public_5a64c9
#define public_5a64d5 _public_5a64d5

PROC_DECLARE(0x5a6380, internal_5a6380, public_5a6380);
extern "C" NAKED register_t __cdecl internal_5a6380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c51aa @0x5a6382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c51aa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov al, byte ptr ss : [esp+0x60]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        xor ebx, ebx
        push esi
        push ebp
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5a63ec
        mov ecx, dword ptr ss : [esp+0x20]
        push esi
        push ebp
        push ecx
        call public_41d8a0
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c7054]
        public_5a63ec : nop
        push edi
        mov dl, byte ptr ss : [esp+0x70]
        push ebx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x60], ebx
        mov byte ptr ss : [esp+0x34], dl
        call dword ptr ds : [public_5c6fb8]
        mov esi, dword ptr ss : [esp+0x6C]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x60], 1
        mov dword ptr ss : [esp+0x44], esi
        call dword ptr ds : [public_5c7048]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_67e770
        mov byte ptr ss : [esp+0x64], 2
        call public_5a70b0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_46d660
        mov edi, dword ptr ss : [esp+0x18]
        push 1
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x60], 1
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x60], bl
        call dword ptr ds : [public_5c6fb8]
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ds:[edi+0x10]
        call dword ptr ds : [public_5c7060]
        cmp byte ptr ss : [esp+0x70], bl
        sete dl
        push edx
        push esi
        push ebp
        call public_46aa10
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0xC
        cmp eax, ebx
        pop edi
        je public_5a64d5
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5a64c9
        cmp cl, 0xFF
        je public_5a64c9
        pop esi
        dec cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 0x10
        public_5a64c9 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a64d5 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 0x10
        UNREACHABLE_TRAP(0x5a6380)
    }
}

#undef public_5a63ec
#undef public_5a64c9
#undef public_5a64d5
