#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290a10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62834d3 _public_62834d3
#define public_62834db _public_62834db
#define public_62834f0 _public_62834f0

PROC_DECLARE(0x62834a0, internal_62834a0, public_62834a0);
extern "C" NAKED register_t __cdecl internal_62834a0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62834db
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6290a10 @0x62834b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6290a10
        lea edi, ds:[esi-4]
        push eax
        push 0xD0
        push esi
        call public_6391dfc
        test bl, 1
        je public_62834d3
        push edi
        call public_6391d5a
        add esp, 4
        public_62834d3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62834db : nop
        mov ecx, esi
        call public_6290a10
        test bl, 1
        je public_62834f0
        push esi
        call public_6391d5a
        add esp, 4
        public_62834f0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62834a0)
    }
}

#undef public_62834d3
#undef public_62834db
#undef public_62834f0
