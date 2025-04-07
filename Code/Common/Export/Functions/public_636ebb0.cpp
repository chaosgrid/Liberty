#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636ebc3 _public_636ebc3
#define public_636ebd1 _public_636ebd1
#define public_636ebde _public_636ebde

PROC_DECLARE(0x636ebb0, internal_636ebb0, public_636ebb0);
extern "C" NAKED register_t __cdecl internal_636ebb0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        lea ecx, ds:[esi+4]
        je public_636ebd1
        public_636ebc3 : nop
        test eax, eax
        je public_636ebd1
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        cmp eax, edx
        jne public_636ebc3
        public_636ebd1 : nop
        cmp dword ptr ds : [ecx], 0
        je public_636ebde
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        pop esi
        ret 
        public_636ebde : nop
        push edx
/*FIXUP push offset public_63eea3c @0x636ebdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eea3c
        call public_6356960
        mov ecx, dword ptr ds : [public_658b994]
        push esi
/*FIXUP push offset public_63997b0 @0x636ebf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push ecx
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x20
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636ebb0)
    }
}

#undef public_636ebc3
#undef public_636ebd1
#undef public_636ebde
