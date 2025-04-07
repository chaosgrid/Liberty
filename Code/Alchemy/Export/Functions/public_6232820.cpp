#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_6232845 _public_6232845
#define public_6232866 _public_6232866
#define public_6232887 _public_6232887

PROC_DECLARE(0x6232820, internal_6232820, public_6232820);
extern "C" NAKED register_t __cdecl internal_6232820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x4FC9016
        jne public_6232845
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
        public_6232845 : nop
        cmp eax, 0xF7C2EBA9
        jne public_6232866
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
        public_6232866 : nop
        cmp eax, 0x15A6F47
        jne public_6232887
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
        public_6232887 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x6232820)
    }
}

#undef public_6232845
#undef public_6232866
#undef public_6232887
