#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d220df);

#define public_6d2213a _public_6d2213a
#define public_6d22161 _public_6d22161
#define public_6d22298 _public_6d22298
#define public_6d2229a _public_6d2229a
#define public_6d222be _public_6d222be
#define public_6d2230b _public_6d2230b

PROC_DECLARE(0x6d220df, internal_6d220df, public_6d220df);
extern "C" NAKED register_t __cdecl internal_6d220df()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp+0x10]
        add eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0xC], eax
        mov edx, dword ptr ss : [ebp+0x14]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp+0x10]
        add edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-8], edx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ss : [ebp+0x14]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        imul edx, 0x28
        mov eax, dword ptr ss : [ebp+8]
        add eax, edx
        mov ecx, dword ptr ss : [ebp+0x18]
        imul ecx, 0x28
        lea edx, ds:[eax+ecx-0x78]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0x28
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d22161
        public_6d2213a : nop
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0xA0
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x30
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x30
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0x20
        mov dword ptr ss : [ebp-4], edx
        public_6d22161 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ss : [ebp-0x14]
        jae public_6d22298
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0xC
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x28
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0xC
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x34
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x18
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x50
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x18
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x5C
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x6C], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x24
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x78
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x24
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x84
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x90], ecx
        mov dword ptr ds : [eax+0x94], edx
        jmp public_6d2213a
        public_6d22298 : nop
        jmp public_6d222be
        public_6d2229a : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0xC
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0xC
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 8
        mov dword ptr ss : [ebp-4], ecx
        public_6d222be : nop
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x78
        cmp dword ptr ss : [ebp-0x10], edx
        jae public_6d2230b
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0xC
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0x18], eax
        mov dword ptr ds : [edx+0x1C], ecx
        jmp public_6d2229a
        public_6d2230b : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d220df)
    }
}

#undef public_6d2213a
#undef public_6d22161
#undef public_6d22298
#undef public_6d2229a
#undef public_6d222be
#undef public_6d2230b
