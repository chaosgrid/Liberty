#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a158);

#define public_6b38b30 _public_6b38b30
#define public_6b38b38 _public_6b38b38
#define public_6b38b4d _public_6b38b4d

PROC_DECLARE(0x6b38b00, internal_6b38b00, public_6b38b00);
extern "C" NAKED register_t __cdecl internal_6b38b00()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6b38b38
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6b69cf0 @0x6b38b11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b69cf0
        lea edi, ds:[esi-4]
        push eax
        push 0x2C
        push esi
        call public_6b6a158
        test bl, 1
        je public_6b38b30
        push edi
        call public_6b6a092
        add esp, 4
        public_6b38b30 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6b38b38 : nop
        mov ecx, esi
        call public_6b69cf0
        test bl, 1
        je public_6b38b4d
        push esi
        call public_6b6a092
        add esp, 4
        public_6b38b4d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b38b00)
    }
}

#undef public_6b38b30
#undef public_6b38b38
#undef public_6b38b4d
