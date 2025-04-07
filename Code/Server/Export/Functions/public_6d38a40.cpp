#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e550);

#define public_6d38a9b _public_6d38a9b
#define public_6d38aa0 _public_6d38aa0
#define public_6d38acb _public_6d38acb
#define public_6d38ae8 _public_6d38ae8
#define public_6d38b30 _public_6d38b30
#define public_6d38b77 _public_6d38b77
#define public_6d38b80 _public_6d38b80
#define public_6d38bb3 _public_6d38bb3
#define public_6d38bbb _public_6d38bbb
#define public_6d38bbd _public_6d38bbd
#define public_6d38bca _public_6d38bca
#define public_6d38bdb _public_6d38bdb

PROC_DECLARE(0x6d38a40, internal_6d38a40, public_6d38a40);
extern "C" NAKED register_t __cdecl internal_6d38a40()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x20], 0
        je public_6d38ae8
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d38ae8
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov ebx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x18], eax
        je public_6d38acb
        jmp public_6d38aa0
        public_6d38a9b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        nop 
        public_6d38aa0 : nop
        cmp dword ptr ds : [edi+0xC], ebx
        je public_6d38ae8
        xor eax, eax
        mov ax, word ptr ds : [esi]
        xor edx, edx
        mov dx, word ptr ds : [ebx]
        add ecx, 0xC
        push eax
        push edx
        call public_6d3e550
        test al, al
        jne public_6d38ae8
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 2
        add ebx, 2
        cmp esi, eax
        jne public_6d38a9b
        public_6d38acb : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ebx
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], ebx
        jne public_6d38b30
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x20], edx
        public_6d38ae8 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, dword ptr ds : [ebx+0xC]
        jb public_6d38bdb
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        push ebp
        mov ebp, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebp
        mov dword ptr ds : [ecx+0x1008], eax
        pop ebp
        jbe public_6d38bbb
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d38bbd
        public_6d38b30 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        inc ecx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        jae public_6d38ae8
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], eax
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+4]
        shl edx, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d38ae8
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov ebx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d38bb3
        jmp public_6d38b80
        public_6d38b77 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_6d38b80 : nop
        cmp dword ptr ds : [edi+0xC], ebx
        je public_6d38ae8
        xor edx, edx
        mov dx, word ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ebx]
        add ecx, 0xC
        push edx
        push eax
        call public_6d3e550
        test al, al
        jne public_6d38ae8
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 2
        add ebx, 2
        cmp esi, eax
        jne public_6d38b77
        public_6d38bb3 : nop
        mov dword ptr ds : [edi+0x10], ebx
        jmp public_6d38b30
        public_6d38bbb : nop
        mov eax, edx
        public_6d38bbd : nop
        test eax, eax
        je public_6d38bca
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], esi
        public_6d38bca : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_6d38bdb : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d38a40)
    }
}

#undef public_6d38a9b
#undef public_6d38aa0
#undef public_6d38acb
#undef public_6d38ae8
#undef public_6d38b30
#undef public_6d38b77
#undef public_6d38b80
#undef public_6d38bb3
#undef public_6d38bbb
#undef public_6d38bbd
#undef public_6d38bca
#undef public_6d38bdb
