#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

PROC_DECLARE(0x45abd0, internal_45abd0, public_45abd0);
extern "C" NAKED register_t __cdecl internal_45abd0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push 1
        push 0
        push 0
        push 0
        push 0x3FB33333
        push 0x3D75C28F
        push 0x3F733333
        push 0
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_5ce91c @0x45abf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5ce910 @0x45abf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce910
        mov esi, ecx
        mov dword ptr ss : [esp+0x30], 0xBEE66666
        mov dword ptr ss : [esp+0x34], 0x3E75C28F
        mov dword ptr ss : [esp+0x38], 0
        call public_5a0e30
        push 1
/*FIXUP push offset public_679b90 @0x45ac1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b90
        mov dword ptr ds : [esi+0x32C], eax
        mov edx, dword ptr ds : [eax]
        push 0x33
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x32C]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+0x60]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x330], 0x40000000
        mov dword ptr ds : [esi+0x334], 0x40800000
        call public_4b5060
        test al, al
        setne al
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x45abd0)
    }
}
