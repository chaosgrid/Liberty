#include "Alchemy-PCH.h"

PROC_DECLARE(0x62460ec, internal_62460ec, public_62460ec);
extern "C" NAKED register_t __cdecl internal_62460ec()
{
    __asm
    {
        jmp dword ptr ds : [public_624b020]
        UNREACHABLE_TRAP(0x62460ec)
    }
}
