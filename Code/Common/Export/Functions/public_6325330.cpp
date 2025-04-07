#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327c90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6325360 _public_6325360
#define public_6325368 _public_6325368
#define public_632537d _public_632537d

PROC_DECLARE(0x6325330, internal_6325330, public_6325330);
extern "C" NAKED register_t __cdecl internal_6325330()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6325368
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6327c90 @0x6325341*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6327c90
        lea edi, ds:[esi-4]
        push eax
        push 0x50
        push esi
        call public_6391dfc
        test bl, 1
        je public_6325360
        push edi
        call public_6391d5a
        add esp, 4
        public_6325360 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6325368 : nop
        mov ecx, esi
        call public_6327c90
        test bl, 1
        je public_632537d
        push esi
        call public_6391d5a
        add esp, 4
        public_632537d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6325330)
    }
}

#undef public_6325360
#undef public_6325368
#undef public_632537d
