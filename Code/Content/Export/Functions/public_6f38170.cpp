#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f36d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38170);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f720);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f381d8 _public_6f381d8
#define public_6f381dd _public_6f381dd
#define public_6f381e5 _public_6f381e5
#define public_6f381f7 _public_6f381f7
#define public_6f38204 _public_6f38204
#define public_6f38220 _public_6f38220
#define public_6f38234 _public_6f38234
#define public_6f38297 _public_6f38297
#define public_6f382f6 _public_6f382f6
#define public_6f38313 _public_6f38313
#define public_6f38330 _public_6f38330
#define public_6f3834e _public_6f3834e
#define public_6f38360 _public_6f38360
#define public_6f3837b _public_6f3837b
#define public_6f3837f _public_6f3837f

PROC_DECLARE(0x6f38170, internal_6f38170, public_6f38170);
extern "C" NAKED register_t __cdecl internal_6f38170()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f38297
        test ebx, ebx
        je public_6f381d8
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6f381dd
        public_6f381d8 : nop
        mov ebp, 1
        public_6f381dd : nop
        test ebx, ebx
        jne public_6f381e5
        xor edx, edx
        jmp public_6f381f7
        public_6f381e5 : nop
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f381f7 : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f38204
        xor eax, eax
        public_6f38204 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f38234
        public_6f38220 : nop
        push ebx
        push ebp
        call public_6f36ef0
        add ebx, 0xC
        add esp, 8
        add ebp, 0xC
        cmp ebx, edi
        jne public_6f38220
        public_6f38234 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6f36ef0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0xC
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6f6f720
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f36d10
        inc eax
        lea ecx, ds:[eax+eax*2]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        jmp public_6f3837f
        public_6f38297 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f38313
        lea edx, ds:[edi+0xC]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f6f720
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_6f6f760
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f3837b
        public_6f382f6 : nop
        mov edx, ebp
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov edx, dword ptr ds : [edx+8]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edi+8], edx
        jne public_6f382f6
        jmp public_6f3837b
        public_6f38313 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF4
        push ecx
        mov ecx, esi
        call public_6f6f720
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-0xC]
        cmp edi, eax
        je public_6f3834e
        lea ebx, ds:[ebx]
        public_6f38330 : nop
        sub eax, 0xC
        sub ecx, 0xC
        cmp eax, edi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        jne public_6f38330
        public_6f3834e : nop
        lea eax, ds:[edi+0xC]
        cmp edi, eax
        je public_6f3837b
        mov ecx, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6f38360 : nop
        mov edx, ecx
        mov ebp, dword ptr ds : [edx]
        mov ebx, edi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ds : [ebx+8], edx
        jne public_6f38360
        public_6f3837b : nop
        add dword ptr ds : [esi+8], 0xC
        public_6f3837f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        lea eax, ds:[eax+eax*2]
        pop ebp
        lea eax, ds:[ecx+eax*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f38170)
    }
}

#undef public_6f381d8
#undef public_6f381dd
#undef public_6f381e5
#undef public_6f381f7
#undef public_6f38204
#undef public_6f38220
#undef public_6f38234
#undef public_6f38297
#undef public_6f382f6
#undef public_6f38313
#undef public_6f38330
#undef public_6f3834e
#undef public_6f38360
#undef public_6f3837b
#undef public_6f3837f
