#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10005f90);
CLANG_FORWARD_PROC_SYMBOL(public_10006480);

#define public_100064ac _public_100064ac
#define public_100064f9 _public_100064f9
#define public_10006504 _public_10006504
#define public_10006510 _public_10006510

PROC_DECLARE(0x10006480, internal_10006480, public_10006480);
extern "C" NAKED register_t __cdecl internal_10006480()
{
    __asm
    {
        push ecx
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+0x28]
        push 4
        push 0x13
        push eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [edi+0x20]
        mov ebx, eax
        add esp, 0xC
        test ebx, ebx
        jne public_100064ac
        pop edi
        mov eax, 0xFFFFFFFC
        pop ebx
        pop ecx
        ret 
        public_100064ac : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push 0
        push 0
        push 0x13
        push 0x13
        mov eax, ebp
        call public_10005f90
        mov esi, eax
        add esp, 0x20
        cmp esi, 0xFFFFFFFD
        jne public_100064f9
        mov ecx, dword ptr ds : [edi+0x28]
        push ebx
        push ecx
        mov dword ptr ds : [edi+0x18], offset public_1000b504
        call dword ptr ds : [edi+0x24]
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 
        public_100064f9 : nop
        cmp esi, 0xFFFFFFFB
        je public_10006504
        cmp dword ptr ss : [ebp], 0
        jne public_10006510
        public_10006504 : nop
        mov dword ptr ds : [edi+0x18], offset public_1000b4e0
        mov esi, 0xFFFFFFFD
        public_10006510 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        push ebx
        push ecx
        call dword ptr ds : [edi+0x24]
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x10006480)
    }
}

#undef public_100064ac
#undef public_100064f9
#undef public_10006504
#undef public_10006510
