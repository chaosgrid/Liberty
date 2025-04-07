#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63345f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6273200 _public_6273200
#define public_6273208 _public_6273208
#define public_627321d _public_627321d

PROC_DECLARE(0x62731d0, internal_62731d0, public_62731d0);
extern "C" NAKED register_t __cdecl internal_62731d0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6273208
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_63345f0 @0x62731e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63345f0
        lea edi, ds:[esi-4]
        push eax
        push 0x20
        push esi
        call public_6391dfc
        test bl, 1
        je public_6273200
        push edi
        call public_6391d5a
        add esp, 4
        public_6273200 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6273208 : nop
        mov ecx, esi
        call public_63345f0
        test bl, 1
        je public_627321d
        push esi
        call public_6391d5a
        add esp, 4
        public_627321d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62731d0)
    }
}

#undef public_6273200
#undef public_6273208
#undef public_627321d
