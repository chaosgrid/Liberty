#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69cf6);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a158);

#define public_6b38de0 _public_6b38de0
#define public_6b38de8 _public_6b38de8
#define public_6b38dfd _public_6b38dfd

PROC_DECLARE(0x6b38db0, internal_6b38db0, public_6b38db0);
extern "C" NAKED register_t __cdecl internal_6b38db0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6b38de8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6b69cf6 @0x6b38dc1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b69cf6
        lea edi, ds:[esi-4]
        push eax
        push 0x68
        push esi
        call public_6b6a158
        test bl, 1
        je public_6b38de0
        push edi
        call public_6b6a092
        add esp, 4
        public_6b38de0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6b38de8 : nop
        mov ecx, esi
        call public_6b69cf6
        test bl, 1
        je public_6b38dfd
        push esi
        call public_6b6a092
        add esp, 4
        public_6b38dfd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b38db0)
    }
}

#undef public_6b38de0
#undef public_6b38de8
#undef public_6b38dfd
