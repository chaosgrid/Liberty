#include "RP8-PCH.h"


#define public_6d11894 _public_6d11894
#define public_6d118b3 _public_6d118b3

PROC_DECLARE(0x6d11877, internal_6d11877, public_6d11877);
extern "C" NAKED register_t __cdecl internal_6d11877()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d11894
        mov dword ptr ss : [ebp-8], 0xFFFFFFFE
        jmp public_6d118b3
        public_6d11894 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x20]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp-8], eax
        public_6d118b3 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d11877)
    }
}

#undef public_6d11894
#undef public_6d118b3
