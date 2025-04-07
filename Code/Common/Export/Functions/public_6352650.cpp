#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6352650);
CLANG_FORWARD_PROC_SYMBOL(public_6352720);

#define public_6352689 _public_6352689
#define public_635269f _public_635269f
#define public_63526a6 _public_63526a6
#define public_63526bf _public_63526bf

PROC_DECLARE(0x6352650, internal_6352650, public_6352650);
extern "C" NAKED register_t __cdecl internal_6352650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ds : [esi]
        lea ecx, ds:[eax-1]
        push 0xC
        push eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        call public_6343f80
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0xC], eax
        lea eax, ds:[edi-1]
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x10], edx
        jl public_63526a6
        push ebp
        lea edi, ds:[ebx+8]
        lea ebp, ds:[eax+1]
        public_6352689 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_635269f
        mov ecx, dword ptr ds : [edi-8]
        mov edx, dword ptr ds : [edi-4]
        push ecx
        push eax
        push edx
        mov ecx, esi
        call public_6352720
        public_635269f : nop
        add edi, 0xC
        dec ebp
        jne public_6352689
        pop ebp
        public_63526a6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], eax
        cmp ebx, dword ptr ds : [esi+0x10]
        je public_63526bf
        test ebx, ebx
        je public_63526bf
        push ebx
        call public_6343fb0
        add esp, 4
        public_63526bf : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6352650)
    }
}

#undef public_6352689
#undef public_635269f
#undef public_63526a6
#undef public_63526bf
