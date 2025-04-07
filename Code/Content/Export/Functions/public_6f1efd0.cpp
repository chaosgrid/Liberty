#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1efd0);

#define public_6f1f000 _public_6f1f000
#define public_6f1f00e _public_6f1f00e
#define public_6f1f022 _public_6f1f022
#define public_6f1f02f _public_6f1f02f
#define public_6f1f047 _public_6f1f047
#define public_6f1f073 _public_6f1f073
#define public_6f1f0ab _public_6f1f0ab

PROC_DECLARE(0x6f1efd0, internal_6f1efd0, public_6f1efd0);
extern "C" NAKED register_t __cdecl internal_6f1efd0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0xC], edi
        mov ebx, esi
        je public_6f1f0ab
        sub esi, eax
        push ebp
        lea ebp, ds:[eax+0x38]
        mov dword ptr ss : [esp+0x14], esi
        lea ecx, ds:[ecx]
        public_6f1f000 : nop
        lea eax, ss:[ebp-0x34]
        test eax, eax
        jne public_6f1f00e
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [ebx+4], al
        jmp public_6f1f022
        public_6f1f00e : nop
        lea ecx, ss:[ebp-0x34]
        push ecx
        lea edx, ds:[ebx+4]
        push 0x30
        push edx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [ebx], eax
        public_6f1f022 : nop
        test ebp, ebp
        jne public_6f1f02f
        mov dword ptr ds : [ebx+0x34], ebp
        mov byte ptr ds : [esi+ebp], 0
        jmp public_6f1f073
        public_6f1f02f : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f1f047
        mov eax, 0x2F
        public_6f1f047 : nop
        lea edi, ds:[esi+ebp]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x24], edi
        mov esi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx+eax], 0
        mov dword ptr ds : [ebx+0x34], eax
        public_6f1f073 : nop
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x6C], eax
        mov ecx, dword ptr ss : [ebp+0x38]
        add ebp, 0x74
        mov dword ptr ds : [ebx+0x70], ecx
        lea edx, ss:[ebp-0x38]
        add ebx, 0x74
        cmp edx, edi
        jne public_6f1f000
        mov eax, dword ptr ss : [esp+0x18]
        pop ebp
        pop edi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        public_6f1f0ab : nop
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr ds : [ecx+8], ebx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f1efd0)
    }
}

#undef public_6f1f000
#undef public_6f1f00e
#undef public_6f1f022
#undef public_6f1f02f
#undef public_6f1f047
#undef public_6f1f073
#undef public_6f1f0ab
