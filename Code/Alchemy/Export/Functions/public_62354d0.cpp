#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62354d0);
CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_62354f9 _public_62354f9
#define public_6235517 _public_6235517
#define public_6235535 _public_6235535

PROC_DECLARE(0x62354d0, internal_62354d0, public_62354d0);
extern "C" NAKED register_t __cdecl internal_62354d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0x4FC9016
        jne public_62354f9
        mov ecx, dword ptr ds : [eax+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_62354f9 : nop
        cmp ecx, 0xF7C2EBA9
        jne public_6235517
        mov edx, dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6235517 : nop
        cmp ecx, 0x15A6F47
        jne public_6235535
        mov ecx, dword ptr ds : [eax+0x78]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6235535 : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x62354d0)
    }
}

#undef public_62354f9
#undef public_6235517
#undef public_6235535
