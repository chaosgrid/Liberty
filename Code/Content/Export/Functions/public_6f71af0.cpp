#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71f70);

#define public_6f71b10 _public_6f71b10
#define public_6f71b1d _public_6f71b1d
#define public_6f71b38 _public_6f71b38
#define public_6f71b50 _public_6f71b50
#define public_6f71b5e _public_6f71b5e
#define public_6f71b67 _public_6f71b67
#define public_6f71b71 _public_6f71b71
#define public_6f71b80 _public_6f71b80
#define public_6f71b84 _public_6f71b84
#define public_6f71b88 _public_6f71b88
#define public_6f71b91 _public_6f71b91
#define public_6f71ba0 _public_6f71ba0
#define public_6f71ba7 _public_6f71ba7
#define public_6f71ba9 _public_6f71ba9
#define public_6f71bb6 _public_6f71bb6
#define public_6f71bc4 _public_6f71bc4
#define public_6f71bc7 _public_6f71bc7

PROC_DECLARE(0x6f71af0, internal_6f71af0, public_6f71af0);
extern "C" NAKED register_t __cdecl internal_6f71af0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, ecx
        mov ebx, dword ptr ss : [esp+0x10]
        je public_6f71b38
        nop 
        public_6f71b10 : nop
        cmp dword ptr ds : [eax], ebx
        je public_6f71b1d
        add eax, 4
        cmp eax, ecx
        jne public_6f71b10
        jmp public_6f71b38
        public_6f71b1d : nop
        cmp eax, ecx
        je public_6f71b38
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        push ecx
        add eax, 4
        push eax
        call public_6f71f70
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        public_6f71b38 : nop
        mov edi, dword ptr ds : [esi+0x4C]
        cmp eax, edi
        je public_6f71b67
        mov ecx, eax
        mov edx, edi
        mov eax, edi
        cmp eax, edx
        je public_6f71b5e
        lea esp, ss:[esp]
        public_6f71b50 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f71b50
        public_6f71b5e : nop
        pop edi
        mov dword ptr ds : [esi+0x4C], ecx
        pop esi
        pop ebx
        ret 4
        public_6f71b67 : nop
        mov edi, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, edi
        je public_6f71b84
        public_6f71b71 : nop
        cmp dword ptr ds : [eax], ebx
        je public_6f71b80
        add eax, 4
        cmp eax, edi
        jne public_6f71b71
        mov ecx, eax
        jmp public_6f71ba9
        public_6f71b80 : nop
        cmp eax, edi
        jne public_6f71b88
        public_6f71b84 : nop
        mov ecx, eax
        jmp public_6f71ba9
        public_6f71b88 : nop
        mov edx, eax
        add eax, 4
        cmp eax, edi
        je public_6f71ba7
        public_6f71b91 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, ebx
        je public_6f71ba0
        mov dword ptr ds : [edx], ecx
        mov ebx, dword ptr ss : [esp+0x10]
        add edx, 4
        public_6f71ba0 : nop
        add eax, 4
        cmp eax, edi
        jne public_6f71b91
        public_6f71ba7 : nop
        mov ecx, edx
        public_6f71ba9 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp ecx, eax
        je public_6f71bc7
        mov edx, eax
        cmp eax, edx
        je public_6f71bc4
        public_6f71bb6 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f71bb6
        public_6f71bc4 : nop
        mov dword ptr ds : [esi+0x3C], ecx
        public_6f71bc7 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f71af0)
    }
}

#undef public_6f71b10
#undef public_6f71b1d
#undef public_6f71b38
#undef public_6f71b50
#undef public_6f71b5e
#undef public_6f71b67
#undef public_6f71b71
#undef public_6f71b80
#undef public_6f71b84
#undef public_6f71b88
#undef public_6f71b91
#undef public_6f71ba0
#undef public_6f71ba7
#undef public_6f71ba9
#undef public_6f71bb6
#undef public_6f71bc4
#undef public_6f71bc7
