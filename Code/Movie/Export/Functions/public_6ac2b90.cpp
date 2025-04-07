#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2690);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2870);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2b90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4080);
CLANG_FORWARD_PROC_SYMBOL(public_6ac78a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8010);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8410);

#define public_6ac2bb4 _public_6ac2bb4
#define public_6ac2c30 _public_6ac2c30
#define public_6ac2c5d _public_6ac2c5d
#define public_6ac2ca5 _public_6ac2ca5
#define public_6ac2cdf _public_6ac2cdf
#define public_6ac2cf1 _public_6ac2cf1
#define public_6ac2d29 _public_6ac2d29
#define public_6ac2dcc _public_6ac2dcc

PROC_DECLARE(0x6ac2b90, internal_6ac2b90, public_6ac2b90);
extern "C" NAKED register_t __cdecl internal_6ac2b90()
{
    __asm
    {
        sub esp, 0xDC
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx]
        push edi
        test eax, eax
        jne public_6ac2bb4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xDC
        ret 0xC
        public_6ac2bb4 : nop
        mov esi, dword ptr ss : [esp+0xF0]
        test esi, esi
        je public_6ac2dcc
        mov edi, dword ptr ss : [esp+0xF4]
        test edi, edi
        je public_6ac2dcc
        mov ebp, dword ptr ss : [esp+0xF8]
        test ebp, ebp
        je public_6ac2dcc
        add eax, 0x78
        push eax
        lea eax, ss:[esp+0x50]
        push eax
        push 5
        push esi
        call public_6ac2870
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x60]
        add ecx, 0x78
        add esi, 0x14
        push ecx
        push edx
        push 5
        push esi
        call public_6ac2870
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x4C]
        add eax, 0x35D8
        push eax
        push ecx
        call public_6ac8010
        test eax, eax
        jne public_6ac2c30
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xDC
        ret 0xC
        public_6ac2c30 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0xC4]
        add edx, 0x35D8
        push edx
        push eax
        push edi
        call public_6ac2690
        test eax, eax
        jne public_6ac2c5d
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xDC
        ret 0xC
        public_6ac2c5d : nop
        mov edx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x38]
        push 5
        push ecx
        push edx
        call public_6ac8410
        mov eax, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x9C]
        lea ecx, ds:[eax+0x35D8]
        add eax, 0x3A14
        push ecx
        push edx
        lea ecx, ss:[esp+0x40]
        push 5
        push ecx
        push eax
        call public_6ac2b60
        test eax, eax
        jne public_6ac2ca5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xDC
        ret 0xC
        public_6ac2ca5 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x4C]
        add edx, 0x35D8
        push edx
        push eax
        call public_6ac8010
        test eax, eax
        je public_6ac2cdf
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x10]
        add ecx, 0x35D8
        lea eax, ss:[esp+0x38]
        push ecx
        push edx
        push 5
        lea ecx, ss:[esp+0x58]
        push eax
        push ecx
        call public_6ac2de0
        test eax, eax
        jne public_6ac2cf1
        public_6ac2cdf : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xDC
        ret 0xC
        public_6ac2cf1 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x74]
        add edx, 0x35D8
        lea ecx, ss:[esp+0xC4]
        push edx
        push 1
        push eax
        lea edx, ss:[esp+0x1C]
        push ecx
        push edx
        call public_6ac78a0
        test eax, eax
        jne public_6ac2d29
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xDC
        ret 0xC
        public_6ac2d29 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        add eax, 0x78
        lea edx, ss:[esp+0x9C]
        push eax
        push ecx
        push edx
        call public_6ac4080
        mov ecx, 5
        lea esi, ss:[esp+0x10]
        mov edi, ebp
        lea edx, ss:[esp+0xB0]
        rep movsd
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        add eax, 0x78
        push eax
        push ecx
        push edx
        call public_6ac4080
        mov ecx, 5
        lea esi, ss:[esp+0x10]
        lea edi, ss:[ebp+0x14]
        lea edx, ss:[esp+0x74]
        rep movsd
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        add eax, 0x78
        push eax
        push ecx
        push edx
        call public_6ac4080
        mov ecx, 5
        lea esi, ss:[esp+0x10]
        lea edi, ss:[ebp+0x28]
        lea edx, ss:[esp+0x88]
        rep movsd
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        add eax, 0x78
        push eax
        push ecx
        push edx
        call public_6ac4080
        mov ecx, 5
        lea esi, ss:[esp+0x10]
        lea edi, ss:[ebp+0x3C]
        xor eax, eax
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xDC
        ret 0xC
        public_6ac2dcc : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        add esp, 0xDC
        ret 0xC
        UNREACHABLE_TRAP(0x6ac2b90)
    }
}

#undef public_6ac2bb4
#undef public_6ac2c30
#undef public_6ac2c5d
#undef public_6ac2ca5
#undef public_6ac2cdf
#undef public_6ac2cf1
#undef public_6ac2d29
#undef public_6ac2dcc
