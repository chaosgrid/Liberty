#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4214d0);
CLANG_FORWARD_PROC_SYMBOL(public_4215e0);
CLANG_FORWARD_PROC_SYMBOL(public_564f90);

PROC_DECLARE(0x564f90, internal_564f90, public_564f90);
extern "C" NAKED register_t __cdecl internal_564f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movzx ecx, byte ptr ds : [eax+3]
        movzx edx, byte ptr ds : [eax+2]
        mov dword ptr ss : [esp+4], ecx
        movzx ecx, byte ptr ds : [eax+1]
        fild dword ptr ss : [esp+4]
        sub esp, 0x10
        mov dword ptr ss : [esp+0x14], edx
        fmul qword ptr ds : [public_5c89c8]
        movzx edx, byte ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp]
        call public_4214d0
        add esp, 0x10
        mov dword ptr ss : [esp+4], 0x4100
        jmp public_4215e0
        UNREACHABLE_TRAP(0x564f90)
    }
}
