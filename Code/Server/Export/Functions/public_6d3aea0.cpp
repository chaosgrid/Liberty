#include "Server-PCH.h"


#define public_6d3aec6 _public_6d3aec6
#define public_6d3aeea _public_6d3aeea
#define public_6d3af02 _public_6d3af02
#define public_6d3af0d _public_6d3af0d
#define public_6d3af1b _public_6d3af1b
#define public_6d3af20 _public_6d3af20
#define public_6d3af34 _public_6d3af34
#define public_6d3af3e _public_6d3af3e
#define public_6d3af45 _public_6d3af45
#define public_6d3af50 _public_6d3af50
#define public_6d3af69 _public_6d3af69
#define public_6d3af86 _public_6d3af86
#define public_6d3af8b _public_6d3af8b
#define public_6d3af99 _public_6d3af99
#define public_6d3afa1 _public_6d3afa1

PROC_DECLARE(0x6d3aea0, internal_6d3aea0, public_6d3aea0);
extern "C" NAKED register_t __cdecl internal_6d3aea0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ax, word ptr ds : [esi]
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        xor edi, edi
        test ax, ax
        je public_6d3af3e
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3aec6
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3af3e
        public_6d3aec6 : nop
        lea eax, ds:[esi+2]
        cmp eax, esi
        jne public_6d3af0d
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_6d3aeea
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        push esi
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        movzx eax, al
        pop ebx
        ret 8
        public_6d3aeea : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3af02
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3af02
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6d3af02 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 8
        public_6d3af0d : nop
        mov edx, dword ptr ds : [ebx+0xC]
        test edx, edx
        je public_6d3af1b
        mov esi, eax
        mov edi, 1
        public_6d3af1b : nop
        cmp edi, edx
        jae public_6d3af45
        nop 
        public_6d3af20 : nop
        mov ax, word ptr ds : [esi]
        test ax, ax
        je public_6d3afa1
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3af34
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3afa1
        public_6d3af34 : nop
        add esi, 2
        inc edi
        cmp edi, edx
        jb public_6d3af20
        jmp public_6d3af45
        public_6d3af3e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        jne public_6d3afa1
        public_6d3af45 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6d3af50 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3af8b
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        jne public_6d3af99
        mov edx, dword ptr ss : [esp+0x10]
        public_6d3af69 : nop
        cmp edi, dword ptr ds : [ebx+0x10]
        jae public_6d3afa1
        mov ax, word ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+8]
        inc edi
        test ax, ax
        je public_6d3afa1
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3af86
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3afa1
        public_6d3af86 : nop
        add esi, 2
        jmp public_6d3af50
        public_6d3af8b : nop
        mov al, byte ptr ds : [edx+0x1C]
        test al, al
        je public_6d3af99
        cmp dword ptr ds : [edx+8], esi
        jne public_6d3af99
        jmp public_6d3af69
        public_6d3af99 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6d3afa1 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d3aea0)
    }
}

#undef public_6d3aec6
#undef public_6d3aeea
#undef public_6d3af02
#undef public_6d3af0d
#undef public_6d3af1b
#undef public_6d3af20
#undef public_6d3af34
#undef public_6d3af3e
#undef public_6d3af45
#undef public_6d3af50
#undef public_6d3af69
#undef public_6d3af86
#undef public_6d3af8b
#undef public_6d3af99
#undef public_6d3afa1
