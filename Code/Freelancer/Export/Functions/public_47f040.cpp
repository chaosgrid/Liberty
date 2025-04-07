#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437d90);
CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_47f040);
CLANG_FORWARD_PROC_SYMBOL(public_4c63e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_47f065 _public_47f065
#define public_47f0f3 _public_47f0f3
#define public_47f0f7 _public_47f0f7
#define public_47f124 _public_47f124
#define public_47f12c _public_47f12c
#define public_47f149 _public_47f149
#define public_47f151 _public_47f151
#define public_47f19d _public_47f19d
#define public_47f1ad _public_47f1ad
#define public_47f1cd _public_47f1cd
#define public_47f1d5 _public_47f1d5
#define public_47f1d9 _public_47f1d9
#define public_47f207 _public_47f207
#define public_47f214 _public_47f214
#define public_47f221 _public_47f221
#define public_47f227 _public_47f227
#define public_47f231 _public_47f231

PROC_DECLARE(0x47f040, internal_47f040, public_47f040);
extern "C" NAKED register_t __cdecl internal_47f040()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ds : [public_66873c]
        push esi
        mov dword ptr ss : [esp+0x10], ecx
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov esi, eax
        test esi, esi
        jne public_47f065
        pop esi
        add esp, 0x14
        ret 4
        public_47f065 : nop
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        mov ecx, esi
        call public_438060
        call public_5b7ec0
        push edi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6088]
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_47f231
        mov eax, dword ptr ds : [ebx+0xB8]
        test eax, eax
        je public_47f231
        mov ecx, dword ptr ds : [ebx+0xBC]
        test ecx, ecx
        jle public_47f231
        push ebp
        push eax
        call dword ptr ds : [public_5c632c]
        add esp, 4
        mov edi, eax
        push edi
        mov ecx, esi
        call public_438060
        call public_5b7ec0
        mov ebp, dword ptr ds : [ebx+0xBC]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x14], ebp
        call public_437d90
        xor ecx, ecx
        cmp eax, ecx
        je public_47f0f3
        mov eax, dword ptr ds : [eax+0x1C]
        cmp eax, ecx
        jle public_47f0f3
        cmp eax, ebp
        jge public_47f0f7
        mov dword ptr ss : [esp+0x10], eax
        jmp public_47f0f7
        public_47f0f3 : nop
        mov dword ptr ss : [esp+0x10], ecx
        public_47f0f7 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [public_5c6360]
        push eax
        call esi
        mov ebp, dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_47f124
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_47f124
        fld dword ptr ds : [eax+0x5C]
        fstp dword ptr ss : [esp+0x28]
        jmp public_47f12c
        public_47f124 : nop
        mov dword ptr ss : [esp+0x28], 0
        public_47f12c : nop
        push edi
        call esi
        add esp, 4
        test eax, eax
        je public_47f149
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_47f149
        fld dword ptr ds : [eax+0x5C]
        fstp dword ptr ss : [esp+0x14]
        jmp public_47f151
        public_47f149 : nop
        mov dword ptr ss : [esp+0x14], 0
        public_47f151 : nop
        fld dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_47f1d5
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_47f1d5
        mov edi, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [edi+0x35C]
        test al, al
        je public_47f19d
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [edi+0x974]
        lea edx, ss:[esp+0x14]
        push edx
        add ecx, 0x330
        jmp public_47f1ad
        public_47f19d : nop
        lea eax, ss:[esp+0x1C]
        lea ecx, ss:[esp+0x10]
        push eax
        push ecx
        lea ecx, ds:[edi+0x330]
        public_47f1ad : nop
        call public_4c63e0
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x14]
        call public_5b7ec0
        test eax, eax
        jge public_47f1cd
        xor eax, eax
        public_47f1cd : nop
        cmp ebp, eax
        jle public_47f1d9
        mov ebp, eax
        jmp public_47f1d9
        public_47f1d5 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_47f1d9 : nop
        mov al, byte ptr ds : [edi+0x35C]
        test al, al
        mov edx, dword ptr ds : [public_5c6398]
        mov esi, dword ptr ds : [edx]
        push 0x3F800000
        push 0
        je public_47f207
        mov eax, dword ptr ds : [ebx+0xB8]
        mov ecx, dword ptr ds : [edi+0x974]
        push eax
        add ecx, 0x34C
        jmp public_47f214
        public_47f207 : nop
        mov ecx, dword ptr ds : [ebx+0xB8]
        push ecx
        lea ecx, ds:[edi+0x34C]
        public_47f214 : nop
        call dword ptr ds : [public_5c6384]
        test eax, eax
        je public_47f221
        sub esi, dword ptr ds : [eax+0x14]
        public_47f221 : nop
        cmp ebp, esi
        jle public_47f227
        mov ebp, esi
        public_47f227 : nop
        imul ebp, dword ptr ss : [esp+0x20]
        add dword ptr ss : [esp+0x18], ebp
        pop ebp
        public_47f231 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop ebx
        pop esi
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x47f040)
    }
}

#undef public_47f065
#undef public_47f0f3
#undef public_47f0f7
#undef public_47f124
#undef public_47f12c
#undef public_47f149
#undef public_47f151
#undef public_47f19d
#undef public_47f1ad
#undef public_47f1cd
#undef public_47f1d5
#undef public_47f1d9
#undef public_47f207
#undef public_47f214
#undef public_47f221
#undef public_47f227
#undef public_47f231
