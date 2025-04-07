#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41a20);
CLANG_FORWARD_JUMP_SYMBOL(public_6f590b6);

#define public_6f41a5f _public_6f41a5f
#define public_6f41a7e _public_6f41a7e

PROC_DECLARE(0x6f41a20, internal_6f41a20, public_6f41a20);
extern "C" NAKED register_t __cdecl internal_6f41a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f590b6 @0x6f41a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f590b6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x15C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_6f41a5f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x15C], 0
        public_6f41a5f : nop
        mov eax, dword ptr ds : [esi+0x158]
        test eax, eax
        mov byte ptr ss : [esp+0x10], 0
        je public_6f41a7e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x158], 0
        public_6f41a7e : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6f405e0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f41a20)
    }
}

#undef public_6f41a5f
#undef public_6f41a7e
