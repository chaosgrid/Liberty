#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad136e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5414);

#define public_6ad13d4 _public_6ad13d4
#define public_6ad13dc _public_6ad13dc

PROC_DECLARE(0x6ad1381, internal_6ad1381, public_6ad1381);
extern "C" NAKED register_t __cdecl internal_6ad1381()
{
    __asm
    {
        push esi
        push edi
        call dword ptr ds : [public_6ada140]
        push dword ptr ds : [public_6add570]
        mov edi, eax
        call dword ptr ds : [public_6ada11c]
        mov esi, eax
        test esi, esi
        jne public_6ad13dc
        push 0x74
        push 1
        call public_6ad5414
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        je public_6ad13d4
        push esi
        push dword ptr ds : [public_6add570]
        call dword ptr ds : [public_6ada12c]
        test eax, eax
        je public_6ad13d4
        push esi
        call public_6ad136e
        pop ecx
        call dword ptr ds : [public_6ada068]
        or dword ptr ds : [esi+4], 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        jmp public_6ad13dc
        public_6ad13d4 : nop
        push 0x10
        call public_6acff18
        pop ecx
        public_6ad13dc : nop
        push edi
        call dword ptr ds : [public_6ada120]
        mov eax, esi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad1381)
    }
}

#undef public_6ad13d4
#undef public_6ad13dc
