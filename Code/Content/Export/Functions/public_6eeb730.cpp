#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb730);

#define public_6eeb7a7 _public_6eeb7a7
#define public_6eeb7d4 _public_6eeb7d4
#define public_6eeb7ec _public_6eeb7ec
#define public_6eeb808 _public_6eeb808
#define public_6eeb830 _public_6eeb830
#define public_6eeb84f _public_6eeb84f

PROC_DECLARE(0x6eeb730, internal_6eeb730, public_6eeb730);
extern "C" NAKED register_t __cdecl internal_6eeb730()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x6C]
        xor ebx, ebx
        push ecx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        cmp eax, ebx
        jne public_6eeb7a7
        mov eax, dword ptr ss : [esp+0x68]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        test eax, 0xC40
        je public_6eeb84f
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6eeb808
        public_6eeb7a7 : nop
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6eac0c0
        add esp, 4
        cmp eax, ebx
        je public_6eeb808
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov esi, eax
        add esi, 4
        jne public_6eeb7d4
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        jmp public_6eeb808
        public_6eeb7d4 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6eeb7ec
        mov eax, 0x3F
        public_6eeb7ec : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x20], bl
        mov dword ptr ss : [esp+0x1C], eax
        public_6eeb808 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, 0x40
        sub edx, eax
        or ecx, 0xFFFFFFFF
        push ebp
        lea ebp, ss:[esp+eax+0x24]
        xor eax, eax
        mov edi, offset public_6fb6064
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, edx
        jb public_6eeb830
        lea eax, ds:[edx-1]
        public_6eeb830 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        mov esi, offset public_6fb6064
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], bl
        add dword ptr ss : [esp+0x20], eax
        pop ebp
        public_6eeb84f : nop
        mov eax, dword ptr ss : [esp+0x64]
        lea esi, ss:[esp+0x1C]
        mov edi, eax
        mov ecx, 0x11
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x6eeb730)
    }
}

#undef public_6eeb7a7
#undef public_6eeb7d4
#undef public_6eeb7ec
#undef public_6eeb808
#undef public_6eeb830
#undef public_6eeb84f
