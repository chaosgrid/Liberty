#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ff30);
CLANG_FORWARD_PROC_SYMBOL(public_62afda0);
CLANG_FORWARD_PROC_SYMBOL(public_62aff80);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_JUMP_SYMBOL(public_63945fb);

#define public_62b2a6a _public_62b2a6a

PROC_DECLARE(0x62b2a20, internal_62b2a20, public_62b2a20);
extern "C" NAKED register_t __cdecl internal_62b2a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63945fb @0x62b2a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63945fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x78
        mov edi, ecx
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], esi
        je public_62b2a6a
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push ecx
        mov ecx, eax
        call public_62afda0
        mov esi, eax
        public_62b2a6a : nop
        push esi
        lea ecx, ds:[edi+0x2B0]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_629ff30
        mov ecx, esi
        call public_62aff80
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x62b2a20)
    }
}

#undef public_62b2a6a
