#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da17f0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1e10);
CLANG_FORWARD_PROC_SYMBOL(public_6da2060);
CLANG_FORWARD_PROC_SYMBOL(public_6da20c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da20e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da2190);
CLANG_FORWARD_PROC_SYMBOL(public_6da3470);

#define public_6da1810 _public_6da1810
#define public_6da1823 _public_6da1823
#define public_6da1826 _public_6da1826
#define public_6da182a _public_6da182a
#define public_6da1889 _public_6da1889
#define public_6da18a1 _public_6da18a1
#define public_6da18ab _public_6da18ab
#define public_6da18af _public_6da18af
#define public_6da18c0 _public_6da18c0
#define public_6da18fb _public_6da18fb
#define public_6da190a _public_6da190a
#define public_6da192b _public_6da192b
#define public_6da194c _public_6da194c
#define public_6da195a _public_6da195a
#define public_6da1979 _public_6da1979
#define public_6da1985 _public_6da1985
#define public_6da19a1 _public_6da19a1
#define public_6da19bc _public_6da19bc
#define public_6da19c3 _public_6da19c3
#define public_6da19e6 _public_6da19e6

PROC_DECLARE(0x6da17f0, internal_6da17f0, public_6da17f0);
extern "C" NAKED register_t __cdecl internal_6da17f0()
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
        je public_6da182a
        lea esp, ss:[esp]
        public_6da1810 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0x10]
        mov esi, ebp
        setb al
        test al, al
        je public_6da1823
        mov ebp, dword ptr ss : [ebp]
        jmp public_6da1826
        public_6da1823 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6da1826 : nop
        cmp ebp, edx
        jne public_6da1810
        public_6da182a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6da19a1
        push 0
        push esi
        mov ecx, edi
        call public_6da20c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0x10
        push ebx
        push eax
        call public_6da2190
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6da1889
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6da1889
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0x10]
        jb public_6da1889
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6da18af
        mov dword ptr ds : [eax+8], ebx
        jmp public_6da18af
        public_6da1889 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6da18a1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da18ab
        public_6da18a1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6da18ab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6da18ab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6da18af : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6da1985
        lea ecx, ds:[ecx]
        public_6da18c0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x48]
        test cl, cl
        jne public_6da1985
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6da192b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6da18fb
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6da1979
        public_6da18fb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6da190a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6da3470
        public_6da190a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x48], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6da2060
        jmp public_6da1979
        public_6da192b : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6da194c
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x48], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6da1979
        public_6da194c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6da195a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6da2060
        public_6da195a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6da3470
        public_6da1979 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6da18c0
        public_6da1985 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6da19a1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6da19bc
        cmp esi, dword ptr ds : [ecx]
        je public_6da19c3
        lea ecx, ss:[esp+0x10]
        call public_6da20e0
        mov edx, dword ptr ss : [esp+0x10]
        public_6da19bc : nop
        mov eax, dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [ebx]
        jae public_6da19e6
        public_6da19c3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6da1e10
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
        public_6da19e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6da17f0)
    }
}

#undef public_6da1810
#undef public_6da1823
#undef public_6da1826
#undef public_6da182a
#undef public_6da1889
#undef public_6da18a1
#undef public_6da18ab
#undef public_6da18af
#undef public_6da18c0
#undef public_6da18fb
#undef public_6da190a
#undef public_6da192b
#undef public_6da194c
#undef public_6da195a
#undef public_6da1979
#undef public_6da1985
#undef public_6da19a1
#undef public_6da19bc
#undef public_6da19c3
#undef public_6da19e6
