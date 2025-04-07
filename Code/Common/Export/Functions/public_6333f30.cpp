#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6333f30);
CLANG_FORWARD_PROC_SYMBOL(public_63341a0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6333f48 _public_6333f48
#define public_6333f68 _public_6333f68
#define public_6333f6b _public_6333f6b
#define public_6333f70 _public_6333f70
#define public_6333fdc _public_6333fdc
#define public_6333ff4 _public_6333ff4
#define public_6333ffe _public_6333ffe
#define public_6334002 _public_6334002
#define public_6334010 _public_6334010
#define public_633404b _public_633404b
#define public_633405a _public_633405a
#define public_633407b _public_633407b
#define public_633409c _public_633409c
#define public_63340aa _public_63340aa
#define public_63340c9 _public_63340c9
#define public_63340d5 _public_63340d5
#define public_63340f1 _public_63340f1
#define public_6334109 _public_6334109
#define public_6334121 _public_6334121
#define public_6334144 _public_6334144

PROC_DECLARE(0x6333f30, internal_6333f30, public_6333f30);
extern "C" NAKED register_t __cdecl internal_6333f30()
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
        je public_6333f70
        public_6333f48 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov esi, ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        setl al
        test al, al
        je public_6333f68
        mov ebp, dword ptr ss : [ebp]
        jmp public_6333f6b
        public_6333f68 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6333f6b : nop
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6333f48
        public_6333f70 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_63340f1
        push 0
        push esi
        mov ecx, edi
        call public_626b3a0
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], ecx
        add eax, 0xC
        push ebx
        push eax
        call public_62bee40
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6333fdc
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6333fdc
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ebx]
        push edx
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jl public_6333fdc
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6334002
        mov dword ptr ds : [eax+8], ebx
        jmp public_6334002
        public_6333fdc : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6333ff4
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6333ffe
        public_6333ff4 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6333ffe
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6333ffe : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6334002 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_63340d5
        public_6334010 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_63340d5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_633407b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_633404b
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_63340c9
        public_633404b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_633405a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_633405a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_63340c9
        public_633407b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_633409c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_63340c9
        public_633409c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_63340aa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_63340aa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_63340c9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6334010
        public_63340d5 : nop
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
        public_63340f1 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6334109
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        je public_6334121
        lea ecx, ss:[esp+0x10]
        call public_626ba00
        public_6334109 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jge public_6334144
        public_6334121 : nop
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_63341a0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6334144 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 0
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6333f30)
    }
}

#undef public_6333f48
#undef public_6333f68
#undef public_6333f6b
#undef public_6333f70
#undef public_6333fdc
#undef public_6333ff4
#undef public_6333ffe
#undef public_6334002
#undef public_6334010
#undef public_633404b
#undef public_633405a
#undef public_633407b
#undef public_633409c
#undef public_63340aa
#undef public_63340c9
#undef public_63340d5
#undef public_63340f1
#undef public_6334109
#undef public_6334121
#undef public_6334144
