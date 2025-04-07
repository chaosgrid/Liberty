#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d21ea6);

#define public_6d21f04 _public_6d21f04
#define public_6d21f2b _public_6d21f2b
#define public_6d22065 _public_6d22065
#define public_6d22067 _public_6d22067
#define public_6d2208b _public_6d2208b
#define public_6d220db _public_6d220db

PROC_DECLARE(0x6d21ea6, internal_6d21ea6, public_6d21ea6);
extern "C" NAKED register_t __cdecl internal_6d21ea6()
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
        imul edx, 0x2C
        mov eax, dword ptr ss : [ebp+8]
        add eax, edx
        mov ecx, dword ptr ss : [ebp+0x18]
        imul ecx, 0x2C
        lea edx, ds:[eax+ecx-0x84]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0x2C
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d21f2b
        public_6d21f04 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0xB0
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
        public_6d21f2b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ss : [ebp-0x14]
        jae public_6d22065
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
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x2C
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0xC
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x38
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
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x18
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x58
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x18
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x64
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
        mov dword ptr ds : [eax+0x74], ecx
        mov dword ptr ds : [eax+0x78], edx
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x24
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x84
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x24
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x90
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
        mov dword ptr ds : [eax+0xA0], ecx
        mov dword ptr ds : [eax+0xA4], edx
        jmp public_6d21f04
        public_6d22065 : nop
        jmp public_6d2208b
        public_6d22067 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
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
        public_6d2208b : nop
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x84
        cmp dword ptr ss : [ebp-0x10], edx
        jae public_6d220db
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
        mov dword ptr ds : [edx+0x1C], eax
        mov dword ptr ds : [edx+0x20], ecx
        jmp public_6d22067
        public_6d220db : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d21ea6)
    }
}

#undef public_6d21f04
#undef public_6d21f2b
#undef public_6d22065
#undef public_6d22067
#undef public_6d2208b
#undef public_6d220db
