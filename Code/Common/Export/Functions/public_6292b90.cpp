#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6292bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6292bc0 _public_6292bc0
#define public_6292bc8 _public_6292bc8
#define public_6292bdc _public_6292bdc

PROC_DECLARE(0x6292b90, internal_6292b90, public_6292b90);
extern "C" NAKED register_t __cdecl internal_6292b90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6292bc8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6292bf0 @0x6292ba1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6292bf0
        lea edi, ds:[esi-4]
        push eax
        push 4
        push esi
        call public_6391dfc
        test bl, 1
        je public_6292bc0
        push edi
        call public_6391d5a
        add esp, 4
        public_6292bc0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6292bc8 : nop
        test bl, 1
        mov dword ptr ds : [esi], offset public_639c6b0
        je public_6292bdc
        push esi
        call public_6391d5a
        add esp, 4
        public_6292bdc : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6292b90)
    }
}

#undef public_6292bc0
#undef public_6292bc8
#undef public_6292bdc
