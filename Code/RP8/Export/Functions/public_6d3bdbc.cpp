#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3731f);
CLANG_FORWARD_PROC_SYMBOL(public_6d3aebe);
CLANG_FORWARD_PROC_SYMBOL(public_6d3bdbc);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d155);

#define public_6d3bded _public_6d3bded

PROC_DECLARE(0x6d3bdbc, internal_6d3bdbc, public_6d3bdbc);
extern "C" NAKED register_t __cdecl internal_6d3bdbc()
{
    __asm
    {
        mov eax, public_6d5d155
        call public_6d5cd8c
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x10], esi
        mov dword ptr ds : [esi], offset public_6d5f658
        and dword ptr ss : [ebp-4], 0
        call public_6d3aebe
        mov eax, dword ptr ds : [esi+0x106C]
        test eax, eax
        je public_6d3bded
        push eax
        call public_6d2f249
        pop ecx
        public_6d3bded : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, esi
        call public_6d3731f
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d3bdbc)
    }
}

#undef public_6d3bded
