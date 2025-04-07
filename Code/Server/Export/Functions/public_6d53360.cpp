#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53360);

#define public_6d5336e _public_6d5336e
#define public_6d5337c _public_6d5337c
#define public_6d53393 _public_6d53393
#define public_6d53395 _public_6d53395

PROC_DECLARE(0x6d53360, internal_6d53360, public_6d53360);
extern "C" NAKED register_t __cdecl internal_6d53360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        test eax, eax
        jne public_6d5336e
        mov eax, dword ptr ds : [ecx]
        jmp public_6d5337c
        public_6d5336e : nop
        push esi
        mov esi, dword ptr ds : [ecx+0x1C]
        add eax, 0x418
        cmp eax, esi
        pop esi
        jae public_6d53393
        public_6d5337c : nop
        test eax, eax
        je public_6d53395
        mov edx, dword ptr ds : [eax+0x348]
        test edx, edx
        jne public_6d53395
        mov dword ptr ss : [esp+4], eax
        jmp public_6d53360
        public_6d53393 : nop
        mov eax, edx
        public_6d53395 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d53360)
    }
}

#undef public_6d5336e
#undef public_6d5337c
#undef public_6d53393
#undef public_6d53395
