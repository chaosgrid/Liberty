#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d20754);

#define public_6d207e5 _public_6d207e5
#define public_6d20814 _public_6d20814
#define public_6d20a19 _public_6d20a19
#define public_6d20a1b _public_6d20a1b
#define public_6d20a48 _public_6d20a48
#define public_6d20ace _public_6d20ace

PROC_DECLARE(0x6d20754, internal_6d20754, public_6d20754);
extern "C" NAKED register_t __cdecl internal_6d20754()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x54]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x60]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0x2C
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, 0x2C
        lea eax, ds:[ecx+edx-0x84]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, 0x2C
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x18], edx
        jmp public_6d20814
        public_6d207e5 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0xB0
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d20814 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ss : [ebp-0x28]
        jae public_6d20a19
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0xC
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x1C], eax
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x24], eax
        mov dword ptr ds : [edx+0x28], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x2C
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+4]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x38
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x48], eax
        mov dword ptr ds : [edx+0x4C], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x50], eax
        mov dword ptr ds : [edx+0x54], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x58
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+8]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x64
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x74], eax
        mov dword ptr ds : [edx+0x78], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x7C], eax
        mov dword ptr ds : [edx+0x80], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x84
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+0xC]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x90
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0xA0], eax
        mov dword ptr ds : [edx+0xA4], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0xA8], eax
        mov dword ptr ds : [edx+0xAC], ecx
        jmp public_6d207e5
        public_6d20a19 : nop
        jmp public_6d20a48
        public_6d20a1b : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x2C
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        add edx, 4
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 4
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 4
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d20a48 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        add edx, 0x84
        cmp dword ptr ss : [ebp-0x18], edx
        jae public_6d20ace
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0xC
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x1C], eax
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x24], eax
        mov dword ptr ds : [edx+0x28], ecx
        jmp public_6d20a1b
        public_6d20ace : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d20754)
    }
}

#undef public_6d207e5
#undef public_6d20814
#undef public_6d20a19
#undef public_6d20a1b
#undef public_6d20a48
#undef public_6d20ace
