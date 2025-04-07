#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d330);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d3b0);

#define public_6c2d351 _public_6c2d351
#define public_6c2d382 _public_6c2d382
#define public_6c2d394 _public_6c2d394
#define public_6c2d397 _public_6c2d397
#define public_6c2d3a4 _public_6c2d3a4
#define public_6c2d3a6 _public_6c2d3a6

PROC_DECLARE(0x6c2d330, internal_6c2d330, public_6c2d330);
extern "C" NAKED register_t __cdecl internal_6c2d330()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        cmp dword ptr ds : [edi+0x28], esi
        mov al, 1
        je public_6c2d3a6
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov eax, dword ptr ds : [edi+0x34]
        jne public_6c2d351
        movzx ecx, word ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+8], ecx
        public_6c2d351 : nop
        movzx edx, word ptr ds : [eax+0xC]
        cmp dword ptr ds : [esi+8], edx
        sete bl
        test bl, bl
        je public_6c2d3a4
        movzx ecx, word ptr ds : [eax+0xE]
        mov edx, dword ptr ds : [esi]
        add edx, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], edx
        movzx edx, word ptr ds : [eax+0xA]
        add ecx, edx
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ds : [edi+0x28]
        test ecx, ecx
        je public_6c2d382
        push edi
        call public_6c2d3b0
        public_6c2d382 : nop
        mov dword ptr ds : [edi+0x28], esi
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        mov dword ptr ds : [esi+0x20], edi
        jne public_6c2d394
        mov dword ptr ds : [esi+0x1C], edi
        jmp public_6c2d397
        public_6c2d394 : nop
        mov dword ptr ds : [eax+0x20], edi
        public_6c2d397 : nop
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi+0x20], 0
        inc dword ptr ds : [esi+0x24]
        public_6c2d3a4 : nop
        mov al, bl
        public_6c2d3a6 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c2d330)
    }
}

#undef public_6c2d351
#undef public_6c2d382
#undef public_6c2d394
#undef public_6c2d397
#undef public_6c2d3a4
#undef public_6c2d3a6
