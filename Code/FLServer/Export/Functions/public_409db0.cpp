#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4185dc);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_409de3 _public_409de3
#define public_409deb _public_409deb
#define public_409e00 _public_409e00

PROC_DECLARE(0x409db0, internal_409db0, public_409db0);
extern "C" NAKED register_t __cdecl internal_409db0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_409deb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_4185dc @0x409dc1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4185dc
        lea edi, ds:[esi-4]
        push eax
        push 0xD0
        push esi
        call public_4192c6
        test bl, 1
        je public_409de3
        push edi
        call public_418978
        add esp, 4
        public_409de3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_409deb : nop
        mov ecx, esi
        call public_4185dc
        test bl, 1
        je public_409e00
        push esi
        call public_418978
        add esp, 4
        public_409e00 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x409db0)
    }
}

#undef public_409de3
#undef public_409deb
#undef public_409e00
