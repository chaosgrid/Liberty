#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f210);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292a40 _public_6292a40
#define public_6292a48 _public_6292a48
#define public_6292a5d _public_6292a5d

PROC_DECLARE(0x6292a10, internal_6292a10, public_6292a10);
extern "C" NAKED register_t __cdecl internal_6292a10()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292a48
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629f210 @0x6292a21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629f210
        lea edi, ds:[esi-4]
        push eax
        push 0x28
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292a40
        push edi
        call public_6391d5a
        add esp, 4
        public_6292a40 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292a48 : nop
        mov ecx, esi
        call public_629f210
        test bl, 1
        je public_6292a5d
        push esi
        call public_62fd570
        add esp, 4
        public_6292a5d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292a10)
    }
}

#undef public_6292a40
#undef public_6292a48
#undef public_6292a5d
