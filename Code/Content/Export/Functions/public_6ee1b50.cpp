#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1b50);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab4eb);

#define public_6ee1c66 _public_6ee1c66
#define public_6ee1c74 _public_6ee1c74
#define public_6ee1c82 _public_6ee1c82
#define public_6ee1d12 _public_6ee1d12
#define public_6ee1e49 _public_6ee1e49
#define public_6ee1ea9 _public_6ee1ea9
#define public_6ee1f1b _public_6ee1f1b
#define public_6ee1f1d _public_6ee1f1d
#define public_6ee1f20 _public_6ee1f20

PROC_DECLARE(0x6ee1b50, internal_6ee1b50, public_6ee1b50);
extern "C" NAKED register_t __cdecl internal_6ee1b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab4eb @0x6ee1b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab4eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x23C
        mov eax, dword ptr ss : [esp+0x250]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x258]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x1F]
        mov dword ptr ds : [ebx+8], ecx
        xor edi, edi
        lea ebp, ds:[ebx+0x14]
        lea esi, ds:[ebx+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x10], edi
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x25C]
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x260]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x25C], edi
        mov dword ptr ds : [ebx], offset public_6fb72ac
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ee1f1d
        push 0x800
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee1f1b
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x78], edi
        mov byte ptr ss : [esp+0x7C], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        test eax, eax
        jne public_6ee1c66
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        test eax, 0xC40
        je public_6ee1c82
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x7C]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6ee1c74
        public_6ee1c66 : nop
        lea ecx, ss:[esp+0x70]
        push ecx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6ee1c74 : nop
        push offset public_6fb6064 @0x6ee1c74*/
  FIXUP public_6ee1c74 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x74]
        call public_6eec250
        public_6ee1c82 : nop
        mov eax, dword ptr ss : [esp+0x70]
        test eax, eax
        je public_6ee1f20
        call dword ptr ds : [public_6fb3370]
        shl eax, 1
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        sub eax, 0
        je public_6ee1e49
        dec eax
        jne public_6ee1f20
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        call public_6eb6b30
        cmp eax, 4
        jae public_6ee1d12
        push 0x10
        call public_6fa912a
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+4]
        push edi
        push edx
        push eax
        mov ecx, ebp
        call public_6eed270
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+0x10]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ee1d12 : nop
        push offset public_6fb7244 @0x6ee1d12*/
  FIXUP public_6ee1d12 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7244
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0xB8], 0
        mov byte ptr ss : [esp+0xBC], 0
        call public_6ead640
        mov eax, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ee1d39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0xC0]
        push ecx
        lea edx, ss:[esp+0x18C]
        push edx
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        lea eax, ss:[esp+0x40]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push eax
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
/*FIXUP push offset public_6fb6348 @0x6ee1d84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        lea edx, ss:[esp+0x30]
        mov ecx, 0x11
        lea esi, ss:[esp+0x70]
        lea edi, ss:[esp+0x2C]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb7290 @0x6ee1dd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7290
        lea ecx, ss:[esp+0x140]
        mov dword ptr ss : [esp+0x140], 0
        mov byte ptr ss : [esp+0x144], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ee1dfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x148]
        push eax
        lea ecx, ss:[esp+0x1D0]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x40]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        jmp public_6ee1f20
        public_6ee1e49 : nop
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A39
        call public_6eb6b30
        cmp eax, 1
        jae public_6ee1ea9
        push 4
        call public_6fa912a
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+4]
        push edi
        push edx
        push eax
        mov ecx, ebp
        call public_6eed270
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ee1ea9 : nop
        push offset public_6fb7278 @0x6ee1ea9*/
  FIXUP public_6ee1ea9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7278
        lea ecx, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0xFC], 0
        mov byte ptr ss : [esp+0x100], 0
        call public_6ead640
        mov eax, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ee1ed0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x104]
        push ecx
        lea edx, ss:[esp+0x214]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x40]
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        jmp public_6ee1f20
        public_6ee1f1b : nop
        xor edi, edi
        public_6ee1f1d : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ee1f20 : nop
        mov ecx, dword ptr ss : [esp+0x24C]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x248
        ret 0xC
        UNREACHABLE_TRAP(0x6ee1b50)
    }
}

#undef public_6ee1c66
#undef public_6ee1c74
#undef public_6ee1c82
#undef public_6ee1d12
#undef public_6ee1e49
#undef public_6ee1ea9
#undef public_6ee1f1b
#undef public_6ee1f1d
#undef public_6ee1f20
