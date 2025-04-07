#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6accca6);
CLANG_FORWARD_PROC_SYMBOL(public_6acd11d);
CLANG_FORWARD_PROC_SYMBOL(public_6acd1bf);
CLANG_FORWARD_PROC_SYMBOL(public_6ace9b5);
CLANG_FORWARD_PROC_SYMBOL(public_6acea30);
CLANG_FORWARD_PROC_SYMBOL(public_6acea91);
CLANG_FORWARD_PROC_SYMBOL(public_6aceb0f);
CLANG_FORWARD_PROC_SYMBOL(public_6aced89);

#define public_6acccd0 _public_6acccd0
#define public_6acce4a _public_6acce4a
#define public_6acce50 _public_6acce50
#define public_6acce54 _public_6acce54
#define public_6acce89 _public_6acce89
#define public_6accebc _public_6accebc
#define public_6accec2 _public_6accec2
#define public_6accec6 _public_6accec6
#define public_6accefb _public_6accefb
#define public_6accf46 _public_6accf46
#define public_6accf78 _public_6accf78
#define public_6accfb3 _public_6accfb3
#define public_6accfe8 _public_6accfe8
#define public_6acd016 _public_6acd016
#define public_6acd040 _public_6acd040
#define public_6acd068 _public_6acd068
#define public_6acd085 _public_6acd085
#define public_6acd08d _public_6acd08d
#define public_6acd117 _public_6acd117

