#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262a30);

#define public_6262a4e _public_6262a4e
#define public_6262a61 _public_6262a61

PROC_DECLARE(0x6262a30, internal_6262a30, public_6262a30);
extern "C" NAKED register_t __cdecl internal_6262a30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_6262a61
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp edx, eax
        jae public_6262a61
        push esi
        mov esi, dword ptr ss : [esp+8]
        sub eax, edx
        cmp dword ptr ds : [esi], eax
        jbe public_6262a4e
        mov dword ptr ds : [esi], eax
        public_6262a4e : nop
        mov edx, dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, edx
        add esi, edx
        mov dword ptr ds : [ecx+0x20], esi
        pop esi
        ret 4
        public_6262a61 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6262a30)
    }
}

#undef public_6262a4e
#undef public_6262a61
