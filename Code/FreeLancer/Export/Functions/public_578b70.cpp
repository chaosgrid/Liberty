#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_578caf _public_578caf

PROC_DECLARE(0x578b70, internal_578b70, public_578b70);
extern "C" NAKED register_t __cdecl internal_578b70()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push edi
        push 1
        push 0
        push 1
        push 0
        push 0x40000000
        push 0x3D23D70A
        push 0x3E4CCCCD
        push 0
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_5ce91c @0x578b93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5e4474 @0x578b98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4474
        mov esi, ecx
        mov dword ptr ss : [esp+0x34], 0xBDC28F5C
        mov dword ptr ss : [esp+0x38], 0x3C9D4952
        mov dword ptr ss : [esp+0x3C], 0
        call public_5a0e30
        lea ecx, ss:[esp+8]
        push ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        push 0
        mov dword ptr ds : [esi+0x33C], eax
        lea eax, ss:[esp+0x54]
        push eax
/*FIXUP push offset public_5e4444 @0x578be7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4444
/*FIXUP push offset public_5e4430 @0x578bec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4430
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
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x380], eax
        sub esp, 0xC
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x20
        lea edi, ds:[esi+0x340]
        push edi
        push 0x7C
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x33C]
        add esp, 0x10
        test ecx, ecx
        je public_578caf
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        public_578caf : nop
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
        UNREACHABLE_TRAP(0x578b70)
    }
}

#undef public_578caf
