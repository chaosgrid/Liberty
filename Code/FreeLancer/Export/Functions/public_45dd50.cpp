#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba34b);

#define public_45dd92 _public_45dd92
#define public_45dd94 _public_45dd94
#define public_45ddd4 _public_45ddd4

PROC_DECLARE(0x45dd50, internal_45dd50, public_45dd50);
extern "C" NAKED register_t __cdecl internal_45dd50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba34b @0x45dd52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba34b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x530
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_45dd92
        mov ecx, eax
        call public_45b700
        mov esi, eax
        jmp public_45dd94
        public_45dd92 : nop
        xor esi, esi
        public_45dd94 : nop
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
        jne public_45ddd4
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
        public_45ddd4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x45dd50)
    }
}

#undef public_45dd92
#undef public_45dd94
#undef public_45ddd4
