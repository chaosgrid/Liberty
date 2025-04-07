#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5930);

#define public_6bd5941 _public_6bd5941
#define public_6bd5950 _public_6bd5950

PROC_DECLARE(0x6bd5930, internal_6bd5930, public_6bd5930);
extern "C" NAKED register_t __cdecl internal_6bd5930()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6bd5950
        push esi
        public_6bd5941 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6bd5941
        pop esi
        public_6bd5950 : nop
        ret 
        UNREACHABLE_TRAP(0x6bd5930)
    }
}

#undef public_6bd5941
#undef public_6bd5950
