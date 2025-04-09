#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fc950);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x4fc950, internal_4fc950, public_4fc950);
extern "C" NAKED register_t __cdecl internal_4fc950()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        fmul qword ptr ds : [public_5c89c0]
        mov esi, ecx
        call public_5b7ec0
        fld dword ptr ss : [esp+0xC]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [esi+0x30], al
        call public_5b7ec0
        fld dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [esi+0x31], al
        call public_5b7ec0
        mov byte ptr ds : [esi+0x32], al
        mov byte ptr ds : [esi+0x33], 0xFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4fc950)
    }
}
