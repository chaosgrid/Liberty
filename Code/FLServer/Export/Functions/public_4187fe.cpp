#include "FLServer-PCH.h"

PROC_DECLARE(0x4187fe, internal_4187fe, public_4187fe);
extern "C" NAKED register_t __cdecl internal_4187fe()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9ec]
        UNREACHABLE_TRAP(0x4187fe)
    }
}