PROC_DECLARE(0x6accca6, internal_6accca6, public_6accca6);
extern "C" NAKED register_t __cdecl internal_6accca6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xF58
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        call public_6acd11d
        test eax, eax
        je public_6acccd0
        push 1
        pop eax
        jmp public_6acd117
        public_6acccd0 : nop
        mov edx, 0xE00
        push edi
        cmp ebx, edx
        mov dword ptr ss : [ebp+0xC], edx
        ja public_6acd08d
        mov ecx, ebx
        lea edi, ss:[ebp-0xF58]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        lea eax, ss:[ebp-0xF58]
        and eax, 3
        and ecx, 3
        add eax, ebx
        cmp eax, edx
        rep movsb
        ja public_6acd08d
        mov esi, edx
        lea ebx, ss:[ebp+eax-0xF58]
        sub esi, eax
        mov dword ptr ss : [ebp+0xC], esi
        call dword ptr ds : [public_6ada048]
        push 3
        mov dword ptr ds : [ebx], eax
        mov eax, ebx
        pop edi
        and eax, edi
        add eax, 4
        cmp eax, esi
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], eax
        add ebx, eax
        call dword ptr ds : [public_6ada068]
        mov dword ptr ds : [ebx], eax
        mov eax, ebx
        and eax, edi
        add eax, 4
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], eax
        add ebx, eax
        call dword ptr ds : [public_6ada044]
        mov dword ptr ds : [ebx], eax
        mov eax, ebx
        and eax, edi
        add eax, 4
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], eax
        add ebx, eax
        cmp dword ptr ss : [ebp+0xC], 0x10
        jb public_6acd08d
        push ebx
        call dword ptr ds : [public_6ada070]
        mov eax, ebx
        and eax, edi
        add eax, 0x10
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], eax
        add ebx, eax
        cmp dword ptr ss : [ebp+0xC], 8
        jb public_6acd08d
        push ebx
        call dword ptr ds : [public_6ada074]
        mov eax, ebx
        and eax, edi
        add eax, 8
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], eax
        push 0x20
        pop esi
        add ebx, eax
        cmp dword ptr ss : [ebp+0xC], esi
        jb public_6acd08d
        push ebx
        mov dword ptr ds : [ebx], esi
        call dword ptr ds : [public_6ada038]
        mov eax, ebx
        and eax, edi
        add eax, esi
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], eax
        add ebx, eax
        cmp dword ptr ss : [ebp+0xC], 0x10
        jb public_6acd08d
        lea eax, ds:[ebx+0xC]
        push eax
        lea eax, ds:[ebx+8]
        push eax
        lea eax, ds:[ebx+4]
        push eax
        push ebx
        push 0
        call dword ptr ds : [public_6ada034]
        mov eax, ebx
        and eax, edi
        add eax, 0x10
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        mov ecx, dword ptr ds : [public_6ae0c34]
        sub dword ptr ss : [ebp+0xC], eax
        add ebx, eax
        mov esi, offset public_6ae0d58
        test ecx, ecx
        jne public_6acce54
        lea eax, ss:[ebp+8]
        mov dword ptr ss : [ebp+8], 0x10
        push eax
        push esi
        call dword ptr ds : [public_6ada030]
        test eax, eax
        je public_6acce4a
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_6ae0c34], ecx
        jmp public_6acce50
        public_6acce4a : nop
        mov ecx, dword ptr ds : [public_6ae0c34]
        public_6acce50 : nop
        test ecx, ecx
        je public_6acce89
        public_6acce54 : nop
        cmp dword ptr ss : [ebp+0xC], ecx
        jb public_6acd08d
        mov eax, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, ebx
        and ecx, 3
        and eax, 3
        rep movsb
        add eax, dword ptr ds : [public_6ae0c34]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        push 3
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        pop edi
        public_6acce89 : nop
        mov ecx, dword ptr ds : [public_6ae0ad8]
        mov esi, offset public_6ae0d68
        test ecx, ecx
        jne public_6accec6
        lea eax, ss:[ebp+8]
        mov dword ptr ss : [ebp+8], 0x101
        push eax
        push esi
        call dword ptr ds : [public_6ada010]
        test eax, eax
        je public_6accebc
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax-1]
        mov dword ptr ds : [public_6ae0ad8], ecx
        jmp public_6accec2
        public_6accebc : nop
        mov ecx, dword ptr ds : [public_6ae0ad8]
        public_6accec2 : nop
        test ecx, ecx
        je public_6accefb
        public_6accec6 : nop
        cmp dword ptr ss : [ebp+0xC], ecx
        jb public_6acd08d
        mov eax, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, ebx
        and ecx, 3
        and eax, 3
        rep movsb
        add eax, dword ptr ds : [public_6ae0ad8]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        push 3
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        pop edi
        public_6accefb : nop
        call public_6acd1bf
        test eax, eax
        jne public_6accf46
        cmp dword ptr ss : [ebp+0xC], 8
        jb public_6acd08d
        push ebx
        call dword ptr ds : [public_6ae0e78]
        mov eax, ebx
        and eax, edi
        add eax, 8
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], eax
        add ebx, eax
        cmp dword ptr ss : [ebp+0xC], 4
        jb public_6acd08d
        call dword ptr ds : [public_6ae0e7c]
        mov dword ptr ds : [ebx], eax
        and ebx, edi
        add ebx, 4
        jmp public_6acd085
        public_6accf46 : nop
        push 0x40
        pop eax
        cmp dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp-4], eax
        jb public_6acd08d
        lea eax, ss:[ebp-4]
        push eax
        push ebx
        call public_6aced89
        test eax, eax
        je public_6accf78
        mov eax, ebx
        and eax, edi
        add eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6accf78 : nop
        mov eax, dword ptr ds : [public_6ae0e6c]
        test eax, eax
        je public_6acd08d
        cmp dword ptr ss : [ebp+0xC], 0x30
        jb public_6acd08d
        lea ecx, ss:[ebp+8]
        push ecx
        push 0x30
        push ebx
        push 8
        call eax
        test eax, eax
        jl public_6accfb3
        mov eax, ebx
        and eax, edi
        add eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6accfb3 : nop
        mov eax, 0x138
        cmp dword ptr ss : [ebp+0xC], eax
        jb public_6acd08d
        lea ecx, ss:[ebp+8]
        push ecx
        push eax
        push ebx
        push 2
        call dword ptr ds : [public_6ae0e6c]
        test eax, eax
        jl public_6accfe8
        mov eax, ebx
        and eax, edi
        add eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6accfe8 : nop
        cmp dword ptr ss : [ebp+0xC], 0x10
        jb public_6acd08d
        lea eax, ss:[ebp+8]
        push eax
        push 0x10
        push ebx
        push 0x21
        call dword ptr ds : [public_6ae0e6c]
        test eax, eax
        jl public_6acd016
        mov eax, ebx
        and eax, edi
        add eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6acd016 : nop
        cmp dword ptr ss : [ebp+0xC], 0x20
        jb public_6acd08d
        lea eax, ss:[ebp+8]
        push eax
        push 0x20
        push ebx
        push 0x2D
        call dword ptr ds : [public_6ae0e6c]
        test eax, eax
        jl public_6acd040
        mov eax, ebx
        and eax, edi
        add eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6acd040 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        lea eax, ss:[ebp+8]
        push eax
        push esi
        push ebx
        push 0x17
        mov dword ptr ss : [ebp+8], esi
        call dword ptr ds : [public_6ae0e6c]
        test eax, eax
        jl public_6acd068
        mov eax, ebx
        and eax, edi
        add eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        ja public_6acd08d
        add ebx, eax
        sub dword ptr ss : [ebp+0xC], eax
        public_6acd068 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[ebp+8]
        push ecx
        push eax
        push ebx
        push 5
        mov dword ptr ss : [ebp+8], eax
        call dword ptr ds : [public_6ae0e6c]
        test eax, eax
        jl public_6acd08d
        and ebx, edi
        add ebx, dword ptr ss : [ebp+8]
        public_6acd085 : nop
        cmp ebx, dword ptr ss : [ebp+0xC]
        ja public_6acd08d
        sub dword ptr ss : [ebp+0xC], ebx
        public_6acd08d : nop
        mov ebx, offset public_6ae0ae0
        lea eax, ss:[ebp-0x158]
        push ebx
        push 0x50
        push eax
        call public_6acea91
        mov eax, 0xE00
        push ebx
        sub eax, dword ptr ss : [ebp+0xC]
        push eax
        lea eax, ss:[ebp-0xF58]
        push eax
        call public_6aceb0f
        push 0x14
        mov dword ptr ss : [ebp+0xC], eax
        pop ecx
        lea eax, ss:[ebp-0x54]
        push eax
        mov esi, ebx
        lea edi, ss:[ebp-0x54]
        lea eax, ss:[ebp-0x158]
        push 0x50
        push eax
        rep movsd
        call public_6acea30
        lea eax, ss:[ebp-0x54]
        push 0x50
        push eax
        call public_6ace9b5
        push ebx
        lea eax, ss:[ebp-0x158]
        push 0x50
        push eax
        call public_6acea91
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0x14]
        push dword ptr ds : [eax]
        lea eax, ss:[ebp-0x158]
        push eax
        call public_6acea30
        push 0x40
        xor eax, eax
        pop ecx
        lea edi, ss:[ebp-0x158]
        rep stosd
        stosw 
        mov eax, dword ptr ss : [ebp+0xC]
        pop edi
        public_6acd117 : nop
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6accca6)
    }
}

#undef public_6acccd0
#undef public_6acce4a
#undef public_6acce50
#undef public_6acce54
#undef public_6acce89
#undef public_6accebc
#undef public_6accec2
#undef public_6accec6
#undef public_6accefb
#undef public_6accf46
#undef public_6accf78
#undef public_6accfb3
#undef public_6accfe8
#undef public_6acd016
#undef public_6acd040
#undef public_6acd068
#undef public_6acd085
#undef public_6acd08d
#undef public_6acd117
