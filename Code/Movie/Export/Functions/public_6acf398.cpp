#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf398);
CLANG_FORWARD_PROC_SYMBOL(public_6ad038d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad044d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad073d);

PROC_DECLARE(0x6acf398, internal_6acf398, public_6acf398);
extern "C" NAKED register_t __cdecl internal_6acf398()
{
    __asm
    {
        mov eax, offset _public_6ad073d
        mov dword ptr ds : [public_6add554], offset public_6ad03e7
        mov dword ptr ds : [public_6add550], eax
        mov dword ptr ds : [public_6add558], offset _public_6ad044d
        mov dword ptr ds : [public_6add55c], offset _public_6ad038d
        mov dword ptr ds : [public_6add560], offset public_6ad0435
        mov dword ptr ds : [public_6add564], eax
        ret 
        UNREACHABLE_TRAP(0x6acf398)
    }
}
