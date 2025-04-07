#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f34800);
CLANG_FORWARD_PROC_SYMBOL(public_6f67740);
CLANG_FORWARD_PROC_SYMBOL(public_6f74310);
CLANG_FORWARD_PROC_SYMBOL(public_6f74380);

#define public_6f34819 _public_6f34819
#define public_6f34832 _public_6f34832
#define public_6f34868 _public_6f34868
#define public_6f34884 _public_6f34884
#define public_6f3489a _public_6f3489a
#define public_6f348d2 _public_6f348d2

PROC_DECLARE(0x6f34800, internal_6f34800, public_6f34800);
extern "C" NAKED register_t __cdecl internal_6f34800()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        push ebp
        je public_6f34819
        mov eax, dword ptr ds : [ebx+4]
        push 0
        push eax
        call public_6f74310
        public_6f34819 : nop
        mov ebp, dword ptr ss : [esp+0x48]
        test ebp, ebp
        mov dword ptr ss : [esp+8], 0
        je public_6f34832
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ss : [esp+8], ecx
        jmp public_6f34868
        public_6f34832 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6f34868
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+0x170]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+0x48]
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x4C]
        push 0x100A
        push eax
        mov dword ptr ss : [esp+0x54], ecx
        call public_6f24070
        add esp, 0xC
        public_6f34868 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_6f34884
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        public_6f34884 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        test esi, esi
        je public_6f3489a
        push edi
        mov ecx, 9
        lea edi, ss:[esp+0x28]
        rep movsd
        pop edi
        public_6f3489a : nop
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x50], ecx
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_6f67740
        add esp, 0x10
        test ebp, ebp
        pop esi
        je public_6f348d2
        push ebx
        mov ecx, ebp
        call public_6f74380
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 0xC
        public_6f348d2 : nop
        pop ebp
        mov dword ptr ds : [ebx+0x10], 0
        pop ebx
        add esp, 0x3C
        ret 0xC
        UNREACHABLE_TRAP(0x6f34800)
    }
}

#undef public_6f34819
#undef public_6f34832
#undef public_6f34868
#undef public_6f34884
#undef public_6f3489a
#undef public_6f348d2
