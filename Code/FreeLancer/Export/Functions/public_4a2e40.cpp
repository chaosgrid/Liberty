#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48de20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcb4b);

#define public_4a2e82 _public_4a2e82
#define public_4a2e84 _public_4a2e84
#define public_4a2ec4 _public_4a2ec4

PROC_DECLARE(0x4a2e40, internal_4a2e40, public_4a2e40);
extern "C" NAKED register_t __cdecl internal_4a2e40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcb4b @0x4a2e42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcb4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x100C
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_4a2e82
        mov ecx, eax
        call public_48de20
        mov esi, eax
        jmp public_4a2e84
        public_4a2e82 : nop
        xor esi, esi
        public_4a2e84 : nop
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
        jne public_4a2ec4
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
        public_4a2ec4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4a2e40)
    }
}

#undef public_4a2e82
#undef public_4a2e84
#undef public_4a2ec4
