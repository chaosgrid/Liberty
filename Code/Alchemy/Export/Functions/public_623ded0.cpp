#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ded0);

#define public_623def6 _public_623def6
#define public_623df14 _public_623df14

PROC_DECLARE(0x623ded0, internal_623ded0, public_623ded0);
extern "C" NAKED register_t __cdecl internal_623ded0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, 0x1B970B9A
        jne public_623def6
        mov ecx, dword ptr ds : [eax+0x50]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_623def6 : nop
        cmp ecx, 0x1CEAC6D1
        jne public_623df14
        mov edx, dword ptr ds : [eax+0x54]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_623df14 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623ded0)
    }
}

#undef public_623def6
#undef public_623df14
