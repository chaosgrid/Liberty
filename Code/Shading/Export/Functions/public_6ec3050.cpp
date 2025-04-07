#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ebe5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebe5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5960);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5bd0);

#define public_6ec306c _public_6ec306c
#define public_6ec3088 _public_6ec3088
#define public_6ec3127 _public_6ec3127
#define public_6ec3137 _public_6ec3137

PROC_DECLARE(0x6ec3050, internal_6ec3050, public_6ec3050);
extern "C" NAKED register_t __cdecl internal_6ec3050()
{
    __asm
    {
        sub esp, 0x7C
        push esi
        mov esi, dword ptr ss : [esp+0x8C]
        or eax, 0xFFFFFFFF
        test esi, esi
        mov dword ptr ss : [esp+4], eax
        je public_6ec306c
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6ec306c : nop
        mov ecx, dword ptr ss : [esp+0x88]
        test ecx, ecx
        je public_6ec3088
        call public_6ebe560
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ss : [esp+4]
        public_6ec3088 : nop
        test esi, esi
        je public_6ec3137
        test eax, eax
        jne public_6ec3137
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x8C]
        mov ebx, dword ptr ss : [ebp+0x90]
        lea eax, ds:[ebx+1]
        push edi
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [ebp+0x90], eax
        call public_6ebe5c0
        mov esi, eax
        mov dword ptr ss : [esp+0x54], ebx
        mov ecx, 0xC
        lea edi, ss:[esp+0x5C]
        rep movsd
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[ebp+0x68]
        call public_6ec5960
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x94]
        lea esi, ds:[eax+0x18]
        push ecx
        mov ecx, esi
        call public_6ebe5d0
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi+0x14]
        inc ecx
        cmp eax, 1
        mov dword ptr ds : [esi+0x28], ecx
        jbe public_6ec3127
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x7C]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], 0
        call public_6ec5bd0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+0x10], esi
        public_6ec3127 : nop
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        mov dword ptr ds : [edx], ebx
        pop ebx
        public_6ec3137 : nop
        pop esi
        add esp, 0x7C
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3050)
    }
}

#undef public_6ec306c
#undef public_6ec3088
#undef public_6ec3127
#undef public_6ec3137
