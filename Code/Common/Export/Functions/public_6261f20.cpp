#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a7b0);
CLANG_FORWARD_PROC_SYMBOL(public_626adc0);
CLANG_FORWARD_PROC_SYMBOL(public_626b230);
CLANG_FORWARD_PROC_SYMBOL(public_626b270);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_6261fa0 _public_6261fa0
#define public_6261fa4 _public_6261fa4
#define public_6261fc9 _public_6261fc9
#define public_6261fda _public_6261fda
#define public_6262000 _public_6262000
#define public_6262013 _public_6262013
#define public_6262020 _public_6262020
#define public_6262039 _public_6262039
#define public_6262040 _public_6262040
#define public_6262075 _public_6262075
#define public_6262083 _public_6262083

PROC_DECLARE(0x6261f20, internal_6261f20, public_6261f20);
extern "C" NAKED register_t __cdecl internal_6261f20()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ds : [ebx+0xC], eax
        lea eax, ss:[ebp+0x10]
        lea esi, ds:[ebx+0x10]
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6261fda
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x24], eax
        je public_6261fa0
        mov ecx, eax
        cmp eax, ecx
        jne public_6261fa0
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_626b230
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_6261fc9
        public_6261fa0 : nop
        cmp eax, edi
        je public_6261fc9
        public_6261fa4 : nop
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_626b270
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_626adc0
        cmp dword ptr ss : [esp+0x24], edi
        jne public_6261fa4
        public_6261fc9 : nop
        mov dl, byte ptr ss : [ebp+0x11]
        lea eax, ss:[ebp+0x10]
        push eax
        mov ecx, esi
        mov byte ptr ds : [esi+1], dl
        call public_626a7b0
        public_6261fda : nop
        lea ecx, ss:[ebp+0x24]
        lea edi, ds:[ebx+0x24]
        cmp edi, ecx
        je public_6262083
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], ecx
        je public_6262013
        lea ebx, ds:[ebx]
        public_6262000 : nop
        cmp ebp, ecx
        je public_6262013
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebp, dword ptr ss : [ebp]
        jne public_6262000
        public_6262013 : nop
        cmp eax, esi
        mov ebx, eax
        je public_6262039
        lea esp, ss:[esp]
        public_6262020 : nop
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp ebx, esi
        jne public_6262020
        mov ecx, dword ptr ss : [esp+0x24]
        public_6262039 : nop
        cmp ebp, ecx
        mov ebx, ebp
        je public_6262075
        nop 
        public_6262040 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push esi
        mov ecx, edi
        call public_62b9490
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_630cd00
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6262040
        public_6262075 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_6262083 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6261f20)
    }
}

#undef public_6261fa0
#undef public_6261fa4
#undef public_6261fc9
#undef public_6261fda
#undef public_6262000
#undef public_6262013
#undef public_6262020
#undef public_6262039
#undef public_6262040
#undef public_6262075
#undef public_6262083
