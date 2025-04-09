#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x586af0, internal_586af0, public_586af0);
extern "C" NAKED register_t __cdecl internal_586af0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+0xC]
        mov esi, ecx
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fld dword ptr ds : [edi+8]
        fmul qword ptr ds : [public_5c89c0]
        mov bl, al
        call public_5b7ec0
        fld dword ptr ds : [edi+4]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0xC], al
        call public_5b7ec0
        fld dword ptr ds : [edi]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0x14], al
        call public_5b7ec0
        mov cl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x4BC], al
        mov al, byte ptr ss : [esp+0x14]
        pop edi
        mov byte ptr ds : [esi+0x4BF], bl
        mov byte ptr ds : [esi+0x4BD], al
        mov byte ptr ds : [esi+0x4BE], cl
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x586af0)
    }
}
