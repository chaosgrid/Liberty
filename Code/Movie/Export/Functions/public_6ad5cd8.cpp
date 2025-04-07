#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5cd8);

#define public_6ad5cfc _public_6ad5cfc

PROC_DECLARE(0x6ad5cd8, internal_6ad5cd8, public_6ad5cd8);
extern "C" NAKED register_t __cdecl internal_6ad5cd8()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_6adfd10
        cmp eax, ecx
        jb public_6ad5cfc
        cmp eax, offset public_6adff70
        ja public_6ad5cfc
        sub eax, ecx
        sar eax, 5
        add eax, 0x1C
        push eax
        call public_6ad23db
        pop ecx
        ret 
        public_6ad5cfc : nop
        add eax, 0x20
        push eax
        call dword ptr ds : [public_6ada104]
        ret 
        UNREACHABLE_TRAP(0x6ad5cd8)
    }
}

#undef public_6ad5cfc
