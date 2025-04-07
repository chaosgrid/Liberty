#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5960);

#define public_6ed59cd _public_6ed59cd
#define public_6ed59df _public_6ed59df

PROC_DECLARE(0x6ed5960, internal_6ed5960, public_6ed5960);
extern "C" NAKED register_t __cdecl internal_6ed5960()
{
    __asm
    {
        sub esp, 0x3F4
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6ed59df
        mov al, byte ptr ss : [esp+0x3FC]
        test al, al
        je public_6ed59df
        cmp dword ptr ds : [ebx+0x168], 0xFFFFFFFF
        je public_6ed59df
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6fb3098]
        mov eax, dword ptr ds : [ebx+0x168]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ds : [ebx+0x544]
        test al, al
        lea ecx, ds:[ebx+0x160]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov byte ptr ss : [esp+0x1C], al
        je public_6ed59cd
        push esi
        push edi
        lea esi, ds:[ebx+0x16C]
        mov ecx, 0xF6
        lea edi, ss:[esp+0x28]
        rep movsd
        pop edi
        pop esi
        public_6ed59cd : nop
        mov eax, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [public_6fb363c]
        add esp, 8
        public_6ed59df : nop
        pop ebx
        add esp, 0x3F4
        ret 4
        UNREACHABLE_TRAP(0x6ed5960)
    }
}

#undef public_6ed59cd
#undef public_6ed59df
