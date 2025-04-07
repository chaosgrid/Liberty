#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6322fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6323ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6323009 _public_6323009
#define public_632301d _public_632301d
#define public_6323023 _public_6323023
#define public_6323031 _public_6323031
#define public_6323072 _public_6323072
#define public_632308b _public_632308b
#define public_632309e _public_632309e
#define public_63230a9 _public_63230a9
#define public_63230ac _public_63230ac
#define public_63230b1 _public_63230b1
#define public_63230da _public_63230da
#define public_63230f3 _public_63230f3
#define public_6323106 _public_6323106
#define public_6323110 _public_6323110
#define public_6323133 _public_6323133
#define public_632314b _public_632314b
#define public_632315e _public_632315e
#define public_632316b _public_632316b
#define public_632316d _public_632316d
#define public_6323173 _public_6323173
#define public_632319c _public_632319c
#define public_63231af _public_63231af
#define public_63231ba _public_63231ba
#define public_63231bd _public_63231bd
#define public_63231bf _public_63231bf
#define public_63231c2 _public_63231c2
#define public_63231ce _public_63231ce

PROC_DECLARE(0x6322fa0, internal_6322fa0, public_6322fa0);
extern "C" NAKED register_t __cdecl internal_6322fa0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x48
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x44], 0
        mov byte ptr ds : [ebx+0x45], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6323ee0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6323009
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6323009
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6323009
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6323023
        mov dword ptr ds : [eax+8], ebx
        jmp public_6323023
        public_6323009 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_632301d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6323023
        public_632301d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6323023
        mov dword ptr ds : [eax], ebx
        public_6323023 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_63231ce
        public_6323031 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_63231ce
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6323110
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x44], 0
        jne public_6323072
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_63231c2
        public_6323072 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_63230b1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_632308b
        mov dword ptr ds : [edx+4], eax
        public_632308b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_632309e
        mov dword ptr ds : [edx+4], ecx
        jmp public_63230ac
        public_632309e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_63230a9
        mov dword ptr ds : [edx], ecx
        jmp public_63230ac
        public_63230a9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_63230ac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_63230b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_63230da
        mov dword ptr ds : [edi+4], ecx
        public_63230da : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63230f3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63231bf
        public_63230f3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6323106
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63231bf
        public_6323106 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63231bf
        public_6323110 : nop
        cmp byte ptr ds : [edx+0x44], 0
        jne public_6323133
        mov byte ptr ds : [ecx+0x44], 1
        mov byte ptr ds : [edx+0x44], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_63231c2
        public_6323133 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6323173
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_632314b
        mov dword ptr ds : [edx+4], eax
        public_632314b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_632315e
        mov dword ptr ds : [edx+4], ecx
        jmp public_632316d
        public_632315e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_632316b
        mov dword ptr ds : [edx+8], ecx
        jmp public_632316d
        public_632316b : nop
        mov dword ptr ds : [edx], ecx
        public_632316d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6323173 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_632319c
        mov dword ptr ds : [edi+4], ecx
        public_632319c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63231af
        mov dword ptr ds : [edi+4], edx
        jmp public_63231bd
        public_63231af : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_63231ba
        mov dword ptr ds : [edi], edx
        jmp public_63231bd
        public_63231ba : nop
        mov dword ptr ds : [edi+8], edx
        public_63231bd : nop
        mov dword ptr ds : [edx], ecx
        public_63231bf : nop
        mov dword ptr ds : [ecx+4], edx
        public_63231c2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6323031
        public_63231ce : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6322fa0)
    }
}

#undef public_6323009
#undef public_632301d
#undef public_6323023
#undef public_6323031
#undef public_6323072
#undef public_632308b
#undef public_632309e
#undef public_63230a9
#undef public_63230ac
#undef public_63230b1
#undef public_63230da
#undef public_63230f3
#undef public_6323106
#undef public_6323110
#undef public_6323133
#undef public_632314b
#undef public_632315e
#undef public_632316b
#undef public_632316d
#undef public_6323173
#undef public_632319c
#undef public_63231af
#undef public_63231ba
#undef public_63231bd
#undef public_63231bf
#undef public_63231c2
#undef public_63231ce
