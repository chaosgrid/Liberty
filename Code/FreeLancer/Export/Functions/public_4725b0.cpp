#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_577b40);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_472671 _public_472671
#define public_472770 _public_472770

PROC_DECLARE(0x4725b0, internal_4725b0, public_4725b0);
extern "C" NAKED register_t __cdecl internal_4725b0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push esi
        push edi
        xor edi, edi
        push edi
/*FIXUP push offset public_5c95fc @0x4725b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        mov esi, ecx
        call public_41dde0
        add esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        push edi
        push edi
        mov ebx, 1
        push ebx
        push edi
        push ebx
        push ebx
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x44]
        push ecx
        push edi
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_5d076c @0x4725e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d076c
/*FIXUP push offset public_5d0764 @0x4725ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0764
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x64], edi
        mov dword ptr ss : [esp+0x68], edi
        mov dword ptr ss : [esp+0x6C], 0xBFD9999A
        call public_5a0db0
        push edi
        push edi
        push ebx
        push edi
        push 0x3FA00000
        push 0x3E08B439
        push 0x3F07AE14
        push edi
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d01a8 @0x472639*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d075c @0x47263e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d075c
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0e30
        mov dword ptr ds : [esi+0x334], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], bl
        je public_472671
        mov byte ptr ds : [eax+0x30], bl
        mov dword ptr ds : [eax+0x28], edi
        public_472671 : nop
        push edi
        push edi
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5ced30 @0x472680*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d074c @0x472685*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d074c
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3E083127
        mov dword ptr ss : [esp+0x4C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x3C], 0xBC449BA6
        mov dword ptr ss : [esp+0x40], 0xBD99999A
        mov dword ptr ss : [esp+0x44], 0xBF800000
        call public_5a0d00
        push edi
        push edi
        push ebx
        push 0x411
        push 0x3FA00000
        push 0x3D75C28F
        push 0x3E21CAC1
        push edi
        mov dword ptr ds : [esi+0x338], eax
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d0410 @0x4726e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d073c @0x4726e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d073c
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0xBCBC6A7F
        mov dword ptr ss : [esp+0x54], 0xBDB851EC
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0e30
        push ebx
        push edi
        push ebx
        push 0x3E8
        push 0x3F99999A
        push 0x3D75C28F
        push 0x3EE66666
        push edi
        lea ecx, ss:[esp+0x44]
        push ecx
/*FIXUP push offset public_5ce91c @0x47272a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d0728 @0x47272f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0728
        mov ecx, esi
        mov dword ptr ds : [esi+0x33C], eax
        mov dword ptr ss : [esp+0x50], 0xBE6C8B44
        mov dword ptr ss : [esp+0x54], 0x3DEF9DB2
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0e30
        mov dword ptr ds : [esi+0x340], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], bl
        je public_472770
        mov byte ptr ds : [eax+0x30], bl
        mov dword ptr ds : [eax+0x28], edi
        public_472770 : nop
        mov ecx, dword ptr ds : [esi+0x340]
        mov edx, dword ptr ds : [ecx]
        push edi
/*FIXUP push offset public_5d06e8 @0x472779*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d06e8
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ds : [esi+0x70], 0x6E
        mov dword ptr ds : [esi+0x78], 6
        call public_4a7670
        push esi
        mov byte ptr ds : [esi+0x330], al
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
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        mov ecx, esi
        call public_4b5060
        pop edi
        test al, al
        pop esi
        setne al
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x4725b0)
    }
}

#undef public_472671
#undef public_472770
