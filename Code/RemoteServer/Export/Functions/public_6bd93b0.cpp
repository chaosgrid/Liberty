#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09900);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09b66);

#define public_6bd93e0 _public_6bd93e0
#define public_6bd93e8 _public_6bd93e8
#define public_6bd93fd _public_6bd93fd

PROC_DECLARE(0x6bd93b0, internal_6bd93b0, public_6bd93b0);
extern "C" NAKED register_t __cdecl internal_6bd93b0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6bd93e8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6c09900 @0x6bd93c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c09900
        lea edi, ds:[esi-4]
        push eax
        push 0x2C
        push esi
        call public_6c09b66
        test bl, 1
        je public_6bd93e0
        push edi
        call public_6c09aaa
        add esp, 4
        public_6bd93e0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6bd93e8 : nop
        mov ecx, esi
        call public_6c09900
        test bl, 1
        je public_6bd93fd
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd93fd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bd93b0)
    }
}

#undef public_6bd93e0
#undef public_6bd93e8
#undef public_6bd93fd
