#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1830);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab4cb);

#define public_6ee190d _public_6ee190d
#define public_6ee195a _public_6ee195a
#define public_6ee1a65 _public_6ee1a65
#define public_6ee1a73 _public_6ee1a73
#define public_6ee1a81 _public_6ee1a81
#define public_6ee1b2d _public_6ee1b2d
#define public_6ee1b2f _public_6ee1b2f
#define public_6ee1b32 _public_6ee1b32

PROC_DECLARE(0x6ee1830, internal_6ee1830, public_6ee1830);
extern "C" NAKED register_t __cdecl internal_6ee1830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab4cb @0x6ee1832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab4cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1BC
        mov eax, dword ptr ss : [esp+0x1D0]
        mov dl, byte ptr ss : [esp+0xB]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x1D8]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x1D8]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x1E0]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x1DC], edi
        mov dword ptr ds : [ebx], offset public_6fb7264
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ee1b2f
        push 0x800
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee1b2d
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ee1b32
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6ee190d
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 4
        jae public_6ee195a
        public_6ee190d : nop
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
/*FIXUP public_6ee195a : nop
        push offset public_6fb7244 @0x6ee195a*/
  FIXUP public_6ee195a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7244
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x104], 0
        mov byte ptr ss : [esp+0x108], 0
        call public_6ead640
        mov eax, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ee1981*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x10C]
        push ecx
        lea edx, ss:[esp+0x150]
        push edx
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x44]
        lea eax, ss:[esp+0x48]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push eax
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
/*FIXUP push offset public_6fb6348 @0x6ee19ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x40], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        test eax, eax
        jne public_6ee1a65
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        test eax, 0xC40
        je public_6ee1a81
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x40]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6ee1a73
        public_6ee1a65 : nop
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6ee1a73 : nop
        push offset public_6fb6064 @0x6ee1a73*/
  FIXUP public_6ee1a73 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x38]
        call public_6eec250
        public_6ee1a81 : nop
        lea edx, ss:[esp+0xC0]
        mov ecx, 0x11
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0xBC]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6ba0 @0x6ee1ab8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6ba0
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x7C], 0
        mov byte ptr ss : [esp+0x80], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ee1ada*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x194]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0xD0]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0xCC]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        jmp public_6ee1b32
        public_6ee1b2d : nop
        xor edi, edi
        public_6ee1b2f : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ee1b32 : nop
        mov ecx, dword ptr ss : [esp+0x1CC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C8
        ret 0xC
        UNREACHABLE_TRAP(0x6ee1830)
    }
}

#undef public_6ee190d
#undef public_6ee195a
#undef public_6ee1a65
#undef public_6ee1a73
#undef public_6ee1a81
#undef public_6ee1b2d
#undef public_6ee1b2f
#undef public_6ee1b32
