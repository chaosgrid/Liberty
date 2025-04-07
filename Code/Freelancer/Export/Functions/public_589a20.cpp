#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587e40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c44eb);

#define public_589a62 _public_589a62
#define public_589a64 _public_589a64
#define public_589aa4 _public_589aa4

PROC_DECLARE(0x589a20, internal_589a20, public_589a20);
extern "C" NAKED register_t __cdecl internal_589a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c44eb @0x589a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c44eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x420
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_589a62
        mov ecx, eax
        call public_587e40
        mov esi, eax
        jmp public_589a64
        public_589a62 : nop
        xor esi, esi
        public_589a64 : nop
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
        jne public_589aa4
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
        public_589aa4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x589a20)
    }
}

#undef public_589a62
#undef public_589a64
#undef public_589aa4
