#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f216a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f216c0 _public_6f216c0
#define public_6f216d0 _public_6f216d0
#define public_6f216e8 _public_6f216e8
#define public_6f21701 _public_6f21701
#define public_6f21723 _public_6f21723
#define public_6f21735 _public_6f21735
#define public_6f21753 _public_6f21753
#define public_6f217a0 _public_6f217a0
#define public_6f217b8 _public_6f217b8
#define public_6f217d1 _public_6f217d1
#define public_6f217df _public_6f217df
#define public_6f21825 _public_6f21825

PROC_DECLARE(0x6f216a0, internal_6f216a0, public_6f216a0);
extern "C" NAKED register_t __cdecl internal_6f216a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        je public_6f21825
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        add ebp, 8
        mov edi, edi
        public_6f216c0 : nop
        lea esi, ds:[ebx+8]
        test esi, esi
        jne public_6f216d0
        mov dword ptr ss : [ebp-4], esi
        mov byte ptr ss : [ebp], 0
        jmp public_6f21701
        public_6f216d0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f216e8
        mov eax, 0x2F
        public_6f216e8 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ss : [ebp-4], eax
        public_6f21701 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x30], eax
        lea eax, ss:[ebp+0x34]
        lea ecx, ds:[ebx+0x3C]
        cmp eax, ecx
        je public_6f21753
        mov edi, dword ptr ss : [ebp+0x38]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f21735
        public_6f21723 : nop
        cmp esi, ecx
        je public_6f21735
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6f21723
        public_6f21735 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[ebp+0x34]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x34]
        call public_6ed0230
        public_6f21753 : nop
        mov dl, byte ptr ds : [ebx+0x48]
        mov byte ptr ss : [ebp+0x40], dl
        mov al, byte ptr ds : [ebx+0x49]
        mov byte ptr ss : [ebp+0x41], al
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x44], ecx
        mov dl, byte ptr ds : [ebx+0x50]
        mov byte ptr ss : [ebp+0x48], dl
        mov eax, dword ptr ds : [ebx+0x54]
        lea esi, ss:[ebp+0x50]
        mov ecx, esi
        mov dword ptr ss : [ebp+0x4C], eax
        call public_6ed2a00
        lea eax, ds:[ebx+0x58]
        push eax
        mov ecx, esi
        call public_6f93490
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ss : [ebp+0x54]
        je public_6f217b8
        nop 
        lea esp, ss:[esp]
        public_6f217a0 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f217a0
        public_6f217b8 : nop
        mov ecx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x5C], ecx
        mov ecx, dword ptr ss : [ebp+0x60]
        test ecx, ecx
        je public_6f217d1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x60], 0
        public_6f217d1 : nop
        mov ecx, dword ptr ds : [ebx+0x68]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x60], ecx
        je public_6f217df
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f217df : nop
        lea eax, ds:[ebx+0x6C]
        push eax
        lea ecx, ss:[ebp+0x64]
        call public_6ef8910
        mov ecx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x74], ecx
        mov edx, dword ptr ds : [ebx+0x80]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x78], edx
        mov eax, dword ptr ds : [ebx+0x84]
        mov dword ptr ss : [ebp+0x7C], eax
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, 0x88
        add ebp, 0x88
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f216c0
        pop edi
        pop esi
        pop ebx
        public_6f21825 : nop
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f216a0)
    }
}

#undef public_6f216c0
#undef public_6f216d0
#undef public_6f216e8
#undef public_6f21701
#undef public_6f21723
#undef public_6f21735
#undef public_6f21753
#undef public_6f217a0
#undef public_6f217b8
#undef public_6f217d1
#undef public_6f217df
#undef public_6f21825
