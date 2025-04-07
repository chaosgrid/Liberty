#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38410);
CLANG_FORWARD_PROC_SYMBOL(public_6f38800);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f38430 _public_6f38430
#define public_6f38443 _public_6f38443
#define public_6f38446 _public_6f38446
#define public_6f3844a _public_6f3844a
#define public_6f384a9 _public_6f384a9
#define public_6f384c1 _public_6f384c1
#define public_6f384cb _public_6f384cb
#define public_6f384cf _public_6f384cf
#define public_6f384e0 _public_6f384e0
#define public_6f3851b _public_6f3851b
#define public_6f3852a _public_6f3852a
#define public_6f3854b _public_6f3854b
#define public_6f3856c _public_6f3856c
#define public_6f3857a _public_6f3857a
#define public_6f38599 _public_6f38599
#define public_6f385a5 _public_6f385a5
#define public_6f385c1 _public_6f385c1
#define public_6f385dc _public_6f385dc
#define public_6f385e3 _public_6f385e3
#define public_6f38606 _public_6f38606

PROC_DECLARE(0x6f38410, internal_6f38410, public_6f38410);
extern "C" NAKED register_t __cdecl internal_6f38410()
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
        je public_6f3844a
        lea esp, ss:[esp]
        public_6f38430 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f38443
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f38446
        public_6f38443 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f38446 : nop
        cmp ebp, edx
        jne public_6f38430
        public_6f3844a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f385c1
        push 0
        push esi
        mov ecx, edi
        call public_6eb3ac0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f310f0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f384a9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f384a9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f384a9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f384cf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f384cf
        public_6f384a9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f384c1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f384cb
        public_6f384c1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f384cb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f384cb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f384cf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f385a5
        lea ecx, ds:[ecx]
        public_6f384e0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6f385a5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3854b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f3851b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f38599
        public_6f3851b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3852a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3852a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f38599
        public_6f3854b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f3856c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f38599
        public_6f3856c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3857a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3857a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f38599 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f384e0
        public_6f385a5 : nop
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
        public_6f385c1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f385dc
        cmp esi, dword ptr ds : [ecx]
        je public_6f385e3
        lea ecx, ss:[esp+0x10]
        call public_6f4e3f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f385dc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f38606
        public_6f385e3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f38800
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
        public_6f38606 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f38410)
    }
}

#undef public_6f38430
#undef public_6f38443
#undef public_6f38446
#undef public_6f3844a
#undef public_6f384a9
#undef public_6f384c1
#undef public_6f384cb
#undef public_6f384cf
#undef public_6f384e0
#undef public_6f3851b
#undef public_6f3852a
#undef public_6f3854b
#undef public_6f3856c
#undef public_6f3857a
#undef public_6f38599
#undef public_6f385a5
#undef public_6f385c1
#undef public_6f385dc
#undef public_6f385e3
#undef public_6f38606
