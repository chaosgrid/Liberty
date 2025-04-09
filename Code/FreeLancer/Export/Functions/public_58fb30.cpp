#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58c6e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c488b);

#define public_58fb72 _public_58fb72
#define public_58fb74 _public_58fb74
#define public_58fbb4 _public_58fbb4

PROC_DECLARE(0x58fb30, internal_58fb30, public_58fb30);
extern "C" NAKED register_t __cdecl internal_58fb30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c488b @0x58fb32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c488b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x578
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_58fb72
        mov ecx, eax
        call public_58c6e0
        mov esi, eax
        jmp public_58fb74
        public_58fb72 : nop
        xor esi, esi
        public_58fb74 : nop
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
        jne public_58fbb4
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
        public_58fbb4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x58fb30)
    }
}

#undef public_58fb72
#undef public_58fb74
#undef public_58fbb4
