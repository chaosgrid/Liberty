#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62877b0 _public_62877b0
#define public_62877b8 _public_62877b8
#define public_62877cd _public_62877cd

PROC_DECLARE(0x6287780, internal_6287780, public_6287780);
extern "C" NAKED register_t __cdecl internal_6287780()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62877b8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629ff20 @0x6287791*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629ff20
        lea edi, ds:[esi-4]
        push eax
        push 8
        push esi
        call public_6391dfc
        test bl, 1
        je public_62877b0
        push edi
        call public_6391d5a
        add esp, 4
        public_62877b0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62877b8 : nop
        mov ecx, esi
        call public_629ff20
        test bl, 1
        je public_62877cd
        push esi
        call public_62fd570
        add esp, 4
        public_62877cd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6287780)
    }
}

#undef public_62877b0
#undef public_62877b8
#undef public_62877cd
