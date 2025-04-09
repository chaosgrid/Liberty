#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e30);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8381);

#define public_401e77 _public_401e77

PROC_DECLARE(0x401e30, internal_401e30, public_401e30);
extern "C" NAKED register_t __cdecl internal_401e30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8381 @0x401e32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8381
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
        je public_401e77
        mov ecx, esi
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        public_401e77 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x401e30)
    }
}

#undef public_401e77
