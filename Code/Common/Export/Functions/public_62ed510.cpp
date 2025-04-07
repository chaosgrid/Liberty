#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eed20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62ed540 _public_62ed540
#define public_62ed548 _public_62ed548
#define public_62ed55d _public_62ed55d

PROC_DECLARE(0x62ed510, internal_62ed510, public_62ed510);
extern "C" NAKED register_t __cdecl internal_62ed510()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62ed548
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62eed20 @0x62ed521*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62eed20
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_6391dfc
        test bl, 1
        je public_62ed540
        push edi
        call public_6391d5a
        add esp, 4
        public_62ed540 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62ed548 : nop
        mov ecx, esi
        call public_62eed20
        test bl, 1
        je public_62ed55d
        push esi
        call public_6391d5a
        add esp, 4
        public_62ed55d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62ed510)
    }
}

#undef public_62ed540
#undef public_62ed548
#undef public_62ed55d
