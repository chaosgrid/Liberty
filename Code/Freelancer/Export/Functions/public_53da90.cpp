#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_53dab6 _public_53dab6
#define public_53dad4 _public_53dad4
#define public_53daf1 _public_53daf1

PROC_DECLARE(0x53da90, internal_53da90, public_53da90);
extern "C" NAKED register_t __cdecl internal_53da90()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        movzx eax, byte ptr ds : [ebx+0x14]
        push ebp
        push esi
        shl eax, 3
        push edi
        push eax
        call public_5b7e84
        mov cl, byte ptr ds : [ebx+0x14]
        mov ebp, eax
        add esp, 4
        xor eax, eax
        test cl, cl
        jbe public_53dad4
        public_53dab6 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov dword ptr ss : [ebp+eax*8], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ecx+eax*8+4]
        mov dword ptr ss : [ebp+eax*8+4], edx
        movzx ecx, byte ptr ds : [ebx+0x14]
        inc eax
        cmp eax, ecx
        jb public_53dab6
        public_53dad4 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x10
        mov byte ptr ss : [esp+0x14], 0
        jb public_53daf1
        mov eax, 0xF
        public_53daf1 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, ebx
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        movzx eax, byte ptr ds : [ebx+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ebp
        push ecx
        call dword ptr ds : [public_5c6a5c]
        push ebp
        call public_5b7e1d
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x53da90)
    }
}

#undef public_53dab6
#undef public_53dad4
#undef public_53daf1
