#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51bbb);
CLANG_FORWARD_PROC_SYMBOL(public_6d51cf2);

PROC_DECLARE(0x6d51cf2, internal_6d51cf2, public_6d51cf2);
extern "C" NAKED register_t __cdecl internal_6d51cf2()
{
    __asm
    {
        sub esp, 0x24
        mov dword ptr ss : [esp+0x20], ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        mov edx, esp
        femms 
        movd mm0, dword ptr ss : [ebp+0x38]
        movd mm1, dword ptr ss : [ebp+0x3C]
        pfadd mm0, mm1
        movd dword ptr ss : [ebp+0x38], mm0
        sub esp, 4
        movd dword ptr ss : [esp], mm0
        push dword ptr ss : [ebp+0x30]
        push dword ptr ss : [ebp+0x2C]
        push edx
        call public_6d51bbb
        lea edx, ss:[esp+0x10]
        push dword ptr ss : [ebp+0x38]
        push dword ptr ss : [ebp+0x34]
        push dword ptr ss : [ebp+0x2C]
        push edx
        call public_6d51bbb
        movd mm0, dword ptr ss : [ebp+0x38]
        movd mm1, dword ptr ss : [ebp+0x3C]
        lea edx, ss:[esp+0x10]
        lea ecx, ss:[esp]
        pfrcp mm2, mm0
        pfrcpit1 mm0, mm2
        pfrcpit2 mm0, mm2
        pfmul mm0, mm1
        sub esp, 0xC
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp], ecx
        movd dword ptr ss : [esp+8], mm0
        push dword ptr ss : [ebp+0x28]
        call public_6d51bbb
        mov eax, dword ptr ss : [ebp+0x28]
        femms 
        mov esp, ebp
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 0x24
        ret 0x18
        UNREACHABLE_TRAP(0x6d51cf2)
    }
}
