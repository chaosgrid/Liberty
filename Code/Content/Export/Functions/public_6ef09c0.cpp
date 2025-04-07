#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef09c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cac0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac008);

#define public_6ef0abd _public_6ef0abd
#define public_6ef0acf _public_6ef0acf
#define public_6ef0ae8 _public_6ef0ae8

PROC_DECLARE(0x6ef09c0, internal_6ef09c0, public_6ef09c0);
extern "C" NAKED register_t __cdecl internal_6ef09c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac008 @0x6ef09c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac008
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x14]
        xor edi, edi
        call public_6f9cac0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [esp+0x20], edx
        mov ecx, dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x28], edx
        mov ecx, dword ptr ds : [eax+0x4C]
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ds : [eax+0x60]
        mov dword ptr ss : [esp+0x30], edx
        lea ecx, ds:[eax+0x54]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x38], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x40], edx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+8], edi
        mov edx, dword ptr ds : [eax+0x64]
        push edx
        mov dword ptr ss : [esp+0x54], edi
        call dword ptr ds : [public_6fb3358]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [public_6fcf25c]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        add eax, 0x68
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_6ef0abd
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ds:[eax+0x7C]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        add ecx, 4
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+8]
        add ecx, 0x3C
        push ecx
        lea ecx, ds:[eax+0x24]
        call dword ptr ds : [public_6fb3088]
        public_6ef0abd : nop
        mov esi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jne public_6ef0acf
        mov edi, 2
        public_6ef0acf : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        je public_6ef0ae8
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        public_6ef0ae8 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x6ef09c0)
    }
}

#undef public_6ef0abd
#undef public_6ef0acf
#undef public_6ef0ae8
