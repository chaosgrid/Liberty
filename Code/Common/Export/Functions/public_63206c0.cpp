#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63206c0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_63206db _public_63206db
#define public_63206f8 _public_63206f8
#define public_6320707 _public_6320707
#define public_6320714 _public_6320714

PROC_DECLARE(0x63206c0, internal_63206c0, public_63206c0);
extern "C" NAKED register_t __cdecl internal_63206c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], ecx
        je public_63206db
        cmp dword ptr ds : [eax+0xC], ecx
        je public_63206f8
        public_63206db : nop
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp]
        mov dword ptr ds : [public_64018d8], eax
        public_63206f8 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6320707
        add eax, 0x10
        test eax, eax
        jne public_6320714
        public_6320707 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_6320290
        add esp, 4
        public_6320714 : nop
        xor ecx, ecx
        test eax, eax
        setne cl
        mov al, cl
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63206c0)
    }
}

#undef public_63206db
#undef public_63206f8
#undef public_6320707
#undef public_6320714
