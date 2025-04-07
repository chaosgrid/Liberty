#include "Server-PCH.h"


#define public_6d3b850 _public_6d3b850
#define public_6d3b86c _public_6d3b86c
#define public_6d3b87a _public_6d3b87a
#define public_6d3b8ad _public_6d3b8ad
#define public_6d3b8c9 _public_6d3b8c9
#define public_6d3b8d8 _public_6d3b8d8
#define public_6d3b905 _public_6d3b905
#define public_6d3b919 _public_6d3b919
#define public_6d3b923 _public_6d3b923
#define public_6d3b92b _public_6d3b92b
#define public_6d3b92f _public_6d3b92f
#define public_6d3b933 _public_6d3b933
#define public_6d3b938 _public_6d3b938
#define public_6d3b94f _public_6d3b94f
#define public_6d3b961 _public_6d3b961
#define public_6d3b971 _public_6d3b971
#define public_6d3b97d _public_6d3b97d

PROC_DECLARE(0x6d3b800, internal_6d3b800, public_6d3b800);
extern "C" NAKED register_t __cdecl internal_6d3b800()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6d3b933
        mov esi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+0xC]
        cmp eax, edi
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, ebp
        je public_6d3b87a
        mov ebx, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x14], ebx
        mov ebx, ecx
        sub ebx, eax
        nop 
        public_6d3b850 : nop
        cmp dword ptr ss : [esp+0x14], edx
        je public_6d3b92b
        mov cx, word ptr ds : [edx]
        cmp word ptr ds : [eax], cx
        je public_6d3b86c
        cmp word ptr ds : [eax+ebx], cx
        jne public_6d3b92b
        public_6d3b86c : nop
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6d3b850
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d3b87a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, edx
        sub eax, ecx
        sar eax, 1
        neg eax
        mov ebp, edx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d3b8d8
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3b8ad
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x14
        ret 8
        public_6d3b8ad : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3b8c9
        cmp dword ptr ds : [eax+8], edx
        jne public_6d3b8c9
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 8
        public_6d3b8c9 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6d3b8d8 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jae public_6d3b92f
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        mov ecx, ebp
        je public_6d3b923
        mov edx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x14], edx
        sub edi, eax
        public_6d3b905 : nop
        cmp dword ptr ss : [esp+0x14], ecx
        je public_6d3b92b
        mov dx, word ptr ds : [ecx]
        cmp word ptr ds : [eax], dx
        je public_6d3b919
        cmp word ptr ds : [eax+edi], dx
        jne public_6d3b92b
        public_6d3b919 : nop
        add eax, 2
        add ecx, 2
        cmp eax, ebx
        jne public_6d3b905
        public_6d3b923 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov ebp, ecx
        jmp public_6d3b8d8
        public_6d3b92b : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d3b92f : nop
        mov esi, dword ptr ss : [esp+0x2C]
        public_6d3b933 : nop
        cmp dword ptr ds : [ebx+0xC], esi
        ja public_6d3b97d
        public_6d3b938 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3b961
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d3b94f : nop
        jne public_6d3b971
        cmp dword ptr ds : [ebx+0xC], esi
        je public_6d3b97d
        mov eax, dword ptr ss : [esp+0x18]
        dec esi
        lea ebp, ss:[ebp+eax*2]
        jmp public_6d3b938
        public_6d3b961 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3b971
        cmp dword ptr ds : [eax+8], ebp
        jmp public_6d3b94f
        public_6d3b971 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6d3b97d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d3b800)
    }
}

#undef public_6d3b850
#undef public_6d3b86c
#undef public_6d3b87a
#undef public_6d3b8ad
#undef public_6d3b8c9
#undef public_6d3b8d8
#undef public_6d3b905
#undef public_6d3b919
#undef public_6d3b923
#undef public_6d3b92b
#undef public_6d3b92f
#undef public_6d3b933
#undef public_6d3b938
#undef public_6d3b94f
#undef public_6d3b961
#undef public_6d3b971
#undef public_6d3b97d
