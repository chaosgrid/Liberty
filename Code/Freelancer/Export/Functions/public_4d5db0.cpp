#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4d5db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_4d5e18 _public_4d5e18

PROC_DECLARE(0x4d5db0, internal_4d5db0, public_4d5db0);
extern "C" NAKED register_t __cdecl internal_4d5db0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push 1
        push 0
        push 1
        push 0
        push 0x3F666666
        push 0x3D23D70A
        push 0x3EF851EC
        push 0
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_5d01a8 @0x4d5dd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d7fb4 @0x4d5dd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7fb4
        mov esi, ecx
        mov dword ptr ss : [esp+0x30], 0xBE78D4FE
        mov dword ptr ss : [esp+0x34], 0xBE86A7F0
        mov dword ptr ss : [esp+0x38], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x32C], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4d5e18
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], 0
        public_4d5e18 : nop
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov eax, dword ptr ds : [public_67eca8]
        push 0x30
        lea edx, ds:[esi+0x330]
        push edx
        push 0x585
        push eax
        call public_4347e0
        mov edx, dword ptr ds : [public_67eca8]
        push 0x30
        lea ecx, ds:[esi+0x390]
        push ecx
        push 0x64F
        push edx
        call public_4347e0
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0x20
        push eax
        push ecx
        mov ecx, esi
        call public_4b5060
        test al, al
        setne al
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4d5db0)
    }
}

#undef public_4d5e18
