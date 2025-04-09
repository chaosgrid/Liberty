#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4213d0);

PROC_DECLARE(0x4213d0, internal_4213d0, public_4213d0);
extern "C" NAKED register_t __cdecl internal_4213d0()
{
    __asm
    {
        xor eax, eax
        mov ecx, 0x3000
        mov dword ptr ds : [public_6168a4], ecx
        mov dword ptr ds : [public_6168b0], ecx
        mov ecx, 2
        mov dword ptr ds : [public_6648bc], ecx
        mov dword ptr ds : [public_6648c0], ecx
        mov ecx, 1
        mov dword ptr ds : [public_616888], 0xFFFFFFFF
        mov dword ptr ds : [public_6168a8], eax
        mov byte ptr ds : [public_6168ac], al
        mov dword ptr ds : [public_6168b4], eax
        mov dword ptr ds : [public_6648fc], 0x3F800000
        mov dword ptr ds : [public_6648ec], 0x3F800000
        mov dword ptr ds : [public_6648dc], 0x3F800000
        mov dword ptr ds : [public_6648f8], eax
        mov dword ptr ds : [public_6648f4], eax
        mov dword ptr ds : [public_6648f0], eax
        mov dword ptr ds : [public_6648e8], eax
        mov dword ptr ds : [public_6648e4], eax
        mov dword ptr ds : [public_6648e0], eax
        mov dword ptr ds : [public_664908], eax
        mov dword ptr ds : [public_664904], eax
        mov dword ptr ds : [public_664900], eax
        mov dword ptr ds : [public_6648b8], eax
        mov byte ptr ds : [public_6648c4], cl
        mov dword ptr ds : [public_6648c8], ecx
        mov dword ptr ds : [public_6648cc], 4
        mov byte ptr ds : [public_6648d0], al
        mov dword ptr ds : [public_6648d4], eax
        mov byte ptr ds : [public_6648d8], al
        mov dword ptr ds : [public_66490c], eax
        mov dword ptr ds : [public_664928], eax
        ret 
        UNREACHABLE_TRAP(0x4213d0)
    }
}
