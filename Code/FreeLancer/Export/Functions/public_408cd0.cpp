#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_408d0e _public_408d0e
#define public_408d16 _public_408d16

PROC_DECLARE(0x408cd0, internal_408cd0, public_408cd0);
extern "C" NAKED register_t __cdecl internal_408cd0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        mov bl, 1
        call public_406dc0
        test al, al
        jne public_408d0e
/*FIXUP push offset public_5c7ab0 @0x408ce5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7ab0
        mov ecx, edi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_408d16
        mov ecx, edi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        mov dword ptr ds : [esi+0x54], eax
        add esp, 4
        mov byte ptr ds : [esi+0x58], bl
        public_408d0e : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_408d16 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x408cd0)
    }
}

#undef public_408d0e
#undef public_408d16
