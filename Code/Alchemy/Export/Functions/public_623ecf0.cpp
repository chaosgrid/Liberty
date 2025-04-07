#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_623ed80);

#define public_623ed39 _public_623ed39

PROC_DECLARE(0x623ecf0, internal_623ecf0, public_623ecf0);
extern "C" NAKED register_t __cdecl internal_623ecf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push edi
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        sub eax, edx
        xor edx, edx
        div dword ptr ds : [esi+8]
        lea edx, ss:[esp+0xC]
        lea edi, ds:[ecx+eax*8]
        lea ecx, ds:[esi+0x14]
        push edi
        push edx
        call public_623ed80
        mov dword ptr ds : [edi], 0
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_623ed39
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi+0x10]
        pop edi
        inc eax
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 4
        public_623ed39 : nop
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi+0x10]
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623ecf0)
    }
}

#undef public_623ed39
