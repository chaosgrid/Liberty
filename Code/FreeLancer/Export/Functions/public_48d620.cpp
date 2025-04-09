#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48b2e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc41b);

#define public_48d662 _public_48d662
#define public_48d664 _public_48d664
#define public_48d6a4 _public_48d6a4

PROC_DECLARE(0x48d620, internal_48d620, public_48d620);
extern "C" NAKED register_t __cdecl internal_48d620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc41b @0x48d622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc41b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x45C
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_48d662
        mov ecx, eax
        call public_48b2e0
        mov esi, eax
        jmp public_48d664
        public_48d662 : nop
        xor esi, esi
        public_48d664 : nop
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
        jne public_48d6a4
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
        public_48d6a4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x48d620)
    }
}

#undef public_48d662
#undef public_48d664
#undef public_48d6a4
