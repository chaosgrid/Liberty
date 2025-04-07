#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32320);

#define public_6f32340 _public_6f32340

PROC_DECLARE(0x6f32320, internal_6f32320, public_6f32320);
extern "C" NAKED register_t __cdecl internal_6f32320()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], 1
        mov eax, dword ptr ds : [edx+4]
        sub eax, 0x3F1A
        je public_6f32340
        sub eax, 2
        je public_6f32340
        xor al, al
        ret 
        public_6f32340 : nop
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], edx
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6f32320)
    }
}

#undef public_6f32340
