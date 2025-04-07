#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ccc1);

#define public_6d4cd11 _public_6d4cd11
#define public_6d4cd65 _public_6d4cd65
#define public_6d4cd6b _public_6d4cd6b
#define public_6d4cde5 _public_6d4cde5
#define public_6d4cdf0 _public_6d4cdf0

PROC_DECLARE(0x6d4ccc1, internal_6d4ccc1, public_6d4ccc1);
extern "C" NAKED register_t __cdecl internal_6d4ccc1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x1A0]
        push edi
        mov edi, dword ptr ds : [ecx+0x5C]
        mov ecx, dword ptr ds : [ecx+0x11C]
        mov dword ptr ss : [ebp+8], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x18], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x24], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ss : [ebp+0x18]
        dec eax
        mov dword ptr ss : [ebp-0x28], edi
        mov dword ptr ss : [ebp-0x20], ecx
        js public_6d4cdf0
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        shl edx, 2
        inc eax
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], eax
        public_6d4cd11 : nop
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+eax]
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+eax]
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+eax]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx+eax]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0x14]
        add dword ptr ss : [ebp+0x14], 4
        mov eax, dword ptr ds : [eax]
        add edx, 4
        test edi, edi
        mov dword ptr ss : [ebp-0x2C], edx
        jbe public_6d4cde5
        mov esi, dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp-0xC]
        sub ebx, ecx
        sub esi, ecx
        sub edx, ecx
        mov dword ptr ss : [ebp-0x10], ebx
        mov dword ptr ss : [ebp-0x14], esi
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp-4], edi
        jmp public_6d4cd6b
        public_6d4cd65 : nop
        mov ebx, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ss : [ebp-0x14]
        public_6d4cd6b : nop
        movzx edx, byte ptr ds : [ebx+ecx]
        mov ebx, dword ptr ss : [ebp-0x18]
        movzx edi, byte ptr ds : [ecx]
        mov dword ptr ss : [ebp+0x18], edx
        movzx edx, byte ptr ds : [esi+ecx]
        mov esi, edx
        mov edx, dword ptr ss : [ebp+8]
        shl esi, 2
        sub edx, dword ptr ds : [esi+ebx]
        mov ebx, dword ptr ss : [ebp-0x20]
        sub edx, dword ptr ss : [ebp+0x18]
        shl edi, 2
        mov dl, byte ptr ds : [edx+0xFF]
        mov byte ptr ds : [eax], dl
        mov edx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [edi+edx]
        add edx, dword ptr ds : [esi+ebx]
        mov esi, dword ptr ss : [ebp+8]
        sar edx, 0x10
        sub esi, edx
        sub esi, dword ptr ss : [ebp+0x18]
        add eax, 4
        mov dl, byte ptr ds : [esi+0xFF]
        mov esi, dword ptr ss : [ebp-0x24]
        mov byte ptr ds : [eax-3], dl
        mov edx, dword ptr ss : [ebp+8]
        sub edx, dword ptr ds : [edi+esi]
        sub edx, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [edx+0xFF]
        mov byte ptr ds : [eax-2], dl
        mov edx, dword ptr ss : [ebp-0xC]
        mov dl, byte ptr ds : [edx+ecx]
        mov byte ptr ds : [eax-1], dl
        inc ecx
        dec dword ptr ss : [ebp-4]
        jne public_6d4cd65
        mov edi, dword ptr ss : [ebp-0x28]
        mov esi, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x2C]
        public_6d4cde5 : nop
        dec dword ptr ss : [ebp-8]
        jne public_6d4cd11
        pop esi
        pop ebx
        public_6d4cdf0 : nop
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4ccc1)
    }
}

#undef public_6d4cd11
#undef public_6d4cd65
#undef public_6d4cd6b
#undef public_6d4cde5
#undef public_6d4cdf0
