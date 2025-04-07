#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1edb0);

#define public_6d1ee3e _public_6d1ee3e
#define public_6d1ee45 _public_6d1ee45

PROC_DECLARE(0x6d1edb0, internal_6d1edb0, public_6d1edb0);
extern "C" NAKED register_t __cdecl internal_6d1edb0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1ee3e
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 4
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 4
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov cl, byte ptr ds : [eax+0x10]
        mov byte ptr ss : [ebp-0x15], cl
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov cl, byte ptr ss : [ebp-0x15]
        mov byte ptr ds : [eax+0x10], cl
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x24], edx
        jmp public_6d1ee45
        public_6d1ee3e : nop
        mov dword ptr ss : [ebp-0x24], 0
        public_6d1ee45 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1edb0)
    }
}

#undef public_6d1ee3e
#undef public_6d1ee45
