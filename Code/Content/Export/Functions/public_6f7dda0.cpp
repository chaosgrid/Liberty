#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f7dda0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7ddb4 _public_6f7ddb4
#define public_6f7ddd5 _public_6f7ddd5
#define public_6f7dded _public_6f7dded
#define public_6f7ddf8 _public_6f7ddf8
#define public_6f7de0e _public_6f7de0e
#define public_6f7de20 _public_6f7de20
#define public_6f7de39 _public_6f7de39
#define public_6f7de52 _public_6f7de52
#define public_6f7de78 _public_6f7de78
#define public_6f7de80 _public_6f7de80
#define public_6f7de98 _public_6f7de98
#define public_6f7dea0 _public_6f7dea0
#define public_6f7deb6 _public_6f7deb6
#define public_6f7dec6 _public_6f7dec6
#define public_6f7dedc _public_6f7dedc
#define public_6f7def0 _public_6f7def0
#define public_6f7df05 _public_6f7df05
#define public_6f7df15 _public_6f7df15
#define public_6f7df29 _public_6f7df29
#define public_6f7df34 _public_6f7df34
#define public_6f7df4a _public_6f7df4a
#define public_6f7df5b _public_6f7df5b
#define public_6f7df6f _public_6f7df6f
#define public_6f7df85 _public_6f7df85
#define public_6f7df8d _public_6f7df8d
#define public_6f7dfb2 _public_6f7dfb2
#define public_6f7dfc3 _public_6f7dfc3

PROC_DECLARE(0x6f7dda0, internal_6f7dda0, public_6f7dda0);
extern "C" NAKED register_t __cdecl internal_6f7dda0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_6f7dfc3
        push ebp
        push esi
        push edi
        public_6f7ddb4 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        sub esi, 0x10
        sub ebx, 0x10
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f7dfb2
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        jne public_6f7ddd5
        xor ebp, ebp
        jmp public_6f7dded
        public_6f7ddd5 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6f7dded : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f7ddf8
        xor edx, edx
        jmp public_6f7de0e
        public_6f7ddf8 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7de0e : nop
        cmp ebp, edx
        ja public_6f7de78
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, edi
        cmp eax, ebp
        mov edx, ecx
        je public_6f7de39
        lea ecx, ds:[ecx]
        public_6f7de20 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x44
        mov ecx, 0x11
        add edx, 0x44
        cmp eax, ebp
        rep movsd
        jne public_6f7de20
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f7de39 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f7de52
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        imul edx, 0x44
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7dfb2
        public_6f7de52 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        mov eax, dword ptr ds : [esi+4]
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x44
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        jmp public_6f7dfb2
        public_6f7de78 : nop
        test edi, edi
        jne public_6f7de80
        xor ebp, ebp
        jmp public_6f7de98
        public_6f7de80 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, edi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6f7de98 : nop
        test ecx, ecx
        jne public_6f7dea0
        xor edx, edx
        jmp public_6f7deb6
        public_6f7dea0 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7deb6 : nop
        cmp ebp, edx
        ja public_6f7df5b
        test ecx, ecx
        jne public_6f7dec6
        xor edx, edx
        jmp public_6f7dedc
        public_6f7dec6 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7dedc : nop
        imul edx, 0x44
        add edx, edi
        mov eax, edi
        cmp eax, edx
        mov ebp, ecx
        je public_6f7df05
        lea esp, ss:[esp]
        public_6f7def0 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x44
        mov ecx, 0x11
        add ebp, 0x44
        cmp eax, edx
        rep movsd
        jne public_6f7def0
        public_6f7df05 : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp edx, ebp
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_6f7df29
        public_6f7df15 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebp
        jne public_6f7df15
        public_6f7df29 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f7df34
        xor edx, edx
        jmp public_6f7df4a
        public_6f7df34 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7df4a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        imul edx, 0x44
        add edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+8], edx
        mov esi, eax
        jmp public_6f7dfb2
        public_6f7df5b : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_6f7df6f
        xor edx, edx
        jmp public_6f7df85
        public_6f7df6f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7df85 : nop
        test edx, edx
        mov eax, edx
        jge public_6f7df8d
        xor eax, eax
        public_6f7df8d : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f30960
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f7dfb2 : nop
        cmp ebx, dword ptr ss : [esp+0x14]
        jne public_6f7ddb4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f7dfc3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f7dda0)
    }
}

#undef public_6f7ddb4
#undef public_6f7ddd5
#undef public_6f7dded
#undef public_6f7ddf8
#undef public_6f7de0e
#undef public_6f7de20
#undef public_6f7de39
#undef public_6f7de52
#undef public_6f7de78
#undef public_6f7de80
#undef public_6f7de98
#undef public_6f7dea0
#undef public_6f7deb6
#undef public_6f7dec6
#undef public_6f7dedc
#undef public_6f7def0
#undef public_6f7df05
#undef public_6f7df15
#undef public_6f7df29
#undef public_6f7df34
#undef public_6f7df4a
#undef public_6f7df5b
#undef public_6f7df6f
#undef public_6f7df85
#undef public_6f7df8d
#undef public_6f7dfb2
#undef public_6f7dfc3
