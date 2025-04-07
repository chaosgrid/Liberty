#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02720, internal_6c02720, public_6c02720);
extern "C" NAKED register_t __cdecl internal_6c02720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e48c]
        mov dword ptr ds : [public_6c14148], eax
        ret 
        UNREACHABLE_TRAP(0x6c02720)
    }
}
