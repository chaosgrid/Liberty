#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41c66);
CLANG_FORWARD_PROC_SYMBOL(public_6d41d5a);

PROC_DECLARE(0x6d41d5a, internal_6d41d5a, public_6d41d5a);
extern "C" NAKED register_t __cdecl internal_6d41d5a()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax], offset _public_6d41c66
        mov dword ptr ds : [eax+4], offset public_6d41c81
        mov dword ptr ds : [eax+8], offset _public_6d317c0
        mov dword ptr ds : [eax+0xC], offset public_6d41cb2
        mov dword ptr ds : [eax+0x10], offset public_6d41d49
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x6C], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x70], offset public_6d5f948
        mov dword ptr ds : [eax+0x74], 0x77
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x80], ecx
        ret 
        UNREACHABLE_TRAP(0x6d41d5a)
    }
}
