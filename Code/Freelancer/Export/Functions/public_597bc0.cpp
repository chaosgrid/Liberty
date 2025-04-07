#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4afb);

#define public_597c0f _public_597c0f
#define public_597c11 _public_597c11
#define public_597c51 _public_597c51

PROC_DECLARE(0x597bc0, internal_597bc0, public_597bc0);
extern "C" NAKED register_t __cdecl internal_597bc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4afb @0x597bc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4afb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x430
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_597c0f
        mov ecx, esi
        call public_595420
        mov dword ptr ds : [esi], offset public_5e5684
        mov dword ptr ds : [esi+0x7C], offset public_5e5674
        jmp public_597c11
        public_597c0f : nop
        xor esi, esi
        public_597c11 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_597c51
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_597c51 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x597bc0)
    }
}

#undef public_597c0f
#undef public_597c11
#undef public_597c51
