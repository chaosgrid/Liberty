#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_620c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_620c1d3 _public_620c1d3
#define public_620c1ed _public_620c1ed
#define public_620c20d _public_620c20d

PROC_DECLARE(0x620c1a0, internal_620c1a0, public_620c1a0);
extern "C" NAKED register_t __cdecl internal_620c1a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebp, 1
        mov edi, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [esi+0x10]
        inc edi
        mov dword ptr ss : [esp+0x10], edi
        lea eax, ds:[edi+1]
        cmp eax, ebx
        jle public_620c1ed
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp eax, ebp
        jle public_620c1d3
        mov ebp, eax
        public_620c1d3 : nop
        add edi, ebp
        cmp ebx, edi
        je public_620c1ed
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push ecx
        call public_620a8d0
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], edi
        public_620c1ed : nop
        mov edx, dword ptr ds : [esi+0xC]
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8]
        test eax, eax
        je public_620c20d
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_620c20d : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea edx, ds:[ecx+eax*8]
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x620c1a0)
    }
}

#undef public_620c1d3
#undef public_620c1ed
#undef public_620c20d
