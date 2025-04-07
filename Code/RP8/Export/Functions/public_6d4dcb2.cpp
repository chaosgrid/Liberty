#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4dcb2);

#define public_6d4dd04 _public_6d4dd04
#define public_6d4dd33 _public_6d4dd33
#define public_6d4dd51 _public_6d4dd51
#define public_6d4dd82 _public_6d4dd82
#define public_6d4dd8e _public_6d4dd8e
#define public_6d4dd9f _public_6d4dd9f
#define public_6d4ddad _public_6d4ddad

PROC_DECLARE(0x6d4dcb2, internal_6d4dcb2, public_6d4dcb2);
extern "C" NAKED register_t __cdecl internal_6d4dcb2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov ecx, dword ptr ds : [esi+0x1A4]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x40], ecx
        xor ecx, ecx
        mov dword ptr ss : [ebp-0x18], ecx
        mov dword ptr ss : [ebp-0x1C], ecx
        mov dword ptr ss : [ebp-0x20], ecx
        mov dword ptr ss : [ebp-0x24], ecx
        mov ecx, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x28], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp-0x3C]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x2C], ebx
        jg public_6d4ddad
        lea ebx, ds:[eax*8+4]
        mov dword ptr ss : [ebp-0x14], ebx
        public_6d4dd04 : nop
        cmp ecx, dword ptr ss : [ebp-0x28]
        jg public_6d4dd9f
        mov ebx, dword ptr ss : [ebp-0x40]
        mov ebx, dword ptr ds : [ebx+eax*4]
        lea edi, ds:[ecx*4+2]
        mov dword ptr ss : [ebp-0x10], edi
        mov edi, ecx
        shl edi, 5
        add edi, edx
        lea edi, ds:[ebx+edi*2]
        mov dword ptr ss : [ebp-0xC], edi
        mov edi, dword ptr ss : [ebp-0x28]
        sub edi, ecx
        inc edi
        mov dword ptr ss : [ebp-0x38], edi
        public_6d4dd33 : nop
        cmp edx, dword ptr ss : [ebp-0x2C]
        mov ebx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], ebx
        jg public_6d4dd8e
        lea edi, ds:[edx*8+4]
        mov dword ptr ss : [ebp-8], edi
        mov edi, dword ptr ss : [ebp-0x2C]
        sub edi, edx
        inc edi
        mov dword ptr ss : [ebp-0x34], edi
        public_6d4dd51 : nop
        mov edi, dword ptr ss : [ebp-4]
        movzx edi, word ptr ds : [edi]
        add dword ptr ss : [ebp-4], 2
        test edi, edi
        mov dword ptr ss : [ebp-0x30], edi
        je public_6d4dd82
        add dword ptr ss : [ebp-0x18], edi
        mov ebx, dword ptr ss : [ebp-0x14]
        imul ebx, edi
        mov edi, dword ptr ss : [ebp-0x10]
        imul edi, dword ptr ss : [ebp-0x30]
        add dword ptr ss : [ebp-0x20], edi
        mov edi, dword ptr ss : [ebp-8]
        imul edi, dword ptr ss : [ebp-0x30]
        add dword ptr ss : [ebp-0x1C], ebx
        add dword ptr ss : [ebp-0x24], edi
        public_6d4dd82 : nop
        add dword ptr ss : [ebp-8], 8
        dec dword ptr ss : [ebp-0x34]
        jne public_6d4dd51
        mov edi, dword ptr ss : [ebp-0x38]
        public_6d4dd8e : nop
        add dword ptr ss : [ebp-0xC], 0x40
        add dword ptr ss : [ebp-0x10], 4
        dec edi
        mov dword ptr ss : [ebp-0x38], edi
        jne public_6d4dd33
        mov edi, dword ptr ss : [ebp+8]
        public_6d4dd9f : nop
        add dword ptr ss : [ebp-0x14], 8
        inc eax
        cmp eax, dword ptr ss : [ebp-0x3C]
        jle public_6d4dd04
        public_6d4ddad : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, ebx
        sar ecx, 1
        add eax, ecx
        cdq 
        idiv ebx
        mov edx, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [edx]
        mov byte ptr ds : [edi+edx], al
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, ecx
        cdq 
        idiv ebx
        mov edx, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [edx+4]
        mov byte ptr ds : [edi+edx], al
        mov eax, dword ptr ss : [ebp-0x24]
        add eax, ecx
        cdq 
        idiv ebx
        mov ecx, dword ptr ds : [esi+0x74]
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edi+ecx], al
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4dcb2)
    }
}

#undef public_6d4dd04
#undef public_6d4dd33
#undef public_6d4dd51
#undef public_6d4dd82
#undef public_6d4dd8e
#undef public_6d4dd9f
#undef public_6d4ddad
