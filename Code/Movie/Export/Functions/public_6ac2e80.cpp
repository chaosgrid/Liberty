#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2870);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2e80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3000);
CLANG_FORWARD_PROC_SYMBOL(public_6ac78a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8010);

#define public_6ac2ea2 _public_6ac2ea2
#define public_6ac2f68 _public_6ac2f68
#define public_6ac2f79 _public_6ac2f79
#define public_6ac2faf _public_6ac2faf
#define public_6ac2fe7 _public_6ac2fe7

PROC_DECLARE(0x6ac2e80, internal_6ac2e80, public_6ac2e80);
extern "C" NAKED register_t __cdecl internal_6ac2e80()
{
    __asm
    {
        sub esp, 0xB4
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        jne public_6ac2ea2
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6ac2ea2 : nop
        mov esi, dword ptr ss : [esp+0xC4]
        test esi, esi
        je public_6ac2fe7
        mov ebp, dword ptr ss : [esp+0xC8]
        test ebp, ebp
        je public_6ac2fe7
        mov ecx, dword ptr ss : [esp+0xCC]
        test ecx, ecx
        je public_6ac2fe7
        add eax, 0x78
        push edi
        push eax
        lea eax, ss:[esp+0x28]
        mov ecx, 5
        lea edi, ss:[esp+0x14]
        push eax
        push 5
        rep movsd
        push ebp
        call public_6ac2870
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x38]
        add ecx, 0x78
        lea eax, ss:[ebp+0x14]
        push ecx
        push edx
        push 5
        push eax
        call public_6ac2870
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x4C]
        add ecx, 0x78
        lea eax, ss:[ebp+0x28]
        push ecx
        push edx
        push 5
        push eax
        call public_6ac2870
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x60]
        add ecx, 0x78
        add ebp, 0x3C
        push ecx
        push edx
        push 5
        push ebp
        call public_6ac2870
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x24]
        add eax, 0x35D8
        push eax
        push ecx
        call public_6ac8010
        test eax, eax
        pop edi
        je public_6ac2f68
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x70]
        add edx, 0x35D8
        lea ecx, ss:[esp+0xC]
        push edx
        push eax
        push 5
        lea edx, ss:[esp+0x2C]
        push ecx
        push edx
        call public_6ac2de0
        test eax, eax
        jne public_6ac2f79
        public_6ac2f68 : nop
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6ac2f79 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x98]
        add eax, 0x35D8
        lea edx, ss:[esp+0x70]
        push eax
        push 0xFFFFFFFF
        push ecx
        lea eax, ss:[esp+0x54]
        push edx
        push eax
        call public_6ac78a0
        test eax, eax
        jne public_6ac2faf
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6ac2faf : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0xCC]
        add ecx, 0x35D8
        lea eax, ss:[esp+0x98]
        push ecx
        push edx
        push eax
        call public_6ac3000
        neg eax
        sbb eax, eax
        pop esi
        and eax, 0x7FFFBFFB
        pop ebp
        add eax, 0x80004005
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6ac2fe7 : nop
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        add esp, 0xB4
        ret 0xC
        UNREACHABLE_TRAP(0x6ac2e80)
    }
}

#undef public_6ac2ea2
#undef public_6ac2f68
#undef public_6ac2f79
#undef public_6ac2faf
#undef public_6ac2fe7
