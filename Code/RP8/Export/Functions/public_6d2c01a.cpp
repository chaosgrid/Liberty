#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c01a);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d2c052 _public_6d2c052
#define public_6d2c0cc _public_6d2c0cc

PROC_DECLARE(0x6d2c01a, internal_6d2c01a, public_6d2c01a);
extern "C" NAKED register_t __cdecl internal_6d2c01a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov al, byte ptr ss : [ebp-1]
        mov byte ptr ds : [public_6d728cc], al
        mov cl, byte ptr ss : [ebp-2]
        mov byte ptr ds : [public_6d728cd], cl
        mov byte ptr ds : [public_6d728d8], 0
        mov dword ptr ss : [ebp-0x10], 0x24
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0xC], edx
        cmp dword ptr ss : [ebp-0xC], 0
        jge public_6d2c052
        mov dword ptr ss : [ebp-0xC], 0
        public_6d2c052 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp-8]
        mov byte ptr ds : [eax+0x21], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [public_6d728d4], ecx
        mov edx, dword ptr ds : [public_6d728d4]
        mov byte ptr ds : [edx+0x21], 1
        mov eax, dword ptr ds : [public_6d728d4]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ds : [public_6d728d4]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ds : [public_6d728d4]
        mov dword ptr ss : [ebp-0x24], eax
        mov dword ptr ss : [ebp-0x20], 0x24
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x1C], ecx
        cmp dword ptr ss : [ebp-0x1C], 0
        jge public_6d2c0cc
        mov dword ptr ss : [ebp-0x1C], 0
        public_6d2c0cc : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ss : [ebp-0x18]
        mov byte ptr ds : [eax+0x21], 0
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [public_6d728d0], ecx
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x28], edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [public_6d728d0]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6d728d0]
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [public_6d728dc], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2c01a)
    }
}

#undef public_6d2c052
#undef public_6d2c0cc
