#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6804270);

#define public_6801c25 _public_6801c25

PROC_DECLARE(0x6801bf0, internal_6801bf0, public_6801bf0);
extern "C" NAKED register_t __cdecl internal_6801bf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        push eax
        call public_6804270
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 0xC
        cmp ecx, edx
        jb public_6801c25
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_6801c25 : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6801bf0)
    }
}

#undef public_6801c25
