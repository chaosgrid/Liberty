#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff3c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6700e81);

#define public_66ff3f8 _public_66ff3f8
#define public_66ff408 _public_66ff408

PROC_DECLARE(0x66ff3c0, internal_66ff3c0, public_66ff3c0);
extern "C" NAKED register_t __cdecl internal_66ff3c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700e81 @0x66ff3c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700e81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0xC]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], 2
        je public_66ff3f8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], edi
        public_66ff3f8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_66ff408
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], edi
        public_66ff408 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov dword ptr ds : [esi+0x74], edi
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x66ff3c0)
    }
}

#undef public_66ff3f8
#undef public_66ff408
