#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff830);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62ff850 _public_62ff850
#define public_62ff889 _public_62ff889
#define public_62ff891 _public_62ff891
#define public_62ff8a1 _public_62ff8a1

PROC_DECLARE(0x62ff830, internal_62ff830, public_62ff830);
extern "C" NAKED register_t __cdecl internal_62ff830()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov esi, ecx
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62ff850
        push edi
        call public_630d3f0
        add esp, 4
        public_62ff850 : nop
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+eax*4]
        lea edi, ds:[esi+eax*4]
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x30]
        push ecx
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_62ff889
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62ff889
        lea eax, ss:[esp+0x10]
        jmp public_62ff891
        public_62ff889 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_62ff891 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x34]
        je public_62ff8a1
        pop edi
        pop esi
        add eax, 0x10
        pop ebx
        ret 8
        public_62ff8a1 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62ff830)
    }
}

#undef public_62ff850
#undef public_62ff889
#undef public_62ff891
#undef public_62ff8a1
