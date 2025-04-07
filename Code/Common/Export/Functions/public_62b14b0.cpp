#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b14f0);

#define public_62b14c8 _public_62b14c8
#define public_62b14dd _public_62b14dd

PROC_DECLARE(0x62b14b0, internal_62b14b0, public_62b14b0);
extern "C" NAKED register_t __cdecl internal_62b14b0()
{
    __asm
    {
        call public_62b14f0
        cmp dword ptr ds : [eax], 0
        je public_62b14c8
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 4
        public_62b14c8 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_62b14dd
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov al, 1
        ret 4
        public_62b14dd : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], 0
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x62b14b0)
    }
}

#undef public_62b14c8
#undef public_62b14dd
