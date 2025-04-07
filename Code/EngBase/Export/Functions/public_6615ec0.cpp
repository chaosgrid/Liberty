#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614f70);
CLANG_FORWARD_PROC_SYMBOL(public_66156f0);
CLANG_FORWARD_PROC_SYMBOL(public_6615ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6617220);
CLANG_FORWARD_PROC_SYMBOL(public_6617260);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6618fa0);
CLANG_FORWARD_PROC_SYMBOL(public_661d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6615f0d _public_6615f0d
#define public_6615f19 _public_6615f19
#define public_6615f25 _public_6615f25
#define public_6615f5e _public_6615f5e
#define public_6615f60 _public_6615f60
#define public_6615f6f _public_6615f6f
#define public_6615f75 _public_6615f75
#define public_6615f7d _public_6615f7d
#define public_6615f80 _public_6615f80
#define public_6615fa4 _public_6615fa4
#define public_6615fa9 _public_6615fa9
#define public_6615fec _public_6615fec
#define public_6615fee _public_6615fee
#define public_6615ffd _public_6615ffd
#define public_6616003 _public_6616003
#define public_661600b _public_661600b
#define public_661600e _public_661600e
#define public_6616017 _public_6616017
#define public_6616030 _public_6616030
#define public_661603b _public_661603b
#define public_661604c _public_661604c
#define public_6616054 _public_6616054
#define public_661606d _public_661606d
#define public_6616083 _public_6616083

PROC_DECLARE(0x6615ec0, internal_6615ec0, public_6615ec0);
extern "C" NAKED register_t __cdecl internal_6615ec0()
{
    __asm
    {
        push ecx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x18]
        push eax
        call public_6614f70
        mov ebp, eax
        test ebp, ebp
        mov dword ptr ss : [esp+8], ebp
        je public_6616083
        lea eax, ds:[edi+8]
        lea ecx, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6618fa0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+4]
        cmp eax, ecx
        je public_6616083
        push ebx
        mov ebx, dword ptr ds : [eax+0x1C]
        push esi
        lea esi, ds:[eax+0x1C]
        test ebx, ebx
        je public_661606d
        public_6615f0d : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6615f19
        cmp dword ptr ds : [ebx+0x14], edi
        je public_6615f25
        public_6615f19 : nop
        mov ebx, dword ptr ds : [ebx+0xC]
        test ebx, ebx
        jne public_6615f0d
        jmp public_661606d
        public_6615f25 : nop
        mov ebp, dword ptr ds : [ebx+0xC]
        test ebp, ebp
        je public_6615fa4
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6615fa4
        mov edx, dword ptr ds : [eax+4]
        mov ecx, 1
        cmp edx, ecx
        jne public_6615fa9
        push 0x34
        call public_66281dc
        add esp, 4
        test eax, eax
        je public_6615f5e
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        add edx, 0xC
        push edx
        call public_661d5b0
        jmp public_6615f60
        public_6615f5e : nop
        xor eax, eax
        public_6615f60 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        test edx, edx
        jne public_6615f6f
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        jmp public_6615f75
        public_6615f6f : nop
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edx+8], eax
        public_6615f75 : nop
        test ecx, ecx
        jne public_6615f7d
        mov dword ptr ds : [esi], eax
        jmp public_6615f80
        public_6615f7d : nop
        mov dword ptr ds : [ecx+0xC], eax
        public_6615f80 : nop
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+8]
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6616054
        mov eax, dword ptr ds : [eax+0xC]
        or byte ptr ds : [eax+0x20], 1
        jmp public_6616054
        public_6615fa4 : nop
        mov ecx, 1
        public_6615fa9 : nop
        test ebp, ebp
        je public_6616054
        cmp dword ptr ss : [ebp+4], ecx
        jne public_6616054
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6616017
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6616017
        cmp dword ptr ds : [eax+4], ecx
        jne public_6616017
        push 0x34
        call public_66281dc
        add esp, 4
        test eax, eax
        je public_6615fec
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, 0xC
        push ecx
        mov ecx, eax
        call public_661d5b0
        jmp public_6615fee
        public_6615fec : nop
        xor eax, eax
        public_6615fee : nop
        mov edx, dword ptr ss : [ebp+0xC]
        test edx, edx
        jne public_6615ffd
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        jmp public_6616003
        public_6615ffd : nop
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edx+8], eax
        public_6616003 : nop
        test ecx, ecx
        jne public_661600b
        mov dword ptr ds : [esi], eax
        jmp public_661600e
        public_661600b : nop
        mov dword ptr ds : [ecx+0xC], eax
        public_661600e : nop
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+8], ecx
        inc dword ptr ds : [esi+8]
        public_6616017 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 1
        jne public_6616030
        push eax
        push edi
        mov ecx, esi
        call public_66156f0
        jmp public_661604c
        public_6616030 : nop
        test eax, eax
        jne public_661603b
        mov eax, dword ptr ds : [edi+0x14]
        or dword ptr ds : [eax+0x34], 2
        public_661603b : nop
        push edi
        mov ecx, esi
        call public_6617220
        push edi
        call public_66281d0
        add esp, 4
        public_661604c : nop
        push ebp
        mov ecx, esi
        call public_6617260
        public_6616054 : nop
        push ebx
        mov ecx, esi
        call public_6617220
        push ebx
        call public_66281d0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x14]
        add esp, 4
        public_661606d : nop
        mov ecx, dword ptr ds : [esi+8]
        pop esi
        test ecx, ecx
        pop ebx
        jne public_6616083
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, ebp
        call public_6618ad0
        public_6616083 : nop
        pop edi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6615ec0)
    }
}

#undef public_6615f0d
#undef public_6615f19
#undef public_6615f25
#undef public_6615f5e
#undef public_6615f60
#undef public_6615f6f
#undef public_6615f75
#undef public_6615f7d
#undef public_6615f80
#undef public_6615fa4
#undef public_6615fa9
#undef public_6615fec
#undef public_6615fee
#undef public_6615ffd
#undef public_6616003
#undef public_661600b
#undef public_661600e
#undef public_6616017
#undef public_6616030
#undef public_661603b
#undef public_661604c
#undef public_6616054
#undef public_661606d
#undef public_6616083
