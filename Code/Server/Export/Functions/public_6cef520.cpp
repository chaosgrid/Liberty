#include "Server-PCH.h"

PROC_DECLARE(0x6cef520, internal_6cef520, public_6cef520);
extern "C" NAKED register_t __cdecl internal_6cef520()
{
    __asm
    {
        mov word ptr ds : [public_6d8d738], 3
        mov byte ptr ds : [public_6d8d73a], 1
        ret 
        UNREACHABLE_TRAP(0x6cef520)
    }
}
