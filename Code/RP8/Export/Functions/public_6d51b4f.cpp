#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d51b4f);
CLANG_FORWARD_PROC_SYMBOL(public_6d568a2);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ba0);

PROC_DECLARE(0x6d51b4f, internal_6d51b4f, public_6d51b4f);
extern "C" NAKED register_t __cdecl internal_6d51b4f()
{
    __asm
    {
        sub esp, 0x18
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x14], ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        mov edx, esp
        femms 
        push dword ptr ss : [ebp+0x20]
        push edx
        call public_6d568a2
        movd mm0, dword ptr ss : [ebp+0x24]
        pfmul mm0, mmword ptr ds : [public_6d61470]
        call public_6d59ba0
        mov eax, dword ptr ss : [ebp+0x1C]
        movq mm1, qword ptr ss : [esp]
        movd mm2, dword ptr ss : [esp+8]
        movq mm3, mm0
        punpckhdq mm3, mm3
        pfmul mm1, mm3
        pfmul mm2, mm3
        punpckldq mm2, mm0
        movq qword ptr ds : [eax], mm1
        movq qword ptr ds : [eax+8], mm2
        femms 
        mov esp, ebp
        mov ebx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0xC]
        mov ebp, dword ptr ss : [esp+0x14]
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6d51b4f)
    }
}
