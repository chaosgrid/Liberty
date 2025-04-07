#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222af0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248c81);

#define public_6222b2e _public_6222b2e
#define public_6222b41 _public_6222b41

PROC_DECLARE(0x6222af0, internal_6222af0, public_6222af0);
extern "C" NAKED register_t __cdecl internal_6222af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248c81 @0x6222af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248c81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6222b41
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6222b2e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6222b2e : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        pop edi
        public_6222b41 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6222af0)
    }
}

#undef public_6222b2e
#undef public_6222b41
