#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed570);

PROC_DECLARE(0x62ed570, internal_62ed570, public_62ed570);
extern "C" NAKED register_t __cdecl internal_62ed570()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov byte ptr ds : [eax+0x60], cl
        mov dword ptr ds : [eax+0x64], ecx
        mov byte ptr ds : [eax+0x68], cl
        mov byte ptr ds : [eax+0x69], cl
        mov dword ptr ds : [eax], offset public_63a0888
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [eax+0x14], cx
        ret 
        UNREACHABLE_TRAP(0x62ed570)
    }
}
