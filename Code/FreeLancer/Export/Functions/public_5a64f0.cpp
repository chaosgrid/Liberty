#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_5a70b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c51da);

#define public_5a65fa _public_5a65fa
#define public_5a6606 _public_5a6606

PROC_DECLARE(0x5a64f0, internal_5a64f0, public_5a64f0);
extern "C" NAKED register_t __cdecl internal_5a64f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c51da @0x5a64f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c51da
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov al, byte ptr ss : [esp+0x58]
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x30], al
        call dword ptr ds : [public_5c6fb8]
        mov esi, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x40], esi
        call dword ptr ds : [public_5c7048]
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_67e770
        mov byte ptr ss : [esp+0x60], 1
        call public_5a70b0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_46d660
        mov edi, dword ptr ss : [esp+0x14]
        push 1
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x5C], bl
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fb8]
        mov cl, byte ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [public_5c705c]
        lea eax, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x1C], cl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov ecx, dword ptr ds : [edx]
        push ecx
        push ebx
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c7060]
        push 1
        push esi
        mov dword ptr ss : [esp+0x60], 2
        call public_46aeb0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        cmp eax, ebx
        je public_5a6606
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5a65fa
        cmp cl, 0xFF
        je public_5a65fa
        pop edi
        dec cl
        pop esi
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        public_5a65fa : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a6606 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x5a64f0)
    }
}

#undef public_5a65fa
#undef public_5a6606
