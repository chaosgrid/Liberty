#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_PROC_SYMBOL(public_6246780);
CLANG_FORWARD_PROC_SYMBOL(public_6246d30);
CLANG_FORWARD_PROC_SYMBOL(public_6247000);
CLANG_FORWARD_PROC_SYMBOL(public_6247010);
CLANG_FORWARD_PROC_SYMBOL(public_6247050);
CLANG_FORWARD_PROC_SYMBOL(public_6247080);
CLANG_FORWARD_PROC_SYMBOL(public_62470c0);
CLANG_FORWARD_PROC_SYMBOL(public_6247110);

#define public_6246795 _public_6246795
#define public_624679d _public_624679d
#define public_62467ad _public_62467ad
#define public_62467c5 _public_62467c5
#define public_62467c9 _public_62467c9
#define public_62467fa _public_62467fa
#define public_62467ff _public_62467ff
#define public_6246807 _public_6246807
#define public_624680d _public_624680d
#define public_6246812 _public_6246812
#define public_624681d _public_624681d
#define public_624683c _public_624683c
#define public_6246840 _public_6246840
#define public_624685c _public_624685c
#define public_62468c3 _public_62468c3
#define public_6246907 _public_6246907
#define public_624692e _public_624692e

PROC_DECLARE(0x6246780, internal_6246780, public_6246780);
extern "C" NAKED register_t __cdecl internal_6246780()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+4]
        push edi
        jne public_6246795
        xor edx, edx
        jmp public_624679d
        public_6246795 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, eax
        sar edx, 4
        public_624679d : nop
        xor ebx, ebx
        test edx, edx
        mov dword ptr ss : [esp+0x14], ebx
        jle public_6246807
        mov edi, dword ptr ds : [ecx+8]
        add edi, 4
        public_62467ad : nop
        mov ebp, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [ebp+4]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 0x41
        jnp public_62467c5
        inc ebx
        add edi, 0x10
        cmp ebx, edx
        jl public_62467ad
        public_62467c5 : nop
        mov dword ptr ss : [esp+0x14], ebx
        public_62467c9 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edi, ebx
        shl edi, 4
        add edi, eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 4
        cmp ecx, 1
        jae public_62468c3
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_62467fa
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, 1
        ja public_62467ff
        public_62467fa : nop
        mov ecx, 1
        public_62467ff : nop
        test edx, edx
        jne public_624680d
        xor eax, eax
        jmp public_6246812
        public_6246807 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        jmp public_62467c9
        public_624680d : nop
        sub eax, edx
        sar eax, 4
        public_6246812 : nop
        lea ebx, ds:[eax+ecx]
        test ebx, ebx
        mov eax, ebx
        jge public_624681d
        xor eax, eax
        public_624681d : nop
        shl eax, 4
        push eax
        call public_624612c
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_624685c
        jmp public_6246840
        public_624683c : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6246840 : nop
        push eax
        push ebp
        call public_6247110
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        add eax, 0x10
        add ebp, 0x10
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_624683c
        public_624685c : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, esi
        push edx
        push 1
        push ebp
        call public_6247050
        mov eax, dword ptr ds : [esi+8]
        add ebp, 0x10
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6247010
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6247000
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 4
        shl ebx, 4
        add ebx, edi
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], ebx
        call public_6246d30
        inc eax
        mov dword ptr ds : [esi+4], edi
        shl eax, 4
        add eax, edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        public_62468c3 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, 1
        mov ecx, esi
        jae public_6246907
        lea edx, ds:[edi+0x10]
        push edx
        push eax
        push edi
        call public_6247010
        mov eax, dword ptr ds : [esi+8]
        mov edx, 1
        mov ecx, eax
        push ebp
        sub ecx, edi
        sar ecx, 4
        sub edx, ecx
        mov ecx, esi
        push edx
        push eax
        call public_6247050
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push edi
        call public_6247080
        add esp, 0xC
        jmp public_624692e
        public_6246907 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        call public_6247010
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFF0
        push eax
        push edi
        call public_62470c0
        lea ecx, ds:[edi+0x10]
        push ebp
        push ecx
        push edi
        call public_6247080
        add esp, 0x18
        public_624692e : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        add eax, 0x10
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6246780)
    }
}

#undef public_6246795
#undef public_624679d
#undef public_62467ad
#undef public_62467c5
#undef public_62467c9
#undef public_62467fa
#undef public_62467ff
#undef public_6246807
#undef public_624680d
#undef public_6246812
#undef public_624681d
#undef public_624683c
#undef public_6246840
#undef public_624685c
#undef public_62468c3
#undef public_6246907
#undef public_624692e
