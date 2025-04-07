#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636e306 _public_636e306
#define public_636e308 _public_636e308
#define public_636e32c _public_636e32c
#define public_636e33d _public_636e33d
#define public_636e365 _public_636e365

PROC_DECLARE(0x636e2f0, internal_636e2f0, public_636e2f0);
extern "C" NAKED register_t __cdecl internal_636e2f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_636e365
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+ecx*4+4]
        test eax, eax
        je public_636e306
        dec eax
        jmp public_636e308
        public_636e306 : nop
        mov eax, ecx
        public_636e308 : nop
        cmp eax, ecx
        jg public_636e32c
        test ecx, ecx
        je public_636e32c
        mov edx, dword ptr ds : [esi+eax*4+4]
        test edx, edx
        je public_636e365
        dec eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
/*FIXUP push offset public_63ee9b0 @0x636e325*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee9b0
        jmp public_636e33d
        public_636e32c : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        push eax
/*FIXUP push offset public_63ee958 @0x636e338*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee958
        public_636e33d : nop
        call public_6356960
        mov edx, dword ptr ds : [public_658b994]
        add esp, 0x14
        push esi
/*FIXUP push offset public_63ee94c @0x636e34c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        push edx
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        public_636e365 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e2f0)
    }
}

#undef public_636e306
#undef public_636e308
#undef public_636e32c
#undef public_636e33d
#undef public_636e365
