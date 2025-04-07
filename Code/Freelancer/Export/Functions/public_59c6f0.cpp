#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4d7b);

#define public_59c749 _public_59c749
#define public_59c74b _public_59c74b
#define public_59c78b _public_59c78b

PROC_DECLARE(0x59c6f0, internal_59c6f0, public_59c6f0);
extern "C" NAKED register_t __cdecl internal_59c6f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4d7b @0x59c6f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4d7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x538
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_59c749
        mov ecx, esi
        call public_57b8d0
        mov dword ptr ds : [esi], offset public_5e5bd4
        mov dword ptr ds : [esi+0x7C], offset public_5e5bc8
        mov dword ptr ds : [esi+0x498], offset public_5e5bc0
        jmp public_59c74b
        public_59c749 : nop
        xor esi, esi
        public_59c74b : nop
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
        jne public_59c78b
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
        public_59c78b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x59c6f0)
    }
}

#undef public_59c749
#undef public_59c74b
#undef public_59c78b
