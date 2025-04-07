#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6294520);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62930a0 _public_62930a0
#define public_62930a8 _public_62930a8
#define public_62930bd _public_62930bd

PROC_DECLARE(0x6293070, internal_6293070, public_6293070);
extern "C" NAKED register_t __cdecl internal_6293070()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62930a8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6294520 @0x6293081*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6294520
        lea edi, ds:[esi-4]
        push eax
        push 0x54
        push esi
        call public_6391dfc
        test bl, 1
        je public_62930a0
        push edi
        call public_6391d5a
        add esp, 4
        public_62930a0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62930a8 : nop
        mov ecx, esi
        call public_6294520
        test bl, 1
        je public_62930bd
        push esi
        call public_62fd570
        add esp, 4
        public_62930bd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6293070)
    }
}

#undef public_62930a0
#undef public_62930a8
#undef public_62930bd
