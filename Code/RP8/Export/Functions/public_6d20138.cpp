#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d20138);

#define public_6d201b1 _public_6d201b1
#define public_6d201d7 _public_6d201d7
#define public_6d20372 _public_6d20372
#define public_6d20374 _public_6d20374
#define public_6d20398 _public_6d20398
#define public_6d20405 _public_6d20405

PROC_DECLARE(0x6d20138, internal_6d20138, public_6d20138);
extern "C" NAKED register_t __cdecl internal_6d20138()
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
        imul eax, 0x2C
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, 0x2C
        lea eax, ds:[ecx+edx-0x84]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, 0x2C
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d201d7
        public_6d201b1 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0xB0
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
        public_6d201d7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp ecx, dword ptr ss : [ebp-0x20]
        jae public_6d20372
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
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x2C
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
        add edx, 0x38
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
        mov dword ptr ds : [ecx+0x48], edx
        mov dword ptr ds : [ecx+0x4C], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+8]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x58
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
        add edx, 0x64
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
        mov dword ptr ds : [ecx+0x74], edx
        mov dword ptr ds : [ecx+0x78], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+0xC]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x84
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
        add edx, 0x90
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
        mov dword ptr ds : [ecx+0xA0], edx
        mov dword ptr ds : [ecx+0xA4], eax
        jmp public_6d201b1
        public_6d20372 : nop
        jmp public_6d20398
        public_6d20374 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x2C
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
        public_6d20398 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, 0x84
        cmp dword ptr ss : [ebp-0x14], eax
        jae public_6d20405
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
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], edx
        jmp public_6d20374
        public_6d20405 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d20138)
    }
}

#undef public_6d201b1
#undef public_6d201d7
#undef public_6d20372
#undef public_6d20374
#undef public_6d20398
#undef public_6d20405
