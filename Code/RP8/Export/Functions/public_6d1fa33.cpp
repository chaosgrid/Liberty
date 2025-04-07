#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1fa33);

#define public_6d1fa94 _public_6d1fa94
#define public_6d1fab1 _public_6d1fab1
#define public_6d1fbe3 _public_6d1fbe3
#define public_6d1fbe5 _public_6d1fbe5
#define public_6d1fc00 _public_6d1fc00
#define public_6d1fc53 _public_6d1fc53

PROC_DECLARE(0x6d1fa33, internal_6d1fa33, public_6d1fa33);
extern "C" NAKED register_t __cdecl internal_6d1fa33()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x14], edx
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
        mov dword ptr ss : [ebp-0x10], edx
        jmp public_6d1fab1
        public_6d1fa94 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0xB0
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x10
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x14], edx
        public_6d1fab1 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ss : [ebp-0x18]
        jae public_6d1fbe3
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-4]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+4]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-4]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-4]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0xC]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+0xC]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-4]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x90
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d1fa94
        public_6d1fbe3 : nop
        jmp public_6d1fc00
        public_6d1fbe5 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 4
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x14], eax
        public_6d1fc00 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x84
        cmp dword ptr ss : [ebp-0x10], ecx
        jae public_6d1fc53
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0xC
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d1fbe5
        public_6d1fc53 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1fa33)
    }
}

#undef public_6d1fa94
#undef public_6d1fab1
#undef public_6d1fbe3
#undef public_6d1fbe5
#undef public_6d1fc00
#undef public_6d1fc53
