#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6296cb3 _public_6296cb3
#define public_6296cbb _public_6296cbb
#define public_6296cd0 _public_6296cd0

PROC_DECLARE(0x6296c80, internal_6296c80, public_6296c80);
extern "C" NAKED register_t __cdecl internal_6296c80()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6296cbb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6296bb0 @0x6296c91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6296bb0
        lea edi, ds:[esi-4]
        push eax
        push 0x1F4
        push esi
        call public_6391dfc
        test bl, 1
        je public_6296cb3
        push edi
        call public_6391d5a
        add esp, 4
        public_6296cb3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6296cbb : nop
        mov ecx, esi
        call public_6296bb0
        test bl, 1
        je public_6296cd0
        push esi
        call public_62fd570
        add esp, 4
        public_6296cd0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6296c80)
    }
}

#undef public_6296cb3
#undef public_6296cbb
#undef public_6296cd0
