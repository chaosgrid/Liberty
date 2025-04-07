#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59aca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4d7b);

#define public_59cb02 _public_59cb02
#define public_59cb04 _public_59cb04
#define public_59cb44 _public_59cb44

PROC_DECLARE(0x59cac0, internal_59cac0, public_59cac0);
extern "C" NAKED register_t __cdecl internal_59cac0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4d7b @0x59cac2*/
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
        push 0x3F4
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_59cb02
        mov ecx, eax
        call public_59aca0
        mov esi, eax
        jmp public_59cb04
        public_59cb02 : nop
        xor esi, esi
        public_59cb04 : nop
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
        jne public_59cb44
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
        public_59cb44 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x59cac0)
    }
}

#undef public_59cb02
#undef public_59cb04
#undef public_59cb44
