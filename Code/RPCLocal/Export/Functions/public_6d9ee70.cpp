#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9ee70);

PROC_DECLARE(0x6d9ee70, internal_6d9ee70, public_6d9ee70);
extern "C" NAKED register_t __cdecl internal_6d9ee70()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, 1
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov word ptr ds : [eax+0x28], cx
        mov word ptr ds : [eax+0x2A], dx
        mov dword ptr ds : [eax+0x2C], 0x3F800000
        mov byte ptr ds : [eax+0x30], cl
        mov dword ptr ds : [eax], offset public_6db531c
        mov dword ptr ds : [eax+0xC], 0x20055
        ret 
        UNREACHABLE_TRAP(0x6d9ee70)
    }
}
