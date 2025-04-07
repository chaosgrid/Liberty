#include "RP8-PCH.h"


#define public_6d27e14 _public_6d27e14
#define public_6d27e26 _public_6d27e26

PROC_DECLARE(0x6d27df0, internal_6d27df0, public_6d27df0);
extern "C" NAKED register_t __cdecl internal_6d27df0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d27e14
        mov dword ptr ss : [ebp-0xC], 0
        jmp public_6d27e26
        public_6d27e14 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [eax+8]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0xC], edx
        public_6d27e26 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d27df0)
    }
}

#undef public_6d27e14
#undef public_6d27e26
