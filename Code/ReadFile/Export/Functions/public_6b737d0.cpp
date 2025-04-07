#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74170);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b73819 _public_6b73819
#define public_6b7381f _public_6b7381f
#define public_6b73844 _public_6b73844
#define public_6b7387f _public_6b7387f
#define public_6b7388d _public_6b7388d

PROC_DECLARE(0x6b737d0, internal_6b737d0, public_6b737d0);
extern "C" NAKED register_t __cdecl internal_6b737d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp eax, 2
        jne public_6b7388d
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_6b7388d
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6b7388d
        mov ecx, dword ptr ds : [eax+0x238]
        test ecx, ecx
        je public_6b7388d
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_6b73819
        mov eax, dword ptr ds : [edi+0x23C]
        jmp public_6b7381f
        public_6b73819 : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x20]
        public_6b7381f : nop
        test eax, eax
        je public_6b7387f
        push ebx
        push esi
        mov esi, dword ptr ds : [edi+0x244]
        mov dword ptr ss : [esp+0x1C], eax
        push 0xC
        mov ebx, dword ptr ds : [esi+4]
        call public_6b782ac
        add esp, 4
        mov dword ptr ds : [eax], esi
        test ebx, ebx
        jne public_6b73844
        mov ebx, eax
        public_6b73844 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push eax
        call public_6b74170
        mov edx, dword ptr ds : [edi+0x248]
        mov eax, dword ptr ds : [edi+0x244]
        add esp, 8
        inc edx
        mov dword ptr ds : [edi+0x248], edx
        mov eax, dword ptr ds : [eax+4]
        pop esi
        pop ebx
        add eax, 8
        pop edi
        ret 0x1C
        public_6b7387f : nop
        mov dword ptr ds : [edi+0x1C], 6
        or eax, 0xFFFFFFFF
        pop edi
        ret 0x1C
        public_6b7388d : nop
        mov dword ptr ds : [edi+0x1C], 5
        or eax, 0xFFFFFFFF
        pop edi
        ret 0x1C
        UNREACHABLE_TRAP(0x6b737d0)
    }
}

#undef public_6b73819
#undef public_6b7381f
#undef public_6b73844
#undef public_6b7387f
#undef public_6b7388d
