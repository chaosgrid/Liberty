#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37d00);

PROC_DECLARE(0x6f37d00, internal_6f37d00, public_6f37d00);
extern "C" NAKED register_t __cdecl internal_6f37d00()
{
    __asm
    {
        fld dword ptr ds : [public_6fb5810]
        mov eax, dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x6f37d00)
    }
}
