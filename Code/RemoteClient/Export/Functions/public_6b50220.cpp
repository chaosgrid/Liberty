#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50220);
CLANG_FORWARD_PROC_SYMBOL(public_6b508e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50b40);
CLANG_FORWARD_PROC_SYMBOL(public_6b50b90);
CLANG_FORWARD_PROC_SYMBOL(public_6b50bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50c10);
CLANG_FORWARD_PROC_SYMBOL(public_6b50cc0);

#define public_6b50238 _public_6b50238
#define public_6b50251 _public_6b50251
#define public_6b50254 _public_6b50254
#define public_6b5025d _public_6b5025d
#define public_6b502c7 _public_6b502c7
#define public_6b502df _public_6b502df
#define public_6b502e9 _public_6b502e9
#define public_6b502ed _public_6b502ed
#define public_6b50300 _public_6b50300
#define public_6b5033b _public_6b5033b
#define public_6b5034a _public_6b5034a
#define public_6b5036b _public_6b5036b
#define public_6b5038c _public_6b5038c
#define public_6b5039a _public_6b5039a
#define public_6b503b9 _public_6b503b9
#define public_6b503c5 _public_6b503c5
#define public_6b503e1 _public_6b503e1
#define public_6b50413 _public_6b50413
#define public_6b5041c _public_6b5041c
#define public_6b50459 _public_6b50459

PROC_DECLARE(0x6b50220, internal_6b50220, public_6b50220);
extern "C" NAKED register_t __cdecl internal_6b50220()
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
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_6b5025d
        public_6b50238 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        mov esi, ebp
        call dword ptr ds : [public_6b6b15c]
        add esp, 8
        test al, al
        je public_6b50251
        mov ebp, dword ptr ss : [ebp]
        jmp public_6b50254
        public_6b50251 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6b50254 : nop
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_6b50238
        public_6b5025d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6b503e1
        push 0
        push esi
        mov ecx, edi
        call public_6b50bf0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6b50cc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6b502c7
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6b502c7
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [public_6b6b15c]
        add esp, 8
        test al, al
        jne public_6b502c7
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b502ed
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b502ed
        public_6b502c7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6b502df
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b502e9
        public_6b502df : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b502e9
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6b502e9 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6b502ed : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6b503c5
        nop 
        lea esp, ss:[esp]
        public_6b50300 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6b503c5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b5036b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6b5033b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6b503b9
        public_6b5033b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b5034a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6b50b40
        public_6b5034a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6b50b90
        jmp public_6b503b9
        public_6b5036b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6b5038c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6b503b9
        public_6b5038c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b5039a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6b50b90
        public_6b5039a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6b50b40
        public_6b503b9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6b50300
        public_6b503c5 : nop
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
        public_6b503e1 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6b5041c
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_6b50413
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_6b508e0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6b50413 : nop
        lea ecx, ss:[esp+0x10]
        call public_6b50c10
        public_6b5041c : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_6b6b15c]
        add esp, 8
        test al, al
        je public_6b50459
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6b508e0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6b50459 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b50220)
    }
}

#undef public_6b50238
#undef public_6b50251
#undef public_6b50254
#undef public_6b5025d
#undef public_6b502c7
#undef public_6b502df
#undef public_6b502e9
#undef public_6b502ed
#undef public_6b50300
#undef public_6b5033b
#undef public_6b5034a
#undef public_6b5036b
#undef public_6b5038c
#undef public_6b5039a
#undef public_6b503b9
#undef public_6b503c5
#undef public_6b503e1
#undef public_6b50413
#undef public_6b5041c
#undef public_6b50459
