#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42300);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59126);

#define public_6f4233f _public_6f4233f
#define public_6f4235e _public_6f4235e

PROC_DECLARE(0x6f42300, internal_6f42300, public_6f42300);
extern "C" NAKED register_t __cdecl internal_6f42300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59126 @0x6f42302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59126
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0xEC]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_6f4233f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xEC], 0
        public_6f4233f : nop
        mov eax, dword ptr ds : [esi+0xE8]
        test eax, eax
        mov byte ptr ss : [esp+0x10], 0
        je public_6f4235e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xE8], 0
        public_6f4235e : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6f405e0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f42300)
    }
}

#undef public_6f4233f
#undef public_6f4235e
