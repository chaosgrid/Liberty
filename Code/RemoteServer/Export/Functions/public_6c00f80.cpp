#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c00f80);

#define public_6c00f93 _public_6c00f93
#define public_6c00f9b _public_6c00f9b
#define public_6c00fa2 _public_6c00fa2

PROC_DECLARE(0x6c00f80, internal_6c00f80, public_6c00f80);
extern "C" NAKED register_t __cdecl internal_6c00f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6c00fa2
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6c00f93 : nop
        test eax, eax
        je public_6c00f9b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6c00f9b : nop
        add eax, 4
        dec ecx
        jne public_6c00f93
        pop esi
        public_6c00fa2 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6c00f80)
    }
}

#undef public_6c00f93
#undef public_6c00f9b
#undef public_6c00fa2
