#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30daa);
CLANG_FORWARD_PROC_SYMBOL(public_6d33038);

#define public_6d33060 _public_6d33060
#define public_6d33065 _public_6d33065

PROC_DECLARE(0x6d33038, internal_6d33038, public_6d33038);
extern "C" NAKED register_t __cdecl internal_6d33038()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        cmp edx, 0xE
        jb public_6d33060
        mov eax, dword ptr ss : [esp+4]
        cmp word ptr ds : [eax], 0x4D42
        jne public_6d33060
        cmp dword ptr ds : [eax+2], edx
        ja public_6d33060
        add edx, 0xFFFFFFF2
        push edx
        add eax, 0xE
        push eax
        call public_6d30daa
        jmp public_6d33065
        public_6d33060 : nop
        mov eax, 0x80004005
        public_6d33065 : nop
        ret 8
        UNREACHABLE_TRAP(0x6d33038)
    }
}

#undef public_6d33060
#undef public_6d33065
