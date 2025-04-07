#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234840);

#define public_623485b _public_623485b
#define public_623485d _public_623485d
#define public_6234866 _public_6234866
#define public_6234869 _public_6234869

PROC_DECLARE(0x6234840, internal_6234840, public_6234840);
extern "C" NAKED register_t __cdecl internal_6234840()
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
        je public_623485b
        mov dword ptr ds : [eax], edx
        jmp public_623485d
        public_623485b : nop
        mov dword ptr ds : [ecx], edx
        public_623485d : nop
        test edx, edx
        je public_6234866
        mov dword ptr ds : [edx+4], eax
        jmp public_6234869
        public_6234866 : nop
        mov dword ptr ds : [ecx+4], eax
        public_6234869 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6234840)
    }
}

#undef public_623485b
#undef public_623485d
#undef public_6234866
#undef public_6234869
