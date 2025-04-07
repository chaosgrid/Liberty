#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d30);
CLANG_FORWARD_PROC_SYMBOL(public_620a310);
CLANG_FORWARD_PROC_SYMBOL(public_620c230);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_620c290 _public_620c290
#define public_620c29a _public_620c29a
#define public_620c2e7 _public_620c2e7

PROC_DECLARE(0x620c230, internal_620c230, public_620c230);
extern "C" NAKED register_t __cdecl internal_620c230()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x20]
        push edi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6209d30
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        sub edi, ebp
        sar edi, 3
        mov ecx, eax
        lea ebx, ds:[eax+1]
        sub ecx, edi
        mov ebp, 1
        lea eax, ds:[ebx+1]
        mov dword ptr ss : [esp+0x14], ebx
        lea edx, ds:[ecx*8+8]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], edx
        jle public_620c29a
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp eax, ebp
        jle public_620c290
        mov ebp, eax
        public_620c290 : nop
        add ebx, ebp
        mov ecx, esi
        push ebx
        call public_620a310
        public_620c29a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea eax, ds:[ecx+edi*8]
        mov dword ptr ss : [esp+0x14], eax
        push eax
        add eax, 8
        push eax
        call dword ptr ds : [public_624b060]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        test eax, eax
        je public_620c2e7
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        add esp, 0xC
        ret 0x10
        public_620c2e7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x620c230)
    }
}

#undef public_620c290
#undef public_620c29a
#undef public_620c2e7
