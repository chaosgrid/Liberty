#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68021e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);

#define public_6802208 _public_6802208

PROC_DECLARE(0x68021e0, internal_68021e0, public_68021e0);
extern "C" NAKED register_t __cdecl internal_68021e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0xFFFFFFFA
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [eax+8]
        jb public_6802208
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_6802208 : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x68021e0)
    }
}

#undef public_6802208
