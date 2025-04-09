#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_577b40);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_47232b _public_47232b

PROC_DECLARE(0x472230, internal_472230, public_472230);
extern "C" NAKED register_t __cdecl internal_472230()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push edi
        push 0
/*FIXUP push offset public_5c95fc @0x472237*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        mov esi, ecx
        call public_41dde0
        add esp, 8
        lea eax, ss:[esp+8]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
        lea edx, ss:[esp+0x54]
        push edx
/*FIXUP push offset public_5d04a8 @0x47226b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04a8
/*FIXUP push offset public_5d049c @0x472270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d049c
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0xBF800000
        call public_5a0db0
        push 0
        push 0
        push 1
        push 0x736
        push 0x3FA00000
        push 0x3CF5C28F
        push 0x3EB851EC
        push 0
        lea eax, ss:[esp+0x40]
        push eax
/*FIXUP push offset public_5d0608 @0x4722e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d0450 @0x4722ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0450
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0x3D71A9FC
        mov dword ptr ss : [esp+0x54], 0xBF800000
        call public_5a0e30
        mov dword ptr ds : [esi+0x33C], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_47232b
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], 0
        public_47232b : nop
        mov dword ptr ds : [esi+0x70], 0x6E
        mov dword ptr ds : [esi+0x78], 6
        call public_4a7670
        push esi
        mov byte ptr ds : [esi+0x338], al
        call public_59d8c0
        lea edi, ds:[esi+0x32C]
        push edi
        call public_577b40
        add esp, 8
        push 0xF
        mov ecx, edi
        call public_5760d0
        push 0x11
        mov ecx, edi
        call public_5760d0
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        mov ecx, esi
        call public_4b5060
        test al, al
        pop edi
        setne al
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x472230)
    }
}

#undef public_47232b
