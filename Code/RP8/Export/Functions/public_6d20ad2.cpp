#include "RP8-PCH.h"


#define public_6d20b48 _public_6d20b48
#define public_6d20b6e _public_6d20b6e
#define public_6d20cfd _public_6d20cfd
#define public_6d20cff _public_6d20cff
#define public_6d20d23 _public_6d20d23
#define public_6d20d8e _public_6d20d8e

PROC_DECLARE(0x6d20ad2, internal_6d20ad2, public_6d20ad2);
extern "C" NAKED register_t __cdecl internal_6d20ad2()
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
        shl eax, 5
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        shl edx, 5
        lea eax, ds:[ecx+edx-0x60]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        shl ecx, 5
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d20b6e
        public_6d20b48 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x80
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
        public_6d20b6e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp ecx, dword ptr ss : [ebp-0x20]
        jae public_6d20cfd
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
        add edx, 0x20
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
        add edx, 0x2C
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
        mov dword ptr ds : [ecx+0x38], edx
        mov dword ptr ds : [ecx+0x3C], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+8]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x40
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
        add edx, 0x4C
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
        mov dword ptr ds : [ecx+0x58], edx
        mov dword ptr ds : [ecx+0x5C], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+0xC]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x60
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
        add edx, 0x6C
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
        mov dword ptr ds : [ecx+0x78], edx
        mov dword ptr ds : [ecx+0x7C], eax
        jmp public_6d20b48
        public_6d20cfd : nop
        jmp public_6d20d23
        public_6d20cff : nop
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x20
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
        public_6d20d23 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, 0x60
        cmp dword ptr ss : [ebp-0x14], eax
        jae public_6d20d8e
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
        jmp public_6d20cff
        public_6d20d8e : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d20ad2)
    }
}

#undef public_6d20b48
#undef public_6d20b6e
#undef public_6d20cfd
#undef public_6d20cff
#undef public_6d20d23
#undef public_6d20d8e
