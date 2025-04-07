#include "RP8-PCH.h"


#define public_6d2116b _public_6d2116b
#define public_6d2119a _public_6d2119a
#define public_6d2139a _public_6d2139a
#define public_6d2139c _public_6d2139c
#define public_6d213c9 _public_6d213c9
#define public_6d2144c _public_6d2144c

PROC_DECLARE(0x6d210dd, internal_6d210dd, public_6d210dd);
extern "C" NAKED register_t __cdecl internal_6d210dd()
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
        imul eax, 0x28
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, 0x28
        lea eax, ds:[ecx+edx-0x78]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, 0x28
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x18], edx
        jmp public_6d2119a
        public_6d2116b : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0xA0
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
        public_6d2119a : nop
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ss : [ebp-0x28]
        jae public_6d2139a
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
        mov dword ptr ds : [edx+0x18], eax
        mov dword ptr ds : [edx+0x1C], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x20], eax
        mov dword ptr ds : [edx+0x24], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x28
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
        add eax, 0x34
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
        mov dword ptr ds : [edx+0x40], eax
        mov dword ptr ds : [edx+0x44], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x48], eax
        mov dword ptr ds : [edx+0x4C], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x50
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
        add eax, 0x5C
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
        mov dword ptr ds : [edx+0x68], eax
        mov dword ptr ds : [edx+0x6C], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x70], eax
        mov dword ptr ds : [edx+0x74], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x78
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
        add eax, 0x84
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
        mov dword ptr ds : [edx+0x90], eax
        mov dword ptr ds : [edx+0x94], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x98], eax
        mov dword ptr ds : [edx+0x9C], ecx
        jmp public_6d2116b
        public_6d2139a : nop
        jmp public_6d213c9
        public_6d2139c : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x28
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
        public_6d213c9 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        add edx, 0x78
        cmp dword ptr ss : [ebp-0x18], edx
        jae public_6d2144c
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
        mov dword ptr ds : [edx+0x18], eax
        mov dword ptr ds : [edx+0x1C], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x20], eax
        mov dword ptr ds : [edx+0x24], ecx
        jmp public_6d2139c
        public_6d2144c : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d210dd)
    }
}

#undef public_6d2116b
#undef public_6d2119a
#undef public_6d2139a
#undef public_6d2139c
#undef public_6d213c9
#undef public_6d2144c
