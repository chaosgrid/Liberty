#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4680);

PROC_DECLARE(0x6ef4680, internal_6ef4680, public_6ef4680);
extern "C" NAKED register_t __cdecl internal_6ef4680()
{
    __asm
    {
        push ebp
        mov ebp, esp
        add esp, 0xFFFFFFF4
        wait 
        fnstcw word ptr ss : [ebp-2]
        wait 
        mov ax, word ptr ss : [ebp-2]
        or ah, 0xC
        mov word ptr ss : [ebp-4], ax
        fldcw word ptr ss : [ebp-4]
        fistp qword ptr ss : [ebp-0xC]
        fldcw word ptr ss : [ebp-2]
        mov eax, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-8]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef4680)
    }
}
