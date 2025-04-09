#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54de10);
CLANG_FORWARD_PROC_SYMBOL(public_550000);

PROC_DECLARE(0x550000, internal_550000, public_550000);
extern "C" NAKED register_t __cdecl internal_550000()
{
    __asm
    {
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c94f8]
        fadd dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x74]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(1)
        fmul dword ptr ds : [public_5c8930]
        fadd st, st(1)
        fstp dword ptr ds : [ecx+0x78]
        fstp st(0)
        call public_54de10
        ret 4
        UNREACHABLE_TRAP(0x550000)
    }
}
