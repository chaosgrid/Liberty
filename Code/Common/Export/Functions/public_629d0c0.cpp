#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629d0c0);
CLANG_FORWARD_PROC_SYMBOL(public_629d1b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_629d0f0 _public_629d0f0
#define public_629d0f8 _public_629d0f8
#define public_629d10d _public_629d10d

PROC_DECLARE(0x629d0c0, internal_629d0c0, public_629d0c0);
extern "C" NAKED register_t __cdecl internal_629d0c0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_629d0f8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629d1b0 @0x629d0d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629d1b0
        lea edi, ds:[esi-4]
        push eax
        push 0x64
        push esi
        call public_6391dfc
        test bl, 1
        je public_629d0f0
        push edi
        call public_6391d5a
        add esp, 4
        public_629d0f0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_629d0f8 : nop
        mov ecx, esi
        call public_629d1b0
        test bl, 1
        je public_629d10d
        push esi
        call public_62fd570
        add esp, 4
        public_629d10d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629d0c0)
    }
}

#undef public_629d0f0
#undef public_629d0f8
#undef public_629d10d
