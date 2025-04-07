#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212010);
CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_6212039 _public_6212039
#define public_6212057 _public_6212057
#define public_6212075 _public_6212075

PROC_DECLARE(0x6212010, internal_6212010, public_6212010);
extern "C" NAKED register_t __cdecl internal_6212010()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0x4FC9016
        jne public_6212039
        mov ecx, dword ptr ds : [eax+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6212039 : nop
        cmp ecx, 0xF7C2EBA9
        jne public_6212057
        mov edx, dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6212057 : nop
        cmp ecx, 0x15A6F47
        jne public_6212075
        mov ecx, dword ptr ds : [eax+0x78]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6212075 : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x6212010)
    }
}

#undef public_6212039
#undef public_6212057
#undef public_6212075
