#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d39440);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e550);

#define public_6d39d8f _public_6d39d8f
#define public_6d39d97 _public_6d39d97
#define public_6d39de3 _public_6d39de3
#define public_6d39e00 _public_6d39e00
#define public_6d39e18 _public_6d39e18
#define public_6d39e27 _public_6d39e27
#define public_6d39e3c _public_6d39e3c
#define public_6d39e42 _public_6d39e42
#define public_6d39e72 _public_6d39e72
#define public_6d39e76 _public_6d39e76
#define public_6d39e9d _public_6d39e9d
#define public_6d39eb3 _public_6d39eb3
#define public_6d39ec0 _public_6d39ec0
#define public_6d39ed3 _public_6d39ed3
#define public_6d39edb _public_6d39edb
#define public_6d39ee2 _public_6d39ee2
#define public_6d39eee _public_6d39eee
#define public_6d39efa _public_6d39efa
#define public_6d39f06 _public_6d39f06
#define public_6d39f0e _public_6d39f0e
#define public_6d39f45 _public_6d39f45
#define public_6d39f7d _public_6d39f7d

PROC_DECLARE(0x6d39d40, internal_6d39d40, public_6d39d40);
extern "C" NAKED register_t __cdecl internal_6d39d40()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [esi+4]
        shl eax, 5
        mov bl, byte ptr ds : [eax+esi+8]
        add eax, esi
        test bl, bl
        mov ebx, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d39edb
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp edi, eax
        mov dword ptr ss : [esp+0x24], eax
        mov esi, ebx
        je public_6d39de3
        jmp public_6d39d97
        public_6d39d8f : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        public_6d39d97 : nop
        push esi
        push ebp
        add ecx, 0xD
        call public_6d39440
        test al, al
        jne public_6d39ed3
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [edi]
        xor edx, edx
        mov dx, word ptr ds : [esi]
        push ecx
        lea ecx, ds:[eax+0xC]
        push edx
        call public_6d3e550
        test al, al
        jne public_6d39ed3
        mov eax, dword ptr ss : [esp+0x24]
        add edi, 2
        add esi, 2
        cmp edi, eax
        jne public_6d39d8f
        cmp esi, ebx
        jne public_6d39e27
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        public_6d39de3 : nop
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        je public_6d39e00
        mov eax, dword ptr ds : [edx]
        push ebx
        push ebp
        mov ecx, edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0xC
        ret 8
        public_6d39e00 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d39e18
        cmp dword ptr ss : [ebp+8], ebx
        jne public_6d39e18
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 8
        public_6d39e18 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 8
        public_6d39e27 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_6d39e3c
        mov ebx, esi
        mov dword ptr ss : [esp+0x14], 1
        public_6d39e3c : nop
        cmp dword ptr ss : [esp+0x14], eax
        jae public_6d39eb3
        public_6d39e42 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        mov dword ptr ss : [esp+0x24], ecx
        je public_6d39ee2
        mov esi, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        cmp esi, ebp
        mov edi, ebx
        je public_6d39e9d
        jmp public_6d39e76
        public_6d39e72 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        public_6d39e76 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi]
        test ax, ax
        je public_6d39ee2
        xor edx, edx
        mov dx, word ptr ds : [esi]
        add ecx, 0xC
        push edx
        push eax
        call public_6d3e550
        test al, al
        jne public_6d39ee2
        add esi, 2
        add edi, 2
        cmp esi, ebp
        jne public_6d39e72
        public_6d39e9d : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+0xC]
        inc eax
        cmp eax, edx
        mov ebx, edi
        mov dword ptr ss : [esp+0x14], eax
        jb public_6d39e42
        public_6d39eb3 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        nop 
        lea esp, ss:[esp]
        public_6d39ec0 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d39eee
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        jmp public_6d39f06
        public_6d39ed3 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        public_6d39edb : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6d39ec0
        public_6d39ee2 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 8
        public_6d39eee : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d39efa
        cmp dword ptr ss : [ebp+8], ebx
        je public_6d39f0e
        public_6d39efa : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 8
        public_6d39f06 : nop
        test al, al
        jne public_6d39efa
        mov edx, dword ptr ss : [esp+0x10]
        public_6d39f0e : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edx+0x10]
        jae public_6d39ee2
        mov esi, eax
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        inc esi
        test cl, cl
        mov dword ptr ss : [esp+0x14], esi
        je public_6d39ee2
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], eax
        mov ebp, ebx
        je public_6d39f7d
        public_6d39f45 : nop
        mov di, word ptr ss : [ebp]
        test di, di
        je public_6d39ee2
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push edi
        mov ebx, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bx
        jne public_6d39ee2
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 2
        add ebp, 2
        cmp esi, eax
        jne public_6d39f45
        public_6d39f7d : nop
        mov ebx, ebp
        jmp public_6d39eb3
        UNREACHABLE_TRAP(0x6d39d40)
    }
}

#undef public_6d39d8f
#undef public_6d39d97
#undef public_6d39de3
#undef public_6d39e00
#undef public_6d39e18
#undef public_6d39e27
#undef public_6d39e3c
#undef public_6d39e42
#undef public_6d39e72
#undef public_6d39e76
#undef public_6d39e9d
#undef public_6d39eb3
#undef public_6d39ec0
#undef public_6d39ed3
#undef public_6d39edb
#undef public_6d39ee2
#undef public_6d39eee
#undef public_6d39efa
#undef public_6d39f06
#undef public_6d39f0e
#undef public_6d39f45
#undef public_6d39f7d
