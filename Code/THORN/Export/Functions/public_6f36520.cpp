#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36520);
CLANG_FORWARD_PROC_SYMBOL(public_6f36f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f37150);
CLANG_FORWARD_PROC_SYMBOL(public_6f371a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f37200);
CLANG_FORWARD_PROC_SYMBOL(public_6f372d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f37a70);

#define public_6f36540 _public_6f36540
#define public_6f36553 _public_6f36553
#define public_6f36556 _public_6f36556
#define public_6f3655a _public_6f3655a
#define public_6f365b9 _public_6f365b9
#define public_6f365d1 _public_6f365d1
#define public_6f365db _public_6f365db
#define public_6f365df _public_6f365df
#define public_6f365f0 _public_6f365f0
#define public_6f3662b _public_6f3662b
#define public_6f3663a _public_6f3663a
#define public_6f3665b _public_6f3665b
#define public_6f3667c _public_6f3667c
#define public_6f3668a _public_6f3668a
#define public_6f366a9 _public_6f366a9
#define public_6f366b5 _public_6f366b5
#define public_6f366d1 _public_6f366d1
#define public_6f366ec _public_6f366ec
#define public_6f366f3 _public_6f366f3
#define public_6f36716 _public_6f36716

PROC_DECLARE(0x6f36520, internal_6f36520, public_6f36520);
extern "C" NAKED register_t __cdecl internal_6f36520()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6f3655a
        lea esp, ss:[esp]
        public_6f36540 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f36553
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f36556
        public_6f36553 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f36556 : nop
        cmp ebp, edx
        jne public_6f36540
        public_6f3655a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f366d1
        push 0
        push esi
        mov ecx, edi
        call public_6f37200
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f37a70
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f365b9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f365b9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f365b9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f365df
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f365df
        public_6f365b9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f365d1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f365db
        public_6f365d1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f365db
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f365db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f365df : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f366b5
        lea ecx, ds:[ecx]
        public_6f365f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6f366b5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3665b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f3662b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f366a9
        public_6f3662b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3663a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f37150
        public_6f3663a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f371a0
        jmp public_6f366a9
        public_6f3665b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f3667c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f366a9
        public_6f3667c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3668a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f371a0
        public_6f3668a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f37150
        public_6f366a9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f365f0
        public_6f366b5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f366d1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f366ec
        cmp esi, dword ptr ds : [ecx]
        je public_6f366f3
        lea ecx, ss:[esp+0x10]
        call public_6f372d0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f366ec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f36716
        public_6f366f3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f36f00
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6f36716 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f36520)
    }
}

#undef public_6f36540
#undef public_6f36553
#undef public_6f36556
#undef public_6f3655a
#undef public_6f365b9
#undef public_6f365d1
#undef public_6f365db
#undef public_6f365df
#undef public_6f365f0
#undef public_6f3662b
#undef public_6f3663a
#undef public_6f3665b
#undef public_6f3667c
#undef public_6f3668a
#undef public_6f366a9
#undef public_6f366b5
#undef public_6f366d1
#undef public_6f366ec
#undef public_6f366f3
#undef public_6f36716
