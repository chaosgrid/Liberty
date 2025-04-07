#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d21be9);

#define public_6d21c56 _public_6d21c56
#define public_6d21c85 _public_6d21c85
#define public_6d21e10 _public_6d21e10
#define public_6d21e12 _public_6d21e12
#define public_6d21e3f _public_6d21e3f
#define public_6d21ea2 _public_6d21ea2

PROC_DECLARE(0x6d21be9, internal_6d21be9, public_6d21be9);
extern "C" NAKED register_t __cdecl internal_6d21be9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp+0x10]
        add eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x10], eax
        mov edx, dword ptr ss : [ebp+0x14]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp+0x10]
        add edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0xC], edx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ss : [ebp+0x14]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*8]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0x2C
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, 0x2C
        lea eax, ds:[ecx+edx-0x84]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, 0x2C
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d21c85
        public_6d21c56 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0xB0
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x30
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x20
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0x20
        mov dword ptr ss : [ebp-4], ecx
        public_6d21c85 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ss : [ebp-0x18]
        jae public_6d21e10
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0xC
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+0x1C], eax
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x2C
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0xC
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x38
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], edx
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x50], edx
        mov dword ptr ds : [ecx+0x54], eax
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x18
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x58
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x18
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x64
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x74], edx
        mov dword ptr ds : [ecx+0x78], eax
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+0x7C], eax
        mov dword ptr ds : [edx+0x80], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x24
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x84
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x24
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x90
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+0xA0], eax
        mov dword ptr ds : [edx+0xA4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0xA8], ecx
        mov dword ptr ds : [eax+0xAC], edx
        jmp public_6d21c56
        public_6d21e10 : nop
        jmp public_6d21e3f
        public_6d21e12 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0xC
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 8
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 8
        mov dword ptr ss : [ebp-4], edx
        public_6d21e3f : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x84
        cmp dword ptr ss : [ebp-0x14], eax
        jae public_6d21ea2
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0xC
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], edx
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x24], edx
        mov dword ptr ds : [ecx+0x28], eax
        jmp public_6d21e12
        public_6d21ea2 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d21be9)
    }
}

#undef public_6d21c56
#undef public_6d21c85
#undef public_6d21e10
#undef public_6d21e12
#undef public_6d21e3f
#undef public_6d21ea2
