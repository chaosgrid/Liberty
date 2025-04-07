#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4660);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09b66);

#define public_6bd45f0 _public_6bd45f0
#define public_6bd45f8 _public_6bd45f8
#define public_6bd460d _public_6bd460d

PROC_DECLARE(0x6bd45c0, internal_6bd45c0, public_6bd45c0);
extern "C" NAKED register_t __cdecl internal_6bd45c0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6bd45f8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6bd4660 @0x6bd45d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6bd4660
        lea edi, ds:[esi-4]
        push eax
        push 0x1C
        push esi
        call public_6c09b66
        test bl, 1
        je public_6bd45f0
        push edi
        call public_6c09aaa
        add esp, 4
        public_6bd45f0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6bd45f8 : nop
        mov ecx, esi
        call public_6bd4660
        test bl, 1
        je public_6bd460d
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd460d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bd45c0)
    }
}

#undef public_6bd45f0
#undef public_6bd45f8
#undef public_6bd460d
