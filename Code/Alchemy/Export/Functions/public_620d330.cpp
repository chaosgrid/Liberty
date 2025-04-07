#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d330);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_620d368 _public_620d368
#define public_620d391 _public_620d391
#define public_620d3ad _public_620d3ad
#define public_620d3b6 _public_620d3b6
#define public_620d3bc _public_620d3bc

PROC_DECLARE(0x620d330, internal_620d330, public_620d330);
extern "C" NAKED register_t __cdecl internal_620d330()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        inc esi
        push edi
        mov edi, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ds:[esi+ebp]
        mov dword ptr ss : [esp+0x14], edi
        cmp eax, edi
        jle public_620d3bc
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp ebp, eax
        jge public_620d368
        mov ebp, eax
        public_620d368 : nop
        add esi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x10], esi
        je public_620d3bc
        mov edi, dword ptr ds : [ebx+4]
        lea eax, ds:[esi*8]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x1C], edi
        test eax, eax
        je public_620d391
        push eax
        call public_624612c
        add esp, 4
        mov ebp, eax
        public_620d391 : nop
        test edi, edi
        je public_620d3b6
        test ebp, ebp
        je public_620d3ad
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, edi
        add ecx, ecx
        mov edi, ebp
        rep movsd
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_620d3ad : nop
        push edi
        call public_62460e0
        add esp, 4
        public_620d3b6 : nop
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+0x10], esi
        public_620d3bc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x620d330)
    }
}

#undef public_620d368
#undef public_620d391
#undef public_620d3ad
#undef public_620d3b6
#undef public_620d3bc
