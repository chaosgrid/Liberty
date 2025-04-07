#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ea60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627ea79 _public_627ea79
#define public_627ea83 _public_627ea83
#define public_627ea8d _public_627ea8d
#define public_627ea9d _public_627ea9d

PROC_DECLARE(0x627ea60, internal_627ea60, public_627ea60);
extern "C" NAKED register_t __cdecl internal_627ea60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc420]
        test eax, eax
        je public_627ea79
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_627ea83
        public_627ea79 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_627ea83 : nop
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_627ea8d
        mov ecx, eax
        public_627ea8d : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_627ea9d
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_627ea9d : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x627ea60)
    }
}

#undef public_627ea79
#undef public_627ea83
#undef public_627ea8d
#undef public_627ea9d
