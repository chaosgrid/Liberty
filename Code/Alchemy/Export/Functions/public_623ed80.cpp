#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ed80);

#define public_623ed9b _public_623ed9b
#define public_623ed9d _public_623ed9d
#define public_623eda6 _public_623eda6
#define public_623eda9 _public_623eda9

PROC_DECLARE(0x623ed80, internal_623ed80, public_623ed80);
extern "C" NAKED register_t __cdecl internal_623ed80()
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
        je public_623ed9b
        mov dword ptr ds : [eax], edx
        jmp public_623ed9d
        public_623ed9b : nop
        mov dword ptr ds : [ecx], edx
        public_623ed9d : nop
        test edx, edx
        je public_623eda6
        mov dword ptr ds : [edx+4], eax
        jmp public_623eda9
        public_623eda6 : nop
        mov dword ptr ds : [ecx+4], eax
        public_623eda9 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x623ed80)
    }
}

#undef public_623ed9b
#undef public_623ed9d
#undef public_623eda6
#undef public_623eda9
