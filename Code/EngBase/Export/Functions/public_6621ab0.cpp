#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ed90);

#define public_6621abf _public_6621abf
#define public_6621ad8 _public_6621ad8
#define public_6621af2 _public_6621af2

PROC_DECLARE(0x6621ab0, internal_6621ab0, public_6621ab0);
extern "C" NAKED register_t __cdecl internal_6621ab0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor edx, edx
        cmp ecx, 0xFFFFFFFF
        je public_6621abf
        cmp ecx, edx
        jne public_6621ad8
        public_6621abf : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 0xBF800000
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edx
        ret 0x14
        public_6621ad8 : nop
        test byte ptr ss : [esp+0xC], 1
        je public_6621af2
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push edx
        call public_661ed90
        ret 0x14
        public_6621af2 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push 1
        call public_661ed90
        ret 0x14
        UNREACHABLE_TRAP(0x6621ab0)
    }
}

#undef public_6621abf
#undef public_6621ad8
#undef public_6621af2
