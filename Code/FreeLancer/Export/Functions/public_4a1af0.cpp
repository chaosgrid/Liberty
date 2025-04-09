#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a1af0);

PROC_DECLARE(0x4a1af0, internal_4a1af0, public_4a1af0);
extern "C" NAKED register_t __cdecl internal_4a1af0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movzx edx, byte ptr ds : [eax]
        mov dword ptr ss : [esp+4], edx
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x14]
        movzx edx, byte ptr ds : [eax+1]
        mov dword ptr ss : [esp+4], edx
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x18]
        movzx edx, byte ptr ds : [eax+2]
        mov dword ptr ss : [esp+4], edx
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x1C]
        movzx eax, byte ptr ds : [eax+3]
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x24]
        ret 4
        UNREACHABLE_TRAP(0x4a1af0)
    }
}
