#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c18bb);

#define public_55fd62 _public_55fd62
#define public_55fd64 _public_55fd64
#define public_55fda4 _public_55fda4

PROC_DECLARE(0x55fd20, internal_55fd20, public_55fd20);
extern "C" NAKED register_t __cdecl internal_55fd20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c18bb @0x55fd22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c18bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x350
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_55fd62
        mov ecx, eax
        call public_55e930
        mov esi, eax
        jmp public_55fd64
        public_55fd62 : nop
        xor esi, esi
        public_55fd64 : nop
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
        jne public_55fda4
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
        public_55fda4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x55fd20)
    }
}

#undef public_55fd62
#undef public_55fd64
#undef public_55fda4
