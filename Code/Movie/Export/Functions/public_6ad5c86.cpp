#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5c86);

#define public_6ad5caa _public_6ad5caa

PROC_DECLARE(0x6ad5c86, internal_6ad5c86, public_6ad5c86);
extern "C" NAKED register_t __cdecl internal_6ad5c86()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_6adfd10
        cmp eax, ecx
        jb public_6ad5caa
        cmp eax, offset public_6adff70
        ja public_6ad5caa
        sub eax, ecx
        sar eax, 5
        add eax, 0x1C
        push eax
        call public_6ad237a
        pop ecx
        ret 
        public_6ad5caa : nop
        add eax, 0x20
        push eax
        call dword ptr ds : [public_6ada114]
        ret 
        UNREACHABLE_TRAP(0x6ad5c86)
    }
}

#undef public_6ad5caa
