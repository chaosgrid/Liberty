#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_620f600);
CLANG_FORWARD_PROC_SYMBOL(public_6244120);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247bfb);

#define public_620f669 _public_620f669
#define public_620f66b _public_620f66b

PROC_DECLARE(0x620f600, internal_620f600, public_620f600);
extern "C" NAKED register_t __cdecl internal_620f600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247bfb @0x620f602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247bfb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x140
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_620f669
        lea edi, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_624b8b0
        mov ecx, edi
        call public_620f4e0
        mov dword ptr ds : [esi+0xB8], esi
        mov dword ptr ds : [esi+0x24], esi
        mov dword ptr ds : [esi], offset public_624c1b8
        mov dword ptr ds : [edi], offset public_624c128
        mov dword ptr ds : [esi+0x13C], 1
        jmp public_620f66b
        public_620f669 : nop
        xor esi, esi
        public_620f66b : nop
        mov ebx, dword ptr ss : [esp+0x20]
        lea edi, ds:[esi+0xC]
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6244120
        mov eax, dword ptr ds : [ebx+0xE8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+0xE8], eax
        pop edi
        xor eax, eax
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x620f600)
    }
}

#undef public_620f669
#undef public_620f66b
