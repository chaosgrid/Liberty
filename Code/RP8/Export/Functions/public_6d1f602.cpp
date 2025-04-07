#include "RP8-PCH.h"


#define public_6d1f660 _public_6d1f660
#define public_6d1f67b _public_6d1f67b
#define public_6d1f7a7 _public_6d1f7a7
#define public_6d1f7a9 _public_6d1f7a9
#define public_6d1f7c4 _public_6d1f7c4
#define public_6d1f814 _public_6d1f814

PROC_DECLARE(0x6d1f602, internal_6d1f602, public_6d1f602);
extern "C" NAKED register_t __cdecl internal_6d1f602()
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
        imul eax, 0x18
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, 0x18
        lea eax, ds:[ecx+edx-0x48]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, 0x18
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x10], edx
        jmp public_6d1f67b
        public_6d1f660 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x60
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x10
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x14], edx
        public_6d1f67b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ss : [ebp-0x18]
        jae public_6d1f7a7
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
        add ecx, 0x18
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
        add ecx, 0x24
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
        add ecx, 0x30
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
        add ecx, 0x3C
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
        add ecx, 0x48
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
        add ecx, 0x54
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d1f660
        public_6d1f7a7 : nop
        jmp public_6d1f7c4
        public_6d1f7a9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 4
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x14], eax
        public_6d1f7c4 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        cmp dword ptr ss : [ebp-0x10], ecx
        jae public_6d1f814
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
        jmp public_6d1f7a9
        public_6d1f814 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1f602)
    }
}

#undef public_6d1f660
#undef public_6d1f67b
#undef public_6d1f7a7
#undef public_6d1f7a9
#undef public_6d1f7c4
#undef public_6d1f814
