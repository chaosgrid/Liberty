#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344010);
CLANG_FORWARD_PROC_SYMBOL(public_63440d0);

#define public_6344051 _public_6344051

PROC_DECLARE(0x6344010, internal_6344010, public_6344010);
extern "C" NAKED register_t __cdecl internal_6344010()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        cmp eax, ecx
        mov word ptr ds : [esi+0x10], cx
        je public_6344051
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 0xFFFFFFE0
        mov word ptr ds : [esi+0x12], cx
        mov dword ptr ds : [eax], edx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x12]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [esi+4]
        add eax, 0x23
        and eax, 0xFFFFFFE0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], edx
        add ecx, eax
        mov dword ptr ds : [esi+0xC], ecx
        pop esi
        ret 8
        public_6344051 : nop
        mov word ptr ds : [esi+0x12], cx
        push ecx
        mov ecx, esi
        call public_63440d0
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6344010)
    }
}

#undef public_6344051
