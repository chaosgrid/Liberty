#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bc44);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d2bc73 _public_6d2bc73
#define public_6d2bc98 _public_6d2bc98
#define public_6d2bcaa _public_6d2bcaa
#define public_6d2bccc _public_6d2bccc
#define public_6d2bcd3 _public_6d2bcd3
#define public_6d2bcd5 _public_6d2bcd5

PROC_DECLARE(0x6d2bc44, internal_6d2bc44, public_6d2bc44);
extern "C" NAKED register_t __cdecl internal_6d2bc44()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-8], 0
        mov dword ptr ss : [ebp-0x1C], 0x40
        mov al, byte ptr ss : [ebp-1]
        mov byte ptr ds : [public_6d728e0], al
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0xC], ecx
        cmp dword ptr ss : [ebp-0xC], 0
        jge public_6d2bc73
        mov dword ptr ss : [ebp-0xC], 0
        public_6d2bc73 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ds : [public_6d728e4], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ds : [public_6d728e4]
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d2bcaa
        public_6d2bc98 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        sub edx, 1
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x14], eax
        public_6d2bcaa : nop
        cmp dword ptr ss : [ebp-0x18], 0
        jbe public_6d2bcd5
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], ecx
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6d2bccc
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x20], ecx
        jmp public_6d2bcd3
        public_6d2bccc : nop
        mov dword ptr ss : [ebp-0x20], 0
        public_6d2bcd3 : nop
        jmp public_6d2bc98
        public_6d2bcd5 : nop
        mov edx, dword ptr ds : [public_6d728e4]
        mov eax, dword ptr ss : [ebp-0x1C]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [public_6d728e8], ecx
        mov edx, dword ptr ds : [public_6d728e8]
        mov dword ptr ds : [public_6d728ec], edx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bc44)
    }
}

#undef public_6d2bc73
#undef public_6d2bc98
#undef public_6d2bcaa
#undef public_6d2bccc
#undef public_6d2bcd3
#undef public_6d2bcd5
