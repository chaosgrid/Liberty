#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59df80);

#define public_59df9d _public_59df9d
#define public_59dfb3 _public_59dfb3
#define public_59dfc3 _public_59dfc3

PROC_DECLARE(0x59df80, internal_59df80, public_59df80);
extern "C" NAKED register_t __cdecl internal_59df80()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67dcd8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp ecx, esi
        je public_59dfb3
        test ecx, ecx
        je public_59df9d
        mov eax, dword ptr ds : [ecx]
/*FIXUP push offset public_67dbcc @0x59df95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        call dword ptr ds : [eax+0x40]
        public_59df9d : nop
        test esi, esi
        mov dword ptr ds : [public_67dcd8], esi
        je public_59dfc3
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_67dbcc @0x59dfa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        public_59dfb3 : nop
        test esi, esi
        je public_59dfc3
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_67dbcc @0x59dfb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        public_59dfc3 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59df80)
    }
}

#undef public_59df9d
#undef public_59dfb3
#undef public_59dfc3
