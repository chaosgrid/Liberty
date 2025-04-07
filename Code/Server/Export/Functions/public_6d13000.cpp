#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13000);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d13031 _public_6d13031
#define public_6d13039 _public_6d13039
#define public_6d13048 _public_6d13048

PROC_DECLARE(0x6d13000, internal_6d13000, public_6d13000);
extern "C" NAKED register_t __cdecl internal_6d13000()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        lea eax, ss:[esp+0x10]
        add esi, 0x10
        push eax
        mov ecx, esi
        xor edi, edi
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6d13031
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d13031
        lea eax, ss:[esp+8]
        jmp public_6d13039
        public_6d13031 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6d13039 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        je public_6d13048
        pop edi
        add eax, 0x10
        pop esi
        pop ecx
        ret 4
        public_6d13048 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d13000)
    }
}

#undef public_6d13031
#undef public_6d13039
#undef public_6d13048
