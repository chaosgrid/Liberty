#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e490);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392d18);

#define public_627e4db _public_627e4db
#define public_627e4e5 _public_627e4e5

PROC_DECLARE(0x627e490, internal_627e490, public_627e490);
extern "C" NAKED register_t __cdecl internal_627e490()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392d18 @0x627e492*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392d18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov edx, dword ptr ds : [public_63fc424]
        push esi
        mov esi, ecx
        inc edx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [public_63fc424], edx
        mov eax, dword ptr ds : [public_63fc420]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_627e4db
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_627e4e5
        public_627e4db : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_627e4e5 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x627e490)
    }
}

#undef public_627e4db
#undef public_627e4e5
