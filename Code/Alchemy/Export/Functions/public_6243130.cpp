#include "Alchemy-PCH.h"


#define public_6243176 _public_6243176

PROC_DECLARE(0x6243130, internal_6243130, public_6243130);
extern "C" NAKED register_t __cdecl internal_6243130()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6243176
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+8]
        shl eax, 4
        add eax, edx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp], eax
        public_6243176 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6243130)
    }
}

#undef public_6243176
