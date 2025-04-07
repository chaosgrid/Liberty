#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);

#define public_6f43910 _public_6f43910
#define public_6f4392a _public_6f4392a

PROC_DECLARE(0x6f438c0, internal_6f438c0, public_6f438c0);
extern "C" NAKED register_t __cdecl internal_6f438c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x14], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi+0x20], edx
        je public_6f43910
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f43910 : nop
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        mov dword ptr ds : [esi+0x24], eax
        je public_6f4392a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        ret 
        public_6f4392a : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x28], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f438c0)
    }
}

#undef public_6f43910
#undef public_6f4392a
