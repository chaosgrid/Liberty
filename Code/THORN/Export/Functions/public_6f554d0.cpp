#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55410);
CLANG_FORWARD_PROC_SYMBOL(public_6f554d0);

#define public_6f554f8 _public_6f554f8

PROC_DECLARE(0x6f554d0, internal_6f554d0, public_6f554d0);
extern "C" NAKED register_t __cdecl internal_6f554d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax+0x20]
        push edi
        mov edi, dword ptr ds : [eax+0x24]
        add edx, ecx
        cmp edx, edi
        jle public_6f554f8
        push ecx
        call public_6f55410
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f554f8 : nop
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [eax+0x20], ecx
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f554d0)
    }
}

#undef public_6f554f8
