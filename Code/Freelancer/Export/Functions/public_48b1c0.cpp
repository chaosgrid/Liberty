#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc33b);

#define public_48b226 _public_48b226
#define public_48b228 _public_48b228
#define public_48b268 _public_48b268

PROC_DECLARE(0x48b1c0, internal_48b1c0, public_48b1c0);
extern "C" NAKED register_t __cdecl internal_48b1c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc33b @0x48b1c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc33b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x36C
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_48b226
        mov ecx, esi
        call public_59f860
        mov dword ptr ds : [esi], offset public_5d24f4
        mov dword ptr ds : [esi+0x7C], offset public_5d24e4
        mov dword ptr ds : [public_671ff4], esi
        mov dword ptr ds : [esi+0x364], 0
        mov byte ptr ds : [esi+0x368], 0
        jmp public_48b228
        public_48b226 : nop
        xor esi, esi
        public_48b228 : nop
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
        jne public_48b268
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
        public_48b268 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x48b1c0)
    }
}

#undef public_48b226
#undef public_48b228
#undef public_48b268
