#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);

#define public_680224e _public_680224e

PROC_DECLARE(0x6802210, internal_6802210, public_6802210);
extern "C" NAKED register_t __cdecl internal_6802210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+8]
        jb public_680224e
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_680224e : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6802210)
    }
}

#undef public_680224e
