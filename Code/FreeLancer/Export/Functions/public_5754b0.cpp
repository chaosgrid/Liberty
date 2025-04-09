#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_5754b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5754d0 _public_5754d0
#define public_5754e8 _public_5754e8
#define public_575516 _public_575516

PROC_DECLARE(0x5754b0, internal_5754b0, public_5754b0);
extern "C" NAKED register_t __cdecl internal_5754b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_575516
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_5754d0 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        lea ebp, ds:[esi+8]
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_5754e8
        mov ebx, eax
        public_5754e8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_46ea00
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_5754d0
        pop edi
        pop ebp
        pop ebx
        public_575516 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x5754b0)
    }
}

#undef public_5754d0
#undef public_5754e8
#undef public_575516
