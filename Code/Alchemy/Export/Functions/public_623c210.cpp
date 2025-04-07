#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c210);
CLANG_FORWARD_PROC_SYMBOL(public_6245a20);

#define public_623c239 _public_623c239
#define public_623c257 _public_623c257

PROC_DECLARE(0x623c210, internal_623c210, public_623c210);
extern "C" NAKED register_t __cdecl internal_623c210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0xF231FF60
        jne public_623c239
        mov ecx, dword ptr ds : [eax+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_623c239 : nop
        cmp ecx, 0x1874DE74
        jne public_623c257
        mov edx, dword ptr ds : [eax+0x70]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_623c257 : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_6245a20
        UNREACHABLE_TRAP(0x623c210)
    }
}

#undef public_623c239
#undef public_623c257
