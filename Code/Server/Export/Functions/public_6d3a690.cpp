#include "Server-PCH.h"


#define public_6d3a6bd _public_6d3a6bd
#define public_6d3a6dc _public_6d3a6dc
#define public_6d3a6f1 _public_6d3a6f1
#define public_6d3a6fd _public_6d3a6fd
#define public_6d3a70b _public_6d3a70b
#define public_6d3a710 _public_6d3a710
#define public_6d3a724 _public_6d3a724
#define public_6d3a72e _public_6d3a72e
#define public_6d3a735 _public_6d3a735
#define public_6d3a74e _public_6d3a74e
#define public_6d3a76d _public_6d3a76d
#define public_6d3a772 _public_6d3a772
#define public_6d3a780 _public_6d3a780
#define public_6d3a789 _public_6d3a789

PROC_DECLARE(0x6d3a690, internal_6d3a690, public_6d3a690);
extern "C" NAKED register_t __cdecl internal_6d3a690()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        xor edi, edi
        cmp eax, esi
        je public_6d3a72e
        mov ax, word ptr ds : [esi]
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3a6bd
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3a72e
        public_6d3a6bd : nop
        lea eax, ds:[esi+2]
        cmp eax, esi
        jne public_6d3a6fd
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3a6dc
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebp
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        ret 8
        public_6d3a6dc : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d3a6f1
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d3a6f1
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d3a6f1 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6d3a6fd : nop
        mov edx, dword ptr ds : [ebx+0xC]
        test edx, edx
        je public_6d3a70b
        mov esi, eax
        mov edi, 1
        public_6d3a70b : nop
        cmp edi, edx
        jae public_6d3a735
        nop 
        public_6d3a710 : nop
        cmp dword ptr ss : [ebp+0xC], esi
        je public_6d3a789
        mov ax, word ptr ds : [esi]
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3a724
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3a789
        public_6d3a724 : nop
        add esi, 2
        inc edi
        cmp edi, edx
        jb public_6d3a710
        jmp public_6d3a735
        public_6d3a72e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        jne public_6d3a789
        public_6d3a735 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3a772
        mov edx, dword ptr ds : [ecx]
        push esi
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d3a780
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3a74e : nop
        cmp edi, dword ptr ds : [ebx+0x10]
        jae public_6d3a789
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ebx+8]
        inc edi
        cmp ecx, esi
        je public_6d3a789
        mov cx, word ptr ds : [esi]
        cmp cx, word ptr ds : [eax+8]
        je public_6d3a76d
        cmp cx, word ptr ds : [eax+0xE]
        jne public_6d3a789
        public_6d3a76d : nop
        add esi, 2
        jmp public_6d3a735
        public_6d3a772 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d3a780
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d3a780
        jmp public_6d3a74e
        public_6d3a780 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_6d3a789 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d3a690)
    }
}

#undef public_6d3a6bd
#undef public_6d3a6dc
#undef public_6d3a6f1
#undef public_6d3a6fd
#undef public_6d3a70b
#undef public_6d3a710
#undef public_6d3a724
#undef public_6d3a72e
#undef public_6d3a735
#undef public_6d3a74e
#undef public_6d3a76d
#undef public_6d3a772
#undef public_6d3a780
#undef public_6d3a789
