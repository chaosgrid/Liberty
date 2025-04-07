#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62f1433 _public_62f1433
#define public_62f143b _public_62f143b
#define public_62f1450 _public_62f1450

PROC_DECLARE(0x62f1400, internal_62f1400, public_62f1400);
extern "C" NAKED register_t __cdecl internal_62f1400()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62f143b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62f1670 @0x62f1411*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62f1670
        lea edi, ds:[esi-4]
        push eax
        push 0x94
        push esi
        call public_6391dfc
        test bl, 1
        je public_62f1433
        push edi
        call public_6391d5a
        add esp, 4
        public_62f1433 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62f143b : nop
        mov ecx, esi
        call public_62f1670
        test bl, 1
        je public_62f1450
        push esi
        call public_6391d5a
        add esp, 4
        public_62f1450 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62f1400)
    }
}

#undef public_62f1433
#undef public_62f143b
#undef public_62f1450
