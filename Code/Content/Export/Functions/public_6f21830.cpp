#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f21830);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f21851 _public_6f21851
#define public_6f2187a _public_6f2187a
#define public_6f21892 _public_6f21892
#define public_6f218ad _public_6f218ad
#define public_6f218d0 _public_6f218d0
#define public_6f218e2 _public_6f218e2
#define public_6f21900 _public_6f21900
#define public_6f21948 _public_6f21948
#define public_6f21960 _public_6f21960
#define public_6f21979 _public_6f21979
#define public_6f21987 _public_6f21987
#define public_6f219ba _public_6f219ba

PROC_DECLARE(0x6f21830, internal_6f21830, public_6f21830);
extern "C" NAKED register_t __cdecl internal_6f21830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6f219ba
        push ebp
        push esi
        push edi
        add ebx, 8
        lea ebp, ds:[eax+8]
        public_6f21851 : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0x88
        sub edi, eax
        sub ebx, eax
        sub edx, eax
        sub ebp, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edx
        jne public_6f2187a
        mov dword ptr ss : [ebp-4], ebx
        mov byte ptr ss : [ebp], bl
        jmp public_6f218ad
        public_6f2187a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f21892
        mov eax, 0x2F
        public_6f21892 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ss : [ebp-4], eax
        public_6f218ad : nop
        mov eax, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x30], eax
        lea eax, ss:[ebp+0x34]
        lea ecx, ds:[ebx+0x34]
        cmp eax, ecx
        je public_6f21900
        mov edi, dword ptr ss : [ebp+0x38]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ebx+0x38]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6f218e2
        nop 
        public_6f218d0 : nop
        cmp esi, ecx
        je public_6f218e2
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6f218d0
        public_6f218e2 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0x34]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x34]
        call public_6ed0230
        public_6f21900 : nop
        mov dl, byte ptr ds : [ebx+0x40]
        mov byte ptr ss : [ebp+0x40], dl
        mov al, byte ptr ds : [ebx+0x41]
        mov byte ptr ss : [ebp+0x41], al
        mov ecx, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], ecx
        mov dl, byte ptr ds : [ebx+0x48]
        mov byte ptr ss : [ebp+0x48], dl
        mov eax, dword ptr ds : [ebx+0x4C]
        lea esi, ss:[ebp+0x50]
        mov ecx, esi
        mov dword ptr ss : [ebp+0x4C], eax
        call public_6ed2a00
        lea ecx, ds:[ebx+0x50]
        push ecx
        mov ecx, esi
        call public_6f93490
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [ebp+0x54]
        je public_6f21960
        public_6f21948 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f21948
        public_6f21960 : nop
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp+0x5C], ecx
        mov ecx, dword ptr ss : [ebp+0x60]
        test ecx, ecx
        je public_6f21979
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x60], 0
        public_6f21979 : nop
        mov ecx, dword ptr ds : [ebx+0x60]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x60], ecx
        je public_6f21987
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f21987 : nop
        lea ecx, ds:[ebx+0x64]
        push ecx
        lea ecx, ss:[ebp+0x64]
        call public_6ef8910
        mov edx, dword ptr ds : [ebx+0x74]
        mov dword ptr ss : [ebp+0x74], edx
        mov eax, dword ptr ds : [ebx+0x78]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x78], eax
        cmp dword ptr ss : [esp+0x24], edx
        mov ecx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x7C], ecx
        jne public_6f21851
        mov eax, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        public_6f219ba : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f21830)
    }
}

#undef public_6f21851
#undef public_6f2187a
#undef public_6f21892
#undef public_6f218ad
#undef public_6f218d0
#undef public_6f218e2
#undef public_6f21900
#undef public_6f21948
#undef public_6f21960
#undef public_6f21979
#undef public_6f21987
#undef public_6f219ba
