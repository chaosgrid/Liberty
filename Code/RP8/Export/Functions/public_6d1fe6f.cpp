#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1fe6f);

#define public_6d1fee5 _public_6d1fee5
#define public_6d1ff0b _public_6d1ff0b
#define public_6d200a3 _public_6d200a3
#define public_6d200a5 _public_6d200a5
#define public_6d200c9 _public_6d200c9
#define public_6d20134 _public_6d20134

PROC_DECLARE(0x6d1fe6f, internal_6d1fe6f, public_6d1fe6f);
extern "C" NAKED register_t __cdecl internal_6d1fe6f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0x28
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, 0x28
        lea eax, ds:[ecx+edx-0x78]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, 0x28
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d1ff0b
        public_6d1fee5 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0xA0
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x18], eax
        public_6d1ff0b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp ecx, dword ptr ss : [ebp-0x20]
        jae public_6d200a3
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0xC
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x1C], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x28
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+4]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x34
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x40], edx
        mov dword ptr ds : [ecx+0x44], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+8]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x50
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+8]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x5C
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x68], edx
        mov dword ptr ds : [ecx+0x6C], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+0xC]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x78
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+0xC]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x84
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x90], edx
        mov dword ptr ds : [ecx+0x94], eax
        jmp public_6d1fee5
        public_6d200a3 : nop
        jmp public_6d200c9
        public_6d200a5 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x28
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 4
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 4
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 4
        mov dword ptr ss : [ebp-0x18], edx
        public_6d200c9 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, 0x78
        cmp dword ptr ss : [ebp-0x14], eax
        jae public_6d20134
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [ecx]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-8]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+edx*8]
        mov edx, dword ptr ds : [eax+edx*8+4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], edx
        jmp public_6d200a5
        public_6d20134 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1fe6f)
    }
}

#undef public_6d1fee5
#undef public_6d1ff0b
#undef public_6d200a3
#undef public_6d200a5
#undef public_6d200c9
#undef public_6d20134
