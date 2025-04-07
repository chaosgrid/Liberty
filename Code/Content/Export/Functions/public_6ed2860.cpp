#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2860);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6ed2881 _public_6ed2881
#define public_6ed288d _public_6ed288d
#define public_6ed28a5 _public_6ed28a5
#define public_6ed28c0 _public_6ed28c0
#define public_6ed28e2 _public_6ed28e2
#define public_6ed28f4 _public_6ed28f4
#define public_6ed2912 _public_6ed2912
#define public_6ed2960 _public_6ed2960
#define public_6ed2978 _public_6ed2978
#define public_6ed2991 _public_6ed2991
#define public_6ed299f _public_6ed299f
#define public_6ed29f6 _public_6ed29f6

PROC_DECLARE(0x6ed2860, internal_6ed2860, public_6ed2860);
extern "C" NAKED register_t __cdecl internal_6ed2860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6ed29f6
        push ebp
        push esi
        push edi
        add ebx, 8
        lea ebp, ds:[eax+8]
        public_6ed2881 : nop
        test ebx, ebx
        jne public_6ed288d
        mov dword ptr ss : [ebp-4], ebx
        mov byte ptr ss : [ebp], bl
        jmp public_6ed28c0
        public_6ed288d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6ed28a5
        mov eax, 0x2F
        public_6ed28a5 : nop
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
        public_6ed28c0 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x30], eax
        lea eax, ss:[ebp+0x34]
        lea ecx, ds:[ebx+0x34]
        cmp eax, ecx
        je public_6ed2912
        mov edi, dword ptr ss : [ebp+0x38]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ebx+0x38]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6ed28f4
        public_6ed28e2 : nop
        cmp esi, ecx
        je public_6ed28f4
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6ed28e2
        public_6ed28f4 : nop
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
        public_6ed2912 : nop
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
        je public_6ed2978
        lea ebx, ds:[ebx]
        public_6ed2960 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ed2960
        public_6ed2978 : nop
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp+0x5C], ecx
        mov ecx, dword ptr ss : [ebp+0x60]
        test ecx, ecx
        je public_6ed2991
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x60], 0
        public_6ed2991 : nop
        mov ecx, dword ptr ds : [ebx+0x60]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x60], ecx
        je public_6ed299f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6ed299f : nop
        lea ecx, ds:[ebx+0x64]
        push ecx
        lea ecx, ss:[ebp+0x64]
        call public_6ef8910
        mov edx, dword ptr ds : [ebx+0x74]
        mov dword ptr ss : [ebp+0x74], edx
        mov eax, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x78], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [ebx+0x7C]
        add eax, 0x88
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x7C], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add eax, 0x88
        add ebp, 0x88
        add ebx, 0x88
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6ed2881
        mov eax, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        public_6ed29f6 : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ed2860)
    }
}

#undef public_6ed2881
#undef public_6ed288d
#undef public_6ed28a5
#undef public_6ed28c0
#undef public_6ed28e2
#undef public_6ed28f4
#undef public_6ed2912
#undef public_6ed2960
#undef public_6ed2978
#undef public_6ed2991
#undef public_6ed299f
#undef public_6ed29f6
