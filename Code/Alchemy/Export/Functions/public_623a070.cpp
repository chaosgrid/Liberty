#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a070);

#define public_623a08b _public_623a08b
#define public_623a08d _public_623a08d
#define public_623a096 _public_623a096
#define public_623a099 _public_623a099

PROC_DECLARE(0x623a070, internal_623a070, public_623a070);
extern "C" NAKED register_t __cdecl internal_623a070()
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
        je public_623a08b
        mov dword ptr ds : [eax], edx
        jmp public_623a08d
        public_623a08b : nop
        mov dword ptr ds : [ecx], edx
        public_623a08d : nop
        test edx, edx
        je public_623a096
        mov dword ptr ds : [edx+4], eax
        jmp public_623a099
        public_623a096 : nop
        mov dword ptr ds : [ecx+4], eax
        public_623a099 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x623a070)
    }
}

#undef public_623a08b
#undef public_623a08d
#undef public_623a096
#undef public_623a099
