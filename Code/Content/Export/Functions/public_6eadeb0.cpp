#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eadeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);
CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eaded0 _public_6eaded0
#define public_6eadee3 _public_6eadee3
#define public_6eadee6 _public_6eadee6
#define public_6eadeea _public_6eadeea
#define public_6eadf49 _public_6eadf49
#define public_6eadf61 _public_6eadf61
#define public_6eadf6b _public_6eadf6b
#define public_6eadf6f _public_6eadf6f
#define public_6eadf80 _public_6eadf80
#define public_6eadfbb _public_6eadfbb
#define public_6eadfca _public_6eadfca
#define public_6eadfeb _public_6eadfeb
#define public_6eae00c _public_6eae00c
#define public_6eae01a _public_6eae01a
#define public_6eae039 _public_6eae039
#define public_6eae045 _public_6eae045
#define public_6eae061 _public_6eae061
#define public_6eae07c _public_6eae07c
#define public_6eae083 _public_6eae083
#define public_6eae0a6 _public_6eae0a6

PROC_DECLARE(0x6eadeb0, internal_6eadeb0, public_6eadeb0);
extern "C" NAKED register_t __cdecl internal_6eadeb0()
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
        je public_6eadeea
        lea esp, ss:[esp]
        public_6eaded0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6eadee3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eadee6
        public_6eadee3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eadee6 : nop
        cmp ebp, edx
        jne public_6eaded0
        public_6eadeea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eae061
        push 0
        push esi
        mov ecx, edi
        call public_6f214c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f305b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eadf49
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eadf49
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6eadf49
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eadf6f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eadf6f
        public_6eadf49 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eadf61
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eadf6b
        public_6eadf61 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eadf6b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eadf6b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eadf6f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eae045
        lea ecx, ds:[ecx]
        public_6eadf80 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6eae045
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eadfeb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6eadfbb
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eae039
        public_6eadfbb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eadfca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eadfca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eae039
        public_6eadfeb : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6eae00c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eae039
        public_6eae00c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eae01a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eae01a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eae039 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eadf80
        public_6eae045 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eae061 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eae07c
        cmp esi, dword ptr ds : [ecx]
        je public_6eae083
        lea ecx, ss:[esp+0x10]
        call public_6f00610
        mov edx, dword ptr ss : [esp+0x10]
        public_6eae07c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6eae0a6
        public_6eae083 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f21210
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
        public_6eae0a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eadeb0)
    }
}

#undef public_6eaded0
#undef public_6eadee3
#undef public_6eadee6
#undef public_6eadeea
#undef public_6eadf49
#undef public_6eadf61
#undef public_6eadf6b
#undef public_6eadf6f
#undef public_6eadf80
#undef public_6eadfbb
#undef public_6eadfca
#undef public_6eadfeb
#undef public_6eae00c
#undef public_6eae01a
#undef public_6eae039
#undef public_6eae045
#undef public_6eae061
#undef public_6eae07c
#undef public_6eae083
#undef public_6eae0a6
