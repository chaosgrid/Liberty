#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a880);
CLANG_FORWARD_PROC_SYMBOL(public_620bf10);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_620bf43 _public_620bf43
#define public_620bf5d _public_620bf5d
#define public_620bf7d _public_620bf7d

PROC_DECLARE(0x620bf10, internal_620bf10, public_620bf10);
extern "C" NAKED register_t __cdecl internal_620bf10()
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
        jle public_620bf5d
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp eax, ebp
        jle public_620bf43
        mov ebp, eax
        public_620bf43 : nop
        add edi, ebp
        cmp ebx, edi
        je public_620bf5d
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        push edi
        push ecx
        call public_620a880
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], edi
        public_620bf5d : nop
        mov edx, dword ptr ds : [esi+0xC]
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8]
        test eax, eax
        je public_620bf7d
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_620bf7d : nop
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
        UNREACHABLE_TRAP(0x620bf10)
    }
}

#undef public_620bf43
#undef public_620bf5d
#undef public_620bf7d
