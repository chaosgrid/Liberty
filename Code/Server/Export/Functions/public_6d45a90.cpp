#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ed40);

#define public_6d45adf _public_6d45adf

PROC_DECLARE(0x6d45a90, internal_6d45a90, public_6d45a90);
extern "C" NAKED register_t __cdecl internal_6d45a90()
{
    __asm
    {
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d45adf
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jbe public_6d45adf
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6d45adf
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        pop esi
        je public_6d45adf
        mov eax, dword ptr ss : [esp+4]
        imul ecx, 0x418
        push eax
        lea ecx, ds:[ecx+edx-0x418]
        call public_6d4ed40
        public_6d45adf : nop
        ret 8
        UNREACHABLE_TRAP(0x6d45a90)
    }
}

#undef public_6d45adf
