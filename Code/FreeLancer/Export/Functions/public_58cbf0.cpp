#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_58cc47 _public_58cc47
#define public_58cc52 _public_58cc52
#define public_58cca5 _public_58cca5
#define public_58cccc _public_58cccc
#define public_58cce4 _public_58cce4
#define public_58ccf8 _public_58ccf8

PROC_DECLARE(0x58cbf0, internal_58cbf0, public_58cbf0);
extern "C" NAKED register_t __cdecl internal_58cbf0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x4A4]
        test ecx, ecx
        push ebp
        push esi
        je public_58ccf8
        mov eax, dword ptr ds : [ebx+0x4A8]
        mov esi, dword ptr ss : [esp+0x10]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_58ccf8
        mov ecx, dword ptr ds : [ebx+0x4B4]
        test ecx, ecx
        je public_58ccf8
        mov eax, dword ptr ds : [ebx+0x4B8]
        mov edx, dword ptr ss : [esp+0x14]
        sub eax, ecx
        sar eax, 2
        cmp edx, eax
        jae public_58ccf8
        test ecx, ecx
        jne public_58cc47
        xor eax, eax
        jmp public_58cc52
        public_58cc47 : nop
        mov eax, dword ptr ds : [ebx+0x4B8]
        sub eax, ecx
        sar eax, 2
        public_58cc52 : nop
        imul eax, esi
        add eax, edx
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0x494]
        test eax, eax
        je public_58ccf8
        mov esi, dword ptr ds : [ebx+0x498]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        jae public_58ccf8
        mov edx, dword ptr ds : [ebx+0x494]
        imul ecx, 0x1C
        add ecx, edx
        mov ebp, ecx
        test ebp, ebp
        je public_58ccf8
        mov eax, dword ptr ss : [ebp+4]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_58cce4
        public_58cca5 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_58cccc
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_58cccc : nop
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp edi, eax
        mov dword ptr ss : [ebp+8], ecx
        jne public_58cca5
        public_58cce4 : nop
        push 1
        push 1
        mov ecx, ebx
        call public_57a620
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_58ccf8 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x58cbf0)
    }
}

#undef public_58cc47
#undef public_58cc52
#undef public_58cca5
#undef public_58cccc
#undef public_58cce4
#undef public_58ccf8
