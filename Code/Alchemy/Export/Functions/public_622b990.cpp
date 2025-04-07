#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b990);
CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_622b9b5 _public_622b9b5
#define public_622b9d6 _public_622b9d6
#define public_622b9f7 _public_622b9f7
#define public_622ba18 _public_622ba18
#define public_622ba3c _public_622ba3c

PROC_DECLARE(0x622b990, internal_622b990, public_622b990);
extern "C" NAKED register_t __cdecl internal_622b990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x4FC9016
        jne public_622b9b5
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622b9b5 : nop
        cmp eax, 0xFBA203B8
        jne public_622b9d6
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x74]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622b9d6 : nop
        cmp eax, 0xF267B8E1
        jne public_622b9f7
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x78]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622b9f7 : nop
        cmp eax, 0xFA03992F
        jne public_622ba18
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x7C]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622ba18 : nop
        cmp eax, 0x15A6F47
        jne public_622ba3c
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x80]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622ba3c : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x622b990)
    }
}

#undef public_622b9b5
#undef public_622b9d6
#undef public_622b9f7
#undef public_622ba18
#undef public_622ba3c
