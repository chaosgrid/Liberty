#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f42a0);

#define public_4f42d8 _public_4f42d8

PROC_DECLARE(0x4f42a0, internal_4f42a0, public_4f42a0);
extern "C" NAKED register_t __cdecl internal_4f42a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x364]
        test eax, eax
        je public_4f42d8
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f42d8
        mov al, byte ptr ds : [ecx+0x38C]
        test al, al
        je public_4f42d8
        mov al, byte ptr ds : [ecx+0x374]
        mov edx, dword ptr ss : [esp+4]
        mov byte ptr ds : [edx], al
        mov eax, dword ptr ds : [ecx+0x378]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 8
        public_4f42d8 : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x4f42a0)
    }
}

#undef public_4f42d8
