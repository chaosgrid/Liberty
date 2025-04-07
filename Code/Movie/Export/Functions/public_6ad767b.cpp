#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad767b);

PROC_DECLARE(0x6ad767b, internal_6ad767b, public_6ad767b);
extern "C" NAKED register_t __cdecl internal_6ad767b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0xE]
        fld qword ptr ss : [ebp+8]
        add eax, 0x3FE
        and cx, 0x800F
        fstp qword ptr ss : [ebp-8]
        shl eax, 4
        or eax, ecx
        mov word ptr ss : [ebp-2], ax
        fld qword ptr ss : [ebp-8]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad767b)
    }
}
