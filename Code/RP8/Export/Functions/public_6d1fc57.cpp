#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1fc57);

#define public_6d1fcb5 _public_6d1fcb5
#define public_6d1fcd2 _public_6d1fcd2
#define public_6d1fdfe _public_6d1fdfe
#define public_6d1fe00 _public_6d1fe00
#define public_6d1fe1b _public_6d1fe1b
#define public_6d1fe6b _public_6d1fe6b

PROC_DECLARE(0x6d1fc57, internal_6d1fc57, public_6d1fc57);
extern "C" NAKED register_t __cdecl internal_6d1fc57()
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
        shl eax, 5
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        shl edx, 5
        lea eax, ds:[ecx+edx-0x60]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        shl ecx, 5
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x10], edx
        jmp public_6d1fcd2
        public_6d1fcb5 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x80
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x10
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x14], edx
        public_6d1fcd2 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ss : [ebp-0x18]
        jae public_6d1fdfe
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
        add ecx, 0x20
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
        add ecx, 0x2C
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
        add ecx, 0x40
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
        add ecx, 0x4C
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
        add ecx, 0x60
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
        add ecx, 0x6C
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d1fcb5
        public_6d1fdfe : nop
        jmp public_6d1fe1b
        public_6d1fe00 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 4
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x14], eax
        public_6d1fe1b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x60
        cmp dword ptr ss : [ebp-0x10], ecx
        jae public_6d1fe6b
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
        jmp public_6d1fe00
        public_6d1fe6b : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1fc57)
    }
}

#undef public_6d1fcb5
#undef public_6d1fcd2
#undef public_6d1fdfe
#undef public_6d1fe00
#undef public_6d1fe1b
#undef public_6d1fe6b
