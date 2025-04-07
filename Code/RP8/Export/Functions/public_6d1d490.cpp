#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1d490);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d1d4b3 _public_6d1d4b3
#define public_6d1d52f _public_6d1d52f

PROC_DECLARE(0x6d1d490, internal_6d1d490, public_6d1d490);
extern "C" NAKED register_t __cdecl internal_6d1d490()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov dword ptr ss : [ebp-0x28], ecx
        mov dword ptr ss : [ebp-0xC], 0x38
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d1d4b3
        mov dword ptr ss : [ebp-8], 0
        public_6d1d4b3 : nop
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ss : [ebp-4]
        mov byte ptr ds : [ecx+0x35], 0
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x35], 1
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx], 0
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x1C], 0x38
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x18], ecx
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d1d52f
        mov dword ptr ss : [ebp-0x18], 0
        public_6d1d52f : nop
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [eax+0x35], 0
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [eax+0x10], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1d490)
    }
}

#undef public_6d1d4b3
#undef public_6d1d52f
