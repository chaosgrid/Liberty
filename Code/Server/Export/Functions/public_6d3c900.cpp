#include "Server-PCH.h"


#define public_6d3c930 _public_6d3c930
#define public_6d3c94b _public_6d3c94b
#define public_6d3c95d _public_6d3c95d
#define public_6d3c97c _public_6d3c97c
#define public_6d3c998 _public_6d3c998
#define public_6d3c9a7 _public_6d3c9a7
#define public_6d3c9c0 _public_6d3c9c0
#define public_6d3c9d0 _public_6d3c9d0
#define public_6d3c9e0 _public_6d3c9e0
#define public_6d3c9fb _public_6d3c9fb
#define public_6d3ca09 _public_6d3ca09
#define public_6d3ca18 _public_6d3ca18
#define public_6d3ca23 _public_6d3ca23
#define public_6d3ca27 _public_6d3ca27
#define public_6d3ca3e _public_6d3ca3e
#define public_6d3ca66 _public_6d3ca66
#define public_6d3ca79 _public_6d3ca79
#define public_6d3ca85 _public_6d3ca85
#define public_6d3ca91 _public_6d3ca91
#define public_6d3ca9d _public_6d3ca9d

PROC_DECLARE(0x6d3c900, internal_6d3c900, public_6d3c900);
extern "C" NAKED register_t __cdecl internal_6d3c900()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, esi
        je public_6d3c95d
        mov ecx, eax
        sub ebx, eax
        lea ecx, ds:[ecx]
        public_6d3c930 : nop
        mov ax, word ptr ds : [edx]
        test ax, ax
        je public_6d3ca18
        cmp word ptr ds : [ecx], ax
        je public_6d3c94b
        cmp word ptr ds : [ecx+ebx], ax
        jne public_6d3ca18
        public_6d3c94b : nop
        add ecx, 2
        add edx, 2
        cmp ecx, edi
        jne public_6d3c930
        cmp edx, esi
        jne public_6d3c9a7
        mov ecx, dword ptr ss : [esp+0x14]
        public_6d3c95d : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d3c97c
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3c97c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3c998
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3c998
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d3c998 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3c9a7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6d3c9c0
        mov esi, edx
        mov dword ptr ss : [esp+0x10], 1
        public_6d3c9c0 : nop
        cmp dword ptr ss : [esp+0x10], eax
        jae public_6d3ca23
        mov edi, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        lea esp, ss:[esp]
        public_6d3c9d0 : nop
        cmp ebx, edi
        je public_6d3ca09
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, ebx
        sub edx, ebx
        nop 
        lea esp, ss:[esp]
        public_6d3c9e0 : nop
        mov cx, word ptr ds : [esi]
        test cx, cx
        je public_6d3ca9d
        cmp word ptr ds : [eax], cx
        je public_6d3c9fb
        cmp word ptr ds : [eax+edx], cx
        jne public_6d3ca9d
        public_6d3c9fb : nop
        add eax, 2
        add esi, 2
        cmp eax, edi
        jne public_6d3c9e0
        mov eax, dword ptr ss : [esp+0x20]
        public_6d3ca09 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        jb public_6d3c9d0
        jmp public_6d3ca23
        public_6d3ca18 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6d3ca9d
        public_6d3ca23 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d3ca27 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d3ca85
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d3ca3e : nop
        jne public_6d3ca91
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0x10]
        jae public_6d3ca9d
        mov edi, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+8]
        inc edi
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ds : [ecx+0xC]
        cmp eax, edi
        je public_6d3ca27
        mov ecx, dword ptr ds : [ecx+0x18]
        sub ecx, eax
        public_6d3ca66 : nop
        mov dx, word ptr ds : [esi]
        test dx, dx
        je public_6d3ca9d
        cmp word ptr ds : [eax], dx
        je public_6d3ca79
        cmp word ptr ds : [eax+ecx], dx
        jne public_6d3ca9d
        public_6d3ca79 : nop
        add eax, 2
        add esi, 2
        cmp eax, edi
        jne public_6d3ca66
        jmp public_6d3ca27
        public_6d3ca85 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d3ca91
        cmp dword ptr ds : [ebx+8], esi
        jmp public_6d3ca3e
        public_6d3ca91 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3ca9d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d3c900)
    }
}

#undef public_6d3c930
#undef public_6d3c94b
#undef public_6d3c95d
#undef public_6d3c97c
#undef public_6d3c998
#undef public_6d3c9a7
#undef public_6d3c9c0
#undef public_6d3c9d0
#undef public_6d3c9e0
#undef public_6d3c9fb
#undef public_6d3ca09
#undef public_6d3ca18
#undef public_6d3ca23
#undef public_6d3ca27
#undef public_6d3ca3e
#undef public_6d3ca66
#undef public_6d3ca79
#undef public_6d3ca85
#undef public_6d3ca91
#undef public_6d3ca9d
