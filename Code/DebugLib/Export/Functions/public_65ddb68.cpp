#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddb68);
CLANG_FORWARD_PROC_SYMBOL(public_65ddb90);

#define public_65ddb7f _public_65ddb7f

PROC_DECLARE(0x65ddb68, internal_65ddb68, public_65ddb68);
extern "C" NAKED register_t __cdecl internal_65ddb68()
{
    __asm
    {
        cmp dword ptr ds : [public_65e5be0], 1
        jle public_65ddb7f
        push 8
        push dword ptr ss : [esp+8]
        call public_65ddb90
        pop ecx
        pop ecx
        ret 
        public_65ddb7f : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_65e59d0]
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 8
        ret 
        UNREACHABLE_TRAP(0x65ddb68)
    }
}

#undef public_65ddb7f
