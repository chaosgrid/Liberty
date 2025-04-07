#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bedf90);
CLANG_FORWARD_PROC_SYMBOL(public_6bee370);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bee003 _public_6bee003
#define public_6bee017 _public_6bee017
#define public_6bee01d _public_6bee01d
#define public_6bee030 _public_6bee030
#define public_6bee071 _public_6bee071
#define public_6bee08a _public_6bee08a
#define public_6bee09d _public_6bee09d
#define public_6bee0a8 _public_6bee0a8
#define public_6bee0ab _public_6bee0ab
#define public_6bee0b0 _public_6bee0b0
#define public_6bee0d9 _public_6bee0d9
#define public_6bee0f2 _public_6bee0f2
#define public_6bee105 _public_6bee105
#define public_6bee10f _public_6bee10f
#define public_6bee132 _public_6bee132
#define public_6bee14a _public_6bee14a
#define public_6bee15d _public_6bee15d
#define public_6bee16a _public_6bee16a
#define public_6bee16c _public_6bee16c
#define public_6bee172 _public_6bee172
#define public_6bee19b _public_6bee19b
#define public_6bee1ae _public_6bee1ae
#define public_6bee1b9 _public_6bee1b9
#define public_6bee1bc _public_6bee1bc
#define public_6bee1be _public_6bee1be
#define public_6bee1c1 _public_6bee1c1
#define public_6bee1cd _public_6bee1cd

PROC_DECLARE(0x6bedf90, internal_6bedf90, public_6bedf90);
extern "C" NAKED register_t __cdecl internal_6bedf90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6c09d26
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6bee370
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6bee003
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6bee003
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_6c0b188]
        add esp, 8
        test al, al
        jne public_6bee003
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6bee01d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6bee01d
        public_6bee003 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6bee017
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6bee01d
        public_6bee017 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6bee01d
        mov dword ptr ds : [eax], ebx
        public_6bee01d : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6bee1cd
        nop 
        lea esp, ss:[esp]
        public_6bee030 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6bee1cd
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6bee10f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6bee071
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6bee1c1
        public_6bee071 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6bee0b0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6bee08a
        mov dword ptr ds : [edx+4], eax
        public_6bee08a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6bee09d
        mov dword ptr ds : [edx+4], ecx
        jmp public_6bee0ab
        public_6bee09d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6bee0a8
        mov dword ptr ds : [edx], ecx
        jmp public_6bee0ab
        public_6bee0a8 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6bee0ab : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6bee0b0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6bee0d9
        mov dword ptr ds : [edi+4], ecx
        public_6bee0d9 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6bee0f2
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6bee1be
        public_6bee0f2 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6bee105
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6bee1be
        public_6bee105 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6bee1be
        public_6bee10f : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6bee132
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6bee1c1
        public_6bee132 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6bee172
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6bee14a
        mov dword ptr ds : [edx+4], eax
        public_6bee14a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6bee15d
        mov dword ptr ds : [edx+4], ecx
        jmp public_6bee16c
        public_6bee15d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6bee16a
        mov dword ptr ds : [edx+8], ecx
        jmp public_6bee16c
        public_6bee16a : nop
        mov dword ptr ds : [edx], ecx
        public_6bee16c : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6bee172 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6bee19b
        mov dword ptr ds : [edi+4], ecx
        public_6bee19b : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6bee1ae
        mov dword ptr ds : [edi+4], edx
        jmp public_6bee1bc
        public_6bee1ae : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6bee1b9
        mov dword ptr ds : [edi], edx
        jmp public_6bee1bc
        public_6bee1b9 : nop
        mov dword ptr ds : [edi+8], edx
        public_6bee1bc : nop
        mov dword ptr ds : [edx], ecx
        public_6bee1be : nop
        mov dword ptr ds : [ecx+4], edx
        public_6bee1c1 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6bee030
        public_6bee1cd : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6bedf90)
    }
}

#undef public_6bee003
#undef public_6bee017
#undef public_6bee01d
#undef public_6bee030
#undef public_6bee071
#undef public_6bee08a
#undef public_6bee09d
#undef public_6bee0a8
#undef public_6bee0ab
#undef public_6bee0b0
#undef public_6bee0d9
#undef public_6bee0f2
#undef public_6bee105
#undef public_6bee10f
#undef public_6bee132
#undef public_6bee14a
#undef public_6bee15d
#undef public_6bee16a
#undef public_6bee16c
#undef public_6bee172
#undef public_6bee19b
#undef public_6bee1ae
#undef public_6bee1b9
#undef public_6bee1bc
#undef public_6bee1be
#undef public_6bee1c1
#undef public_6bee1cd
