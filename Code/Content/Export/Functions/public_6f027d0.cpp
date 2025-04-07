#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f027d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f02f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f037d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f027f0 _public_6f027f0
#define public_6f02803 _public_6f02803
#define public_6f02806 _public_6f02806
#define public_6f0280a _public_6f0280a
#define public_6f02869 _public_6f02869
#define public_6f02881 _public_6f02881
#define public_6f0288b _public_6f0288b
#define public_6f0288f _public_6f0288f
#define public_6f028a0 _public_6f028a0
#define public_6f028db _public_6f028db
#define public_6f028ea _public_6f028ea
#define public_6f0290b _public_6f0290b
#define public_6f0292c _public_6f0292c
#define public_6f0293a _public_6f0293a
#define public_6f02959 _public_6f02959
#define public_6f02965 _public_6f02965
#define public_6f02981 _public_6f02981
#define public_6f0299c _public_6f0299c
#define public_6f029a3 _public_6f029a3
#define public_6f029c6 _public_6f029c6

PROC_DECLARE(0x6f027d0, internal_6f027d0, public_6f027d0);
extern "C" NAKED register_t __cdecl internal_6f027d0()
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
        je public_6f0280a
        lea esp, ss:[esp]
        public_6f027f0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f02803
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f02806
        public_6f02803 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f02806 : nop
        cmp ebp, edx
        jne public_6f027f0
        public_6f0280a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f02981
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
        call public_6f037d0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f02869
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f02869
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f02869
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f0288f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f0288f
        public_6f02869 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f02881
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f0288b
        public_6f02881 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f0288b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f0288b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f0288f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f02965
        lea ecx, ds:[ecx]
        public_6f028a0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6f02965
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f0290b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f028db
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f02959
        public_6f028db : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f028ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f028ea : nop
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
        jmp public_6f02959
        public_6f0290b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f0292c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f02959
        public_6f0292c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f0293a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f0293a : nop
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
        public_6f02959 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f028a0
        public_6f02965 : nop
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
        public_6f02981 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f0299c
        cmp esi, dword ptr ds : [ecx]
        je public_6f029a3
        lea ecx, ss:[esp+0x10]
        call public_6f4e3f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f0299c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f029c6
        public_6f029a3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f02f80
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
        public_6f029c6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f027d0)
    }
}

#undef public_6f027f0
#undef public_6f02803
#undef public_6f02806
#undef public_6f0280a
#undef public_6f02869
#undef public_6f02881
#undef public_6f0288b
#undef public_6f0288f
#undef public_6f028a0
#undef public_6f028db
#undef public_6f028ea
#undef public_6f0290b
#undef public_6f0292c
#undef public_6f0293a
#undef public_6f02959
#undef public_6f02965
#undef public_6f02981
#undef public_6f0299c
#undef public_6f029a3
#undef public_6f029c6
