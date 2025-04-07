#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630abd0);

#define public_630abf4 _public_630abf4
#define public_630abff _public_630abff
#define public_630ac01 _public_630ac01
#define public_630ac0d _public_630ac0d
#define public_630ac10 _public_630ac10
#define public_630ac35 _public_630ac35
#define public_630ac78 _public_630ac78
#define public_630acd4 _public_630acd4
#define public_630acfa _public_630acfa
#define public_630acfc _public_630acfc
#define public_630ad0a _public_630ad0a
#define public_630ad1f _public_630ad1f

PROC_DECLARE(0x630abd0, internal_630abd0, public_630abd0);
extern "C" NAKED register_t __cdecl internal_630abd0()
{
    __asm
    {
        sub esp, 0x600
        push ebx
        mov ebx, dword ptr ss : [esp+0x608]
        shl ebx, 0x1C
        push ebp
        sar ebx, 0x1C
        cmp ebx, 2
        push esi
        push edi
        ja public_630abff
        jne public_630abf4
        inc dword ptr ds : [public_63fcf30]
        public_630abf4 : nop
        cmp ebx, 1
        jne public_630abff
        inc dword ptr ds : [public_63fcf34]
        public_630abff : nop
        xor ebp, ebp
        public_630ac01 : nop
        test ebp, ebp
        jne public_630ac0d
        mov ebp, dword ptr ds : [public_63fcf28]
        jmp public_630ac10
        public_630ac0d : nop
        mov ebp, dword ptr ss : [ebp]
        public_630ac10 : nop
        test ebp, ebp
        je public_630ad1f
        mov al, byte ptr ss : [ebp+0x10]
        test al, al
        je public_630ac01
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0xFFFFFFFF
        je public_630ac35
        mov ecx, dword ptr ss : [esp+0x614]
        sar ecx, 4
        cmp ecx, eax
        jne public_630ac01
        public_630ac35 : nop
        cmp ebx, dword ptr ss : [ebp+0xC]
        ja public_630ac01
        mov eax, dword ptr ss : [esp+0x618]
        lea edx, ss:[esp+0x61C]
        push edx
        push eax
        lea ecx, ss:[esp+0x218]
        push ecx
        call dword ptr ds : [public_63991f4]
        mov al, byte ptr ss : [ebp+0x11]
        add esp, 0xC
        test al, al
        je public_630ac78
        cmp ebx, 2
        ja public_630ac78
        lea edx, ss:[esp+0x210]
        push edx
        call dword ptr ds : [public_6399350]
        add esp, 4
        public_630ac78 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x210]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        test eax, eax
        lea edx, ss:[esp+0x210]
        jle public_630acd4
        cmp byte ptr ss : [esp+eax+0x20F], 0xA
        je public_630acd4
        lea ecx, ds:[eax+1]
        cmp ecx, 0x200
        jae public_630acd4
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x210]
        lea edi, ss:[esp+0x10]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x10], 0xA
        mov byte ptr ss : [esp+eax+0x11], 0
        lea edx, ss:[esp+0x10]
        public_630acd4 : nop
        mov eax, dword ptr ss : [ebp+0x94]
        test eax, eax
        je public_630ac01
        mov esi, eax
        test esi, esi
        je public_630ad0a
        test edx, edx
        je public_630acfa
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        jmp public_630acfc
        public_630acfa : nop
        xor ecx, ecx
        public_630acfc : nop
        push esi
        push ecx
        push 1
        push edx
        call dword ptr ds : [public_6399240]
        add esp, 0x10
        public_630ad0a : nop
        mov eax, dword ptr ss : [ebp+0x94]
        push eax
        call dword ptr ds : [public_63992dc]
        add esp, 4
        jmp public_630ac01
        public_630ad1f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x600
        ret 
        UNREACHABLE_TRAP(0x630abd0)
    }
}

#undef public_630abf4
#undef public_630abff
#undef public_630ac01
#undef public_630ac0d
#undef public_630ac10
#undef public_630ac35
#undef public_630ac78
#undef public_630acd4
#undef public_630acfa
#undef public_630acfc
#undef public_630ad0a
#undef public_630ad1f
