#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bfb60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd6bb);

#define public_4c3852 _public_4c3852
#define public_4c3854 _public_4c3854
#define public_4c3894 _public_4c3894

PROC_DECLARE(0x4c3810, internal_4c3810, public_4c3810);
extern "C" NAKED register_t __cdecl internal_4c3810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd6bb @0x4c3812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd6bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x440
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_4c3852
        mov ecx, eax
        call public_4bfb60
        mov esi, eax
        jmp public_4c3854
        public_4c3852 : nop
        xor esi, esi
        public_4c3854 : nop
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
        jne public_4c3894
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
        public_4c3894 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4c3810)
    }
}

#undef public_4c3852
#undef public_4c3854
#undef public_4c3894
