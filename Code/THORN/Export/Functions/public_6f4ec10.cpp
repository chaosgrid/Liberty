#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ec40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ec60);

#define public_6f4ec1d _public_6f4ec1d
#define public_6f4ec37 _public_6f4ec37
#define public_6f4ec3d _public_6f4ec3d

PROC_DECLARE(0x6f4ec10, internal_6f4ec10, public_6f4ec10);
extern "C" NAKED register_t __cdecl internal_6f4ec10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push esi
        mov esi, dword ptr ds : [eax+0x58]
        test esi, esi
        je public_6f4ec3d
        public_6f4ec1d : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, 0xFFFFFFFA
        lea eax, ds:[esi+0x10]
        je public_6f4ec37
        push eax
        call public_6f4ec60
        push esi
        call public_6f4ec40
        add esp, 8
        public_6f4ec37 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6f4ec1d
        public_6f4ec3d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4ec10)
    }
}

#undef public_6f4ec1d
#undef public_6f4ec37
#undef public_6f4ec3d
