#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6286e10 _public_6286e10
#define public_6286e18 _public_6286e18
#define public_6286e2d _public_6286e2d

PROC_DECLARE(0x6286de0, internal_6286de0, public_6286de0);
extern "C" NAKED register_t __cdecl internal_6286de0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6286e18
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629adb0 @0x6286df1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629adb0
        lea edi, ds:[esi-4]
        push eax
        push 0x20
        push esi
        call public_6391dfc
        test bl, 1
        je public_6286e10
        push edi
        call public_6391d5a
        add esp, 4
        public_6286e10 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6286e18 : nop
        mov ecx, esi
        call public_629adb0
        test bl, 1
        je public_6286e2d
        push esi
        call public_62fd570
        add esp, 4
        public_6286e2d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6286de0)
    }
}

#undef public_6286e10
#undef public_6286e18
#undef public_6286e2d
