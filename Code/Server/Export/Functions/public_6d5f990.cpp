#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5f990);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6d5f9a6 _public_6d5f9a6
#define public_6d5f9ae _public_6d5f9ae
#define public_6d5f9c0 _public_6d5f9c0
#define public_6d5f9c7 _public_6d5f9c7
#define public_6d5f9d1 _public_6d5f9d1
#define public_6d5f9d9 _public_6d5f9d9
#define public_6d5f9e5 _public_6d5f9e5
#define public_6d5fa3b _public_6d5fa3b
#define public_6d5fa80 _public_6d5fa80
#define public_6d5fa91 _public_6d5fa91
#define public_6d5fa99 _public_6d5fa99
#define public_6d5fb06 _public_6d5fb06
#define public_6d5fbf8 _public_6d5fbf8
#define public_6d5fc22 _public_6d5fc22
#define public_6d5fc49 _public_6d5fc49
#define public_6d5fc51 _public_6d5fc51
#define public_6d5fc57 _public_6d5fc57
#define public_6d5fc64 _public_6d5fc64
#define public_6d5fc66 _public_6d5fc66

PROC_DECLARE(0x6d5f990, internal_6d5f990, public_6d5f990);
extern "C" NAKED register_t __cdecl internal_6d5f990()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        jne public_6d5f9a6
        xor esi, esi
        jmp public_6d5f9ae
        public_6d5f9a6 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, edx
        sar esi, 5
        public_6d5f9ae : nop
        mov eax, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [eax+4]
        xor ecx, ecx
        test eax, eax
        je public_6d5f9c7
        nop 
        lea esp, ss:[esp]
        public_6d5f9c0 : nop
        mov eax, dword ptr ds : [eax]
        inc ecx
        test eax, eax
        jne public_6d5f9c0
        public_6d5f9c7 : nop
        add esi, ecx
        test edx, edx
        jne public_6d5f9d1
        xor eax, eax
        jmp public_6d5f9d9
        public_6d5f9d1 : nop
        mov eax, dword ptr ds : [edi+0xC]
        sub eax, edx
        sar eax, 5
        public_6d5f9d9 : nop
        cmp eax, esi
        jae public_6d5fa3b
        test esi, esi
        mov eax, esi
        jge public_6d5f9e5
        xor eax, eax
        public_6d5f9e5 : nop
        shl eax, 5
        push eax
        call public_6d60012
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d6423c]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64238]
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6d5ffb0
        shl esi, 5
        add esi, ebx
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0xC], esi
        call dword ptr ds : [public_6d645c0]
        shl eax, 5
        add eax, ebx
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], ebx
        public_6d5fa3b : nop
        mov ecx, dword ptr ss : [esp+0x70]
        push 0xE
        call dword ptr ds : [public_6d64954]
        mov esi, eax
        test esi, esi
        mov dword ptr ss : [esp+0x10], esi
        je public_6d5fc51
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d5fc51
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d5fc51
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], 0
        xor eax, eax
        mov edi, edi
        public_6d5fa80 : nop
        test eax, eax
        jne public_6d5fa91
        mov eax, dword ptr ss : [esp+0x78]
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x70], ebp
        jmp public_6d5fa99
        public_6d5fa91 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x70], ecx
        mov ebp, ecx
        public_6d5fa99 : nop
        test ebp, ebp
        je public_6d5fc49
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d64774]
        mov eax, dword ptr ds : [eax+0x50]
        push eax
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [public_6d642fc]
        mov ebx, eax
        mov edx, dword ptr ds : [ebx]
        add esp, 8
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d5fc22
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], 0
        fild qword ptr ss : [esp+0x24]
        fidiv dword ptr ss : [esp+0x18]
        call public_6d60150
        mov ebp, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x7C], ebx
        mov ebx, dword ptr ds : [esi+4]
        cmp ebx, eax
        je public_6d5fbf8
        public_6d5fb06 : nop
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64248]
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64a3c]
        mov esi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x74]
        sub esi, 0x20
        call dword ptr ds : [public_6d645bc]
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6d64710]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d6470c]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d645ac]
        push 0x3F800000
        mov ecx, esi
        call dword ptr ds : [public_6d64708]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d64258]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64704]
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_6d64248]
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64a3c]
        mov esi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x74]
        sub esi, 0x20
        call dword ptr ds : [public_6d645bc]
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6d64710]
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d6470c]
        push 0x3F800000
        mov ecx, esi
        call dword ptr ds : [public_6d64708]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d64258]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64704]
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d645ac]
        mov esi, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        sub esi, ebp
        add ebx, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x7C], esi
        jne public_6d5fb06
        mov esi, eax
        public_6d5fbf8 : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        add ecx, ebp
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, 0x20
        call dword ptr ds : [public_6d645ac]
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, 1
        mov dword ptr ss : [esp+0x14], eax
        jg public_6d5fc49
        mov eax, dword ptr ss : [esp+0x70]
        jmp public_6d5fa80
        public_6d5fc22 : nop
        lea ecx, ds:[ebx+8]
        mov esi, 0x100002
        call dword ptr ds : [public_6d642d4]
        mov edx, dword ptr ds : [public_6d64a44]
        push eax
        push 0x3A
/*FIXUP push offset public_6d6bb98 @0x6d5fc39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bb98
/*FIXUP push offset public_6d6bb40 @0x6d5fc3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bb40
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d5fc49 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 
        public_6d5fc51 : nop
        mov ebp, dword ptr ss : [esp+0x74]
        xor ebx, ebx
        public_6d5fc57 : nop
        test ebx, ebx
        jne public_6d5fc64
        mov eax, dword ptr ss : [esp+0x78]
        mov ebx, dword ptr ds : [eax+4]
        jmp public_6d5fc66
        public_6d5fc64 : nop
        mov ebx, dword ptr ds : [ebx]
        public_6d5fc66 : nop
        test ebx, ebx
        je public_6d5fc49
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_6d64248]
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64a3c]
        mov esi, dword ptr ds : [edi+8]
        mov ecx, ebp
        sub esi, 0x20
        call dword ptr ds : [public_6d645bc]
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6d64710]
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d644d4]
        add esp, 4
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d6470c]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d645ac]
        push 0x3F800000
        mov ecx, esi
        call dword ptr ds : [public_6d64708]
        mov ecx, esi
        call dword ptr ds : [public_6d64700]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64704]
        jmp public_6d5fc57
        UNREACHABLE_TRAP(0x6d5f990)
    }
}

#undef public_6d5f9a6
#undef public_6d5f9ae
#undef public_6d5f9c0
#undef public_6d5f9c7
#undef public_6d5f9d1
#undef public_6d5f9d9
#undef public_6d5f9e5
#undef public_6d5fa3b
#undef public_6d5fa80
#undef public_6d5fa91
#undef public_6d5fa99
#undef public_6d5fb06
#undef public_6d5fbf8
#undef public_6d5fc22
#undef public_6d5fc49
#undef public_6d5fc51
#undef public_6d5fc57
#undef public_6d5fc64
#undef public_6d5fc66
