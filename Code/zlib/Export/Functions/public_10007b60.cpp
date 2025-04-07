#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006960);
CLANG_FORWARD_PROC_SYMBOL(public_10007b60);

PROC_DECLARE(0x10007b60, internal_10007b60, public_10007b60);
extern "C" NAKED register_t __cdecl internal_10007b60()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        lea eax, ds:[edx+0x8C]
        mov dword ptr ds : [edx+0xB10], eax
        lea eax, ds:[edx+0xA74]
        mov dword ptr ds : [edx+0xB28], eax
        xor eax, eax
        lea ecx, ds:[edx+0x980]
        mov dword ptr ds : [edx+0xB18], offset public_1000e164
        mov dword ptr ds : [edx+0xB1C], ecx
        mov dword ptr ds : [edx+0xB24], offset public_1000e178
        mov dword ptr ds : [edx+0xB30], offset public_1000e18c
        mov word ptr ds : [edx+0x16B0], ax
        mov dword ptr ds : [edx+0x16B4], eax
        mov dword ptr ds : [edx+0x16AC], 8
        jmp public_10006960
        UNREACHABLE_TRAP(0x10007b60)
    }
}
