#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef10b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1df0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2090);
CLANG_FORWARD_PROC_SYMBOL(public_6ef23c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2440);

#define public_6ef1e07 _public_6ef1e07
#define public_6ef1e22 _public_6ef1e22
#define public_6ef1e34 _public_6ef1e34
#define public_6ef1e7a _public_6ef1e7a
#define public_6ef1ea0 _public_6ef1ea0
#define public_6ef1ecd _public_6ef1ecd

PROC_DECLARE(0x6ef1df0, internal_6ef1df0, public_6ef1df0);
extern "C" NAKED register_t __cdecl internal_6ef1df0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        xor ebp, ebp
        test esi, esi
        push edi
        mov ebx, ecx
        jbe public_6ef1ecd
        public_6ef1e07 : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6ef10b0
        mov ecx, esi
        sub ecx, ebp
        cmp eax, ecx
        jbe public_6ef1e22
        mov eax, ecx
        public_6ef1e22 : nop
        mov ecx, dword ptr ds : [ebx+0xA0]
        sub ecx, dword ptr ds : [ebx+0xA4]
        cmp eax, ecx
        jbe public_6ef1e34
        mov eax, ecx
        public_6ef1e34 : nop
        test eax, eax
        jbe public_6ef1ecd
        push eax
        mov ecx, ebx
        call public_6ef23c0
        test al, al
        je public_6ef1ecd
        mov eax, dword ptr ds : [ebx+0x9C]
        mov esi, dword ptr ds : [ebx+0xA4]
        mov ecx, dword ptr ds : [ebx+0x104]
        add eax, esi
        test ecx, ecx
        jbe public_6ef1e7a
        mov edi, dword ptr ds : [ebx+0x100]
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6ef1e7a : nop
        mov ecx, dword ptr ds : [ebx+0x10C]
        test ecx, ecx
        jbe public_6ef1ea0
        mov esi, dword ptr ds : [ebx+0x104]
        mov edi, dword ptr ds : [ebx+0x108]
        add esi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        public_6ef1ea0 : nop
        mov ecx, dword ptr ds : [ebx+0x10C]
        mov edx, dword ptr ds : [ebx+0x104]
        push ecx
        push edx
        mov ecx, ebx
        call public_6ef2440
        mov esi, eax
        push esi
        mov ecx, ebx
        call public_6ef2090
        add ebp, esi
        mov esi, dword ptr ss : [esp+0x1C]
        cmp ebp, esi
        jb public_6ef1e07
        public_6ef1ecd : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ef1df0)
    }
}

#undef public_6ef1e07
#undef public_6ef1e22
#undef public_6ef1e34
#undef public_6ef1e7a
#undef public_6ef1ea0
#undef public_6ef1ecd
