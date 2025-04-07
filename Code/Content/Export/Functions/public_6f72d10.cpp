#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f72d53 _public_6f72d53
#define public_6f72d9d _public_6f72d9d
#define public_6f72d9f _public_6f72d9f
#define public_6f72db6 _public_6f72db6

PROC_DECLARE(0x6f72d10, internal_6f72d10, public_6f72d10);
extern "C" NAKED register_t __cdecl internal_6f72d10()
{
    __asm
    {
        sub esp, 0x30
        mov edx, dword ptr ss : [esp+0x34]
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x40]
        push eax
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x48]
        push 8
        lea ecx, ss:[esp+0x24]
        push ecx
        xor esi, esi
        push esi
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x24], 0x7F7FFFFF
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x58]
        add esp, 0x18
        xor ebx, ebx
        test eax, eax
        jbe public_6f72db6
        push ebp
        lea ebp, ds:[edi+0x70]
        public_6f72d53 : nop
        mov ecx, dword ptr ss : [esp+ebx*4+0x20]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        mov ecx, ebp
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [edi+0x74]
        je public_6f72d9f
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_6f72d9f
        mov ecx, dword ptr ds : [esi]
        push ecx
        call dword ptr ds : [public_6fb3558]
        fcom dword ptr ss : [esp+0x14]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_6f72d9d
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6f72d9f
        public_6f72d9d : nop
        fstp st(0)
        public_6f72d9f : nop
        mov eax, dword ptr ss : [esp+0x44]
        inc ebx
        cmp ebx, eax
        jb public_6f72d53
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        public_6f72db6 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6f72d10)
    }
}

#undef public_6f72d53
#undef public_6f72d9d
#undef public_6f72d9f
#undef public_6f72db6
