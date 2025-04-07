#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d20409);

#define public_6d2049a _public_6d2049a
#define public_6d204c9 _public_6d204c9
#define public_6d206ac _public_6d206ac
#define public_6d206ae _public_6d206ae
#define public_6d206d2 _public_6d206d2
#define public_6d20750 _public_6d20750

PROC_DECLARE(0x6d20409, internal_6d20409, public_6d20409);
extern "C" NAKED register_t __cdecl internal_6d20409()
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
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x38]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x1C], edx
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
        jmp public_6d204c9
        public_6d2049a : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0xB0
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x10
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x1C], ecx
        public_6d204c9 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ss : [ebp-0x28]
        jae public_6d206ac
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
        mov eax, dword ptr ss : [ebp-0x24]
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
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+ecx*4]
        mov dword ptr ds : [edx+0x18], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0x2C
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx+4]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0x38
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx+0x44], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+edx*8]
        mov edx, dword ptr ds : [eax+edx*8+4]
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], edx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x58
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x64
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx+edx*4]
        mov dword ptr ds : [eax+0x70], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x74], eax
        mov dword ptr ds : [edx+0x78], ecx
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
        mov eax, dword ptr ss : [ebp-0x24]
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
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+ecx*4]
        mov dword ptr ds : [edx+0x9C], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+0xA0], edx
        mov dword ptr ds : [ecx+0xA4], eax
        jmp public_6d2049a
        public_6d206ac : nop
        jmp public_6d206d2
        public_6d206ae : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0x2C
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 4
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        add edx, 4
        mov dword ptr ss : [ebp-0x1C], edx
        public_6d206d2 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        add eax, 0x84
        cmp dword ptr ss : [ebp-0x18], eax
        jae public_6d20750
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [ecx]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx+edx*4]
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x1C], eax
        mov dword ptr ds : [edx+0x20], ecx
        jmp public_6d206ae
        public_6d20750 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d20409)
    }
}

#undef public_6d2049a
#undef public_6d204c9
#undef public_6d206ac
#undef public_6d206ae
#undef public_6d206d2
#undef public_6d20750
