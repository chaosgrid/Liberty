#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b720);

#define public_62b3028 _public_62b3028

PROC_DECLARE(0x62b2ff0, internal_62b2ff0, public_62b2ff0);
extern "C" NAKED register_t __cdecl internal_62b2ff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        push 0x20000
        lea ecx, ds:[esi+0xE4]
        mov dword ptr ds : [esi+0x29C], 0x3F800000
        call public_629b720
        mov edi, eax
        test edi, edi
        je public_62b3028
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_62b3028
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx+0x30]
        public_62b3028 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push 0
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b2ff0)
    }
}

#undef public_62b3028
