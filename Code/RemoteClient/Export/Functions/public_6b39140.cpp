#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d02);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a158);

#define public_6b39173 _public_6b39173
#define public_6b3917b _public_6b3917b
#define public_6b39190 _public_6b39190

PROC_DECLARE(0x6b39140, internal_6b39140, public_6b39140);
extern "C" NAKED register_t __cdecl internal_6b39140()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6b3917b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6b69d02 @0x6b39151*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b69d02
        lea edi, ds:[esi-4]
        push eax
        push 0x99C
        push esi
        call public_6b6a158
        test bl, 1
        je public_6b39173
        push edi
        call public_6b6a092
        add esp, 4
        public_6b39173 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6b3917b : nop
        mov ecx, esi
        call public_6b69d02
        test bl, 1
        je public_6b39190
        push esi
        call public_6b6a092
        add esp, 4
        public_6b39190 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b39140)
    }
}

#undef public_6b39173
#undef public_6b3917b
#undef public_6b39190
