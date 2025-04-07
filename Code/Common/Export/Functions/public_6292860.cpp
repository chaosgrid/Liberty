#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ed10);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292890 _public_6292890
#define public_6292898 _public_6292898
#define public_62928ad _public_62928ad

PROC_DECLARE(0x6292860, internal_6292860, public_6292860);
extern "C" NAKED register_t __cdecl internal_6292860()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292898
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629ed10 @0x6292871*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629ed10
        lea edi, ds:[esi-4]
        push eax
        push 0x28
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292890
        push edi
        call public_6391d5a
        add esp, 4
        public_6292890 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292898 : nop
        mov ecx, esi
        call public_629ed10
        test bl, 1
        je public_62928ad
        push esi
        call public_62fd570
        add esp, 4
        public_62928ad : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292860)
    }
}

#undef public_6292890
#undef public_6292898
#undef public_62928ad
