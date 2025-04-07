#include "RP8-PCH.h"


#define public_6d21a1c _public_6d21a1c
#define public_6d21a43 _public_6d21a43
#define public_6d21b72 _public_6d21b72
#define public_6d21b74 _public_6d21b74
#define public_6d21b98 _public_6d21b98
#define public_6d21be5 _public_6d21be5

PROC_DECLARE(0x6d219c1, internal_6d219c1, public_6d219c1);
extern "C" NAKED register_t __cdecl internal_6d219c1()
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
        shl edx, 5
        mov eax, dword ptr ss : [ebp+8]
        add eax, edx
        mov ecx, dword ptr ss : [ebp+0x18]
        shl ecx, 5
        lea edx, ds:[eax+ecx-0x60]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp+0x14]
        shl eax, 5
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d21a43
        public_6d21a1c : nop
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x80
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
        public_6d21a43 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ss : [ebp-0x14]
        jae public_6d21b72
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
        add edx, 0x20
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0xC
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x2C
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
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x18
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x40
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x18
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x4C
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
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x24
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x60
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x24
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x6C
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
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x7C], edx
        jmp public_6d21a1c
        public_6d21b72 : nop
        jmp public_6d21b98
        public_6d21b74 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
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
        public_6d21b98 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x60
        cmp dword ptr ss : [ebp-0x10], edx
        jae public_6d21be5
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
        jmp public_6d21b74
        public_6d21be5 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d219c1)
    }
}

#undef public_6d21a1c
#undef public_6d21a43
#undef public_6d21b72
#undef public_6d21b74
#undef public_6d21b98
#undef public_6d21be5
