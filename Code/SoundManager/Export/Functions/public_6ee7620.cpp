#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7620);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee765d _public_6ee765d
#define public_6ee7667 _public_6ee7667
#define public_6ee769f _public_6ee769f
#define public_6ee76a9 _public_6ee76a9

PROC_DECLARE(0x6ee7620, internal_6ee7620, public_6ee7620);
extern "C" NAKED register_t __cdecl internal_6ee7620()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6eeaf30]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        inc edx
        mov dword ptr ds : [public_6eeaf30], edx
        mov dl, byte ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], dl
        mov eax, dword ptr ds : [public_6eeaf2c]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_6ee765d
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6eeaf2c], ecx
        dec dword ptr ds : [public_6eeaf38]
        jmp public_6ee7667
        public_6ee765d : nop
        push 0x18
        call public_6ee8de2
        add esp, 4
        public_6ee7667 : nop
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ds : [public_6eeaf2c]
        cmp eax, ebx
        mov edi, dword ptr ds : [esi+8]
        je public_6ee769f
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6eeaf2c], ecx
        dec dword ptr ds : [public_6eeaf38]
        jmp public_6ee76a9
        public_6ee769f : nop
        push 0x18
        call public_6ee8de2
        add esp, 4
        public_6ee76a9 : nop
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ee7620)
    }
}

#undef public_6ee765d
#undef public_6ee7667
#undef public_6ee769f
#undef public_6ee76a9
