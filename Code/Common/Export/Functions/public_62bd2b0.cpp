#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bd7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62bd2e0 _public_62bd2e0
#define public_62bd2e8 _public_62bd2e8
#define public_62bd2fd _public_62bd2fd

PROC_DECLARE(0x62bd2b0, internal_62bd2b0, public_62bd2b0);
extern "C" NAKED register_t __cdecl internal_62bd2b0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62bd2e8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62bd7e0 @0x62bd2c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62bd7e0
        lea edi, ds:[esi-4]
        push eax
        push 0x34
        push esi
        call public_6391dfc
        test bl, 1
        je public_62bd2e0
        push edi
        call public_6391d5a
        add esp, 4
        public_62bd2e0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62bd2e8 : nop
        mov ecx, esi
        call public_62bd7e0
        test bl, 1
        je public_62bd2fd
        push esi
        call public_6391d5a
        add esp, 4
        public_62bd2fd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62bd2b0)
    }
}

#undef public_62bd2e0
#undef public_62bd2e8
#undef public_62bd2fd
