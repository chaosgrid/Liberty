#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b160);
CLANG_FORWARD_PROC_SYMBOL(public_62fc710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fc744 _public_62fc744
#define public_62fc746 _public_62fc746
#define public_62fc74e _public_62fc74e
#define public_62fc753 _public_62fc753
#define public_62fc75f _public_62fc75f
#define public_62fc780 _public_62fc780
#define public_62fc794 _public_62fc794
#define public_62fc7a0 _public_62fc7a0
#define public_62fc7bc _public_62fc7bc
#define public_62fc7d8 _public_62fc7d8
#define public_62fc7e0 _public_62fc7e0
#define public_62fc7f3 _public_62fc7f3
#define public_62fc837 _public_62fc837
#define public_62fc856 _public_62fc856
#define public_62fc885 _public_62fc885
#define public_62fc890 _public_62fc890
#define public_62fc8ab _public_62fc8ab
#define public_62fc8c0 _public_62fc8c0
#define public_62fc8d8 _public_62fc8d8
#define public_62fc8e1 _public_62fc8e1
#define public_62fc8e5 _public_62fc8e5
#define public_62fc905 _public_62fc905
#define public_62fc917 _public_62fc917
#define public_62fc932 _public_62fc932
#define public_62fc94a _public_62fc94a
#define public_62fc960 _public_62fc960
#define public_62fc984 _public_62fc984
#define public_62fc992 _public_62fc992
#define public_62fc9b3 _public_62fc9b3
#define public_62fc9bf _public_62fc9bf

PROC_DECLARE(0x62fc710, internal_62fc710, public_62fc710);
extern "C" NAKED register_t __cdecl internal_62fc710()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 4
        cmp eax, ebx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_62fc856
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_62fc744
        mov eax, esi
        sub eax, ecx
        sar eax, 4
        cmp ebx, eax
        jb public_62fc746
        public_62fc744 : nop
        mov eax, ebx
        public_62fc746 : nop
        test ecx, ecx
        jne public_62fc74e
        xor esi, esi
        jmp public_62fc753
        public_62fc74e : nop
        sub esi, ecx
        sar esi, 4
        public_62fc753 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_62fc75f
        xor eax, eax
        public_62fc75f : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        je public_62fc794
        public_62fc780 : nop
        push esi
        push edi
        call public_627b160
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebp
        jne public_62fc780
        public_62fc794 : nop
        test ebx, ebx
        mov esi, edi
        jbe public_62fc7bc
        mov dword ptr ss : [esp+0x1C], ebx
        mov edi, edi
        public_62fc7a0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push esi
        call public_627b160
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62fc7a0
        public_62fc7bc : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, ebx
        shl eax, 4
        add eax, edi
        mov edi, dword ptr ds : [ecx+8]
        cmp ebp, edi
        mov esi, ebp
        je public_62fc7f3
        sub eax, ebp
        mov dword ptr ss : [esp+0x24], eax
        jmp public_62fc7e0
        public_62fc7d8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_62fc7e0 : nop
        add eax, esi
        push esi
        push eax
        call public_627b160
        add esi, 0x10
        add esp, 8
        cmp esi, edi
        jne public_62fc7d8
        public_62fc7f3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        add eax, esi
        add esp, 4
        test edx, edx
        mov dword ptr ds : [ecx+0xC], eax
        jne public_62fc837
        xor eax, eax
        mov eax, ebx
        pop edi
        shl eax, 4
        add eax, esi
        mov dword ptr ds : [ecx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_62fc837 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        add eax, ebx
        pop edi
        shl eax, 4
        add eax, esi
        mov dword ptr ds : [ecx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_62fc856 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        cmp edx, ebx
        jae public_62fc917
        mov eax, ebx
        shl eax, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], eax
        lea edx, ds:[eax+edi]
        mov ebp, edi
        je public_62fc8ab
        mov eax, edx
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_62fc890
        public_62fc885 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_62fc890 : nop
        add eax, ebp
        push ebp
        push eax
        call public_627b160
        add ebp, 0x10
        add esp, 8
        cmp ebp, esi
        jne public_62fc885
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc8ab : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        sub ebx, edx
        je public_62fc8d8
        lea ecx, ds:[ecx]
        public_62fc8c0 : nop
        push ebp
        push esi
        call public_627b160
        add esp, 8
        add esi, 0x10
        dec ebx
        jne public_62fc8c0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc8d8 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp edi, edx
        je public_62fc905
        jmp public_62fc8e5
        public_62fc8e1 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        public_62fc8e5 : nop
        mov ebx, dword ptr ss : [ebp]
        mov esi, edi
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        add edi, 0x10
        cmp edi, edx
        mov dword ptr ds : [esi+0xC], ebx
        jne public_62fc8e1
        public_62fc905 : nop
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 8
        ret 0xC
        public_62fc917 : nop
        test ebx, ebx
        jbe public_62fc9bf
        shl ebx, 4
        mov eax, ebx
        mov ebx, esi
        sub ebx, eax
        cmp ebx, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x1C], eax
        je public_62fc94a
        public_62fc932 : nop
        push ebx
        push ebp
        call public_627b160
        add ebx, 0x10
        add esp, 8
        add ebp, 0x10
        cmp ebx, esi
        jne public_62fc932
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc94a : nop
        mov edx, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, edx
        sub eax, ebx
        cmp edi, eax
        je public_62fc984
        lea esp, ss:[esp]
        public_62fc960 : nop
        sub eax, 0x10
        sub edx, 0x10
        cmp eax, edi
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        jne public_62fc960
        public_62fc984 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, edi
        cmp edi, eax
        je public_62fc9b3
        mov edx, dword ptr ss : [esp+0x24]
        public_62fc992 : nop
        mov esi, edx
        mov ebp, dword ptr ds : [esi]
        mov ebx, edi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add edi, 0x10
        cmp edi, eax
        mov dword ptr ds : [ebx+0xC], esi
        jne public_62fc992
        public_62fc9b3 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x1C]
        add eax, edx
        mov dword ptr ds : [ecx+8], eax
        public_62fc9bf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62fc710)
    }
}

#undef public_62fc744
#undef public_62fc746
#undef public_62fc74e
#undef public_62fc753
#undef public_62fc75f
#undef public_62fc780
#undef public_62fc794
#undef public_62fc7a0
#undef public_62fc7bc
#undef public_62fc7d8
#undef public_62fc7e0
#undef public_62fc7f3
#undef public_62fc837
#undef public_62fc856
#undef public_62fc885
#undef public_62fc890
#undef public_62fc8ab
#undef public_62fc8c0
#undef public_62fc8d8
#undef public_62fc8e1
#undef public_62fc8e5
#undef public_62fc905
#undef public_62fc917
#undef public_62fc932
#undef public_62fc94a
#undef public_62fc960
#undef public_62fc984
#undef public_62fc992
#undef public_62fc9b3
#undef public_62fc9bf
