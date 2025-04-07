#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f210);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627f229 _public_627f229
#define public_627f233 _public_627f233
#define public_627f23d _public_627f23d
#define public_627f24d _public_627f24d

PROC_DECLARE(0x627f210, internal_627f210, public_627f210);
extern "C" NAKED register_t __cdecl internal_627f210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc01c]
        test eax, eax
        je public_627f229
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc01c], ecx
        dec dword ptr ds : [public_63fc028]
        jmp public_627f233
        public_627f229 : nop
        push 0x1C
        call public_6391d9c
        add esp, 4
        public_627f233 : nop
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_627f23d
        mov ecx, eax
        public_627f23d : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_627f24d
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_627f24d : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x627f210)
    }
}

#undef public_627f229
#undef public_627f233
#undef public_627f23d
#undef public_627f24d
