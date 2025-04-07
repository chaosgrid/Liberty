#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8dba3 _public_6d8dba3

PROC_DECLARE(0x6d8db70, internal_6d8db70, public_6d8db70);
extern "C" NAKED register_t __cdecl internal_6d8db70()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x45
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8dba3
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6d8dba3 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8db70)
    }
}

#undef public_6d8dba3
