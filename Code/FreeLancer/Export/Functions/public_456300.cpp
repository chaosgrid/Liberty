#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_456300);

#define public_456326 _public_456326

PROC_DECLARE(0x456300, internal_456300, public_456300);
extern "C" NAKED register_t __cdecl internal_456300()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2D]
        test al, al
        je public_456326
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0xC0]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [ecx+0xB4]
        shl edx, 6
        mov ecx, dword ptr ds : [edx+eax]
        jmp public_44f9e0
        public_456326 : nop
        ret 4
        UNREACHABLE_TRAP(0x456300)
    }
}

#undef public_456326
