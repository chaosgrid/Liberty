#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d420);

#define public_622d43b _public_622d43b
#define public_622d43d _public_622d43d
#define public_622d446 _public_622d446
#define public_622d449 _public_622d449

PROC_DECLARE(0x622d420, internal_622d420, public_622d420);
extern "C" NAKED register_t __cdecl internal_622d420()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        test eax, eax
        je public_622d43b
        mov dword ptr ds : [eax], edx
        jmp public_622d43d
        public_622d43b : nop
        mov dword ptr ds : [ecx], edx
        public_622d43d : nop
        test edx, edx
        je public_622d446
        mov dword ptr ds : [edx+4], eax
        jmp public_622d449
        public_622d446 : nop
        mov dword ptr ds : [ecx+4], eax
        public_622d449 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x622d420)
    }
}

#undef public_622d43b
#undef public_622d43d
#undef public_622d446
#undef public_622d449
