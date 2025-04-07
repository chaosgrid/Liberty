#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4cdf3);
CLANG_FORWARD_PROC_SYMBOL(public_6d4cf2f);

#define public_6d4cf96 _public_6d4cf96
#define public_6d4cf99 _public_6d4cf99
#define public_6d4d000 _public_6d4d000
#define public_6d4d003 _public_6d4d003
#define public_6d4d061 _public_6d4d061
#define public_6d4d06a _public_6d4d06a
#define public_6d4d071 _public_6d4d071
#define public_6d4d088 _public_6d4d088
#define public_6d4d0d1 _public_6d4d0d1
#define public_6d4d0d4 _public_6d4d0d4
#define public_6d4d13f _public_6d4d13f
#define public_6d4d148 _public_6d4d148

PROC_DECLARE(0x6d4cf2f, internal_6d4cf2f, public_6d4cf2f);
extern "C" NAKED register_t __cdecl internal_6d4cf2f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x34
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x1A0]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x11C]
        push edi
        mov edi, dword ptr ds : [ecx+0x5C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov ebx, edi
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        and ebx, 0xFFFFFFF8
        cmp byte ptr ds : [public_6d6d400], 0
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-0x34], ebx
        mov dword ptr ss : [ebp-0x24], ecx
        mov dword ptr ss : [ebp-0x20], eax
        je public_6d4d071
        mov ecx, dword ptr ss : [ebp+0x18]
        dec ecx
        js public_6d4d06a
        lea eax, ds:[ebx+ebx*2]
        mov dword ptr ss : [ebp-0x30], eax
        mov eax, dword ptr ss : [ebp+0x10]
        shl eax, 2
        inc ecx
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6d4cf99
        public_6d4cf96 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        public_6d4cf99 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+edx]
        mov edi, dword ptr ds : [eax+edi]
        mov ecx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+ecx]
        add eax, 4
        mov dword ptr ss : [ebp-0x2C], eax
        mov eax, dword ptr ss : [ebp+0x14]
        add dword ptr ss : [ebp+0x14], 4
        mov dword ptr ss : [ebp+8], edi
        mov edi, dword ptr ds : [eax]
        push edi
        push ecx
        push dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], edx
        push edx
        push ebx
        mov dword ptr ss : [ebp-8], ecx
        call public_6d4cdf3
        add edi, dword ptr ss : [ebp-0x30]
        add esp, 0x14
        cmp ebx, dword ptr ss : [ebp-0x10]
        jae public_6d4d061
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, edx
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ss : [ebp-8]
        sub ecx, edx
        lea eax, ds:[edx+ebx]
        mov edx, dword ptr ss : [ebp-0x10]
        sub edx, ebx
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d4d003
        public_6d4d000 : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_6d4d003 : nop
        movzx ecx, byte ptr ds : [ecx+eax]
        mov edx, dword ptr ss : [ebp-4]
        movzx edx, byte ptr ds : [edx+eax]
        mov ebx, dword ptr ss : [ebp-0x1C]
        shl ecx, 2
        mov ebx, dword ptr ds : [ecx+ebx]
        mov dword ptr ss : [ebp+8], edx
        add ebx, dword ptr ss : [ebp+8]
        movzx edx, byte ptr ds : [eax]
        mov bl, byte ptr ds : [ebx+esi]
        mov byte ptr ds : [edi], bl
        mov ebx, dword ptr ss : [ebp-0x20]
        shl edx, 2
        mov dword ptr ss : [ebp-0xC], edx
        mov edx, dword ptr ds : [edx+ebx]
        mov ebx, dword ptr ss : [ebp-0x24]
        add edx, dword ptr ds : [ecx+ebx]
        add edi, 3
        sar edx, 0x10
        add edx, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [edx+esi]
        mov edx, dword ptr ss : [ebp-0x28]
        mov byte ptr ds : [edi-2], cl
        mov ecx, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [ecx+edx]
        add ecx, dword ptr ss : [ebp+8]
        inc eax
        dec dword ptr ss : [ebp-0x14]
        mov cl, byte ptr ds : [ecx+esi]
        mov byte ptr ds : [edi-1], cl
        jne public_6d4d000
        mov ebx, dword ptr ss : [ebp-0x34]
        public_6d4d061 : nop
        dec dword ptr ss : [ebp-0x18]
        jne public_6d4cf96
        public_6d4d06a : nop
        emms 
        jmp public_6d4d148
        public_6d4d071 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        dec eax
        js public_6d4d148
        mov edx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0xC]
        shl edx, 2
        inc eax
        mov dword ptr ss : [ebp-0x14], eax
        public_6d4d088 : nop
        mov eax, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+eax]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edx+eax]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx+eax]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0x14]
        add dword ptr ss : [ebp+0x14], 4
        mov eax, dword ptr ds : [eax]
        add edx, 4
        test edi, edi
        mov dword ptr ss : [ebp-0x30], edx
        jbe public_6d4d13f
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-4]
        sub edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ss : [ebp-8]
        sub edx, ecx
        mov dword ptr ss : [ebp-8], edx
        mov dword ptr ss : [ebp-0x18], edi
        jmp public_6d4d0d4
        public_6d4d0d1 : nop
        mov edx, dword ptr ss : [ebp-8]
        public_6d4d0d4 : nop
        movzx edx, byte ptr ds : [ecx+edx]
        mov edi, dword ptr ss : [ebp-4]
        movzx ebx, byte ptr ds : [ecx+edi]
        movzx edi, byte ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x34], edi
        mov edi, edx
        mov edx, dword ptr ss : [ebp-0x1C]
        shl edi, 2
        mov edx, dword ptr ds : [edi+edx]
        add edx, ebx
        mov dl, byte ptr ds : [edx+esi]
        mov byte ptr ds : [eax], dl
        mov edx, dword ptr ss : [ebp-0x34]
        shl edx, 2
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp+8], ebx
        mov ebx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [edx+ebx]
        mov ebx, dword ptr ss : [ebp-0x24]
        add edx, dword ptr ds : [edi+ebx]
        mov edi, dword ptr ss : [ebp-0x28]
        sar edx, 0x10
        add edx, dword ptr ss : [ebp+8]
        add eax, 3
        mov dl, byte ptr ds : [edx+esi]
        mov byte ptr ds : [eax-2], dl
        mov edx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [edx+edi]
        add edx, dword ptr ss : [ebp+8]
        inc ecx
        dec dword ptr ss : [ebp-0x18]
        mov dl, byte ptr ds : [edx+esi]
        mov byte ptr ds : [eax-1], dl
        jne public_6d4d0d1
        mov edx, dword ptr ss : [ebp-0x30]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp-0x10]
        public_6d4d13f : nop
        dec dword ptr ss : [ebp-0x14]
        jne public_6d4d088
        public_6d4d148 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4cf2f)
    }
}

#undef public_6d4cf96
#undef public_6d4cf99
#undef public_6d4d000
#undef public_6d4d003
#undef public_6d4d061
#undef public_6d4d06a
#undef public_6d4d071
#undef public_6d4d088
#undef public_6d4d0d1
#undef public_6d4d0d4
#undef public_6d4d13f
#undef public_6d4d148
