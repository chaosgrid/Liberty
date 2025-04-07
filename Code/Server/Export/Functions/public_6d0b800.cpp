#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6950);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b800);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f100);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f170);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f430);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d615e9);

#define public_6d0b84d _public_6d0b84d
#define public_6d0b84f _public_6d0b84f
#define public_6d0b8c6 _public_6d0b8c6
#define public_6d0b934 _public_6d0b934
#define public_6d0b936 _public_6d0b936
#define public_6d0b974 _public_6d0b974
#define public_6d0b986 _public_6d0b986
#define public_6d0b988 _public_6d0b988
#define public_6d0b9b6 _public_6d0b9b6
#define public_6d0b9f7 _public_6d0b9f7
#define public_6d0b9f9 _public_6d0b9f9
#define public_6d0ba2e _public_6d0ba2e
#define public_6d0ba4f _public_6d0ba4f
#define public_6d0ba51 _public_6d0ba51
#define public_6d0ba7f _public_6d0ba7f
#define public_6d0ba8b _public_6d0ba8b
#define public_6d0baed _public_6d0baed
#define public_6d0baf0 _public_6d0baf0
#define public_6d0bb2b _public_6d0bb2b
#define public_6d0bb36 _public_6d0bb36
#define public_6d0bb43 _public_6d0bb43
#define public_6d0bb63 _public_6d0bb63
#define public_6d0bb70 _public_6d0bb70
#define public_6d0bb9d _public_6d0bb9d
#define public_6d0bba9 _public_6d0bba9

PROC_DECLARE(0x6d0b800, internal_6d0b800, public_6d0b800);
extern "C" NAKED register_t __cdecl internal_6d0b800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d615e9 @0x6d0b802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d615e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        mov eax, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        mov dword ptr ss : [esp], ecx
        je public_6d0bba9
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6d0b84d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0b84f
        public_6d0b84d : nop
        xor eax, eax
        public_6d0b84f : nop
        mov esi, dword ptr ds : [eax+0xB4]
        push ebp
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, offset public_6d90260
        mov dword ptr ss : [esp+0x64], esi
        call public_6ce1a00
        test al, al
        je public_6d0ba8b
        mov eax, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        cmp dword ptr ds : [esi+eax-0x34], edi
        jne public_6d0ba8b
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_6d0ba8b
        mov ebp, dword ptr ds : [eax+4]
        test ebp, ebp
        je public_6d0ba8b
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6d0ba8b
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x60], eax
        je public_6d0ba8b
        public_6d0b8c6 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        call dword ptr ds : [public_6d64260]
        add esp, 4
        test al, al
        je public_6d0b9b6
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_6d0b974
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d64248]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push ecx
        lea ecx, ss:[ebp+0xE4]
        call dword ptr ds : [public_6d641c4]
        test eax, eax
        je public_6d0ba7f
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        test al, al
        je public_6d0ba7f
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6d0b934
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0b936
        public_6d0b934 : nop
        xor eax, eax
        public_6d0b936 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov ecx, dword ptr ss : [esp+0x3C]
        imul eax, 0x418
        mov edx, dword ptr ss : [esp+0x40]
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x42]
        lea edx, ss:[esp+0x48]
        push edx
        mov edx, dword ptr ds : [public_6d90260]
        push ecx
        lea ecx, ds:[eax+edx-0x418]
        call public_6d4f170
        jmp public_6d0ba7f
        public_6d0b974 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6d0b986
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0b988
        public_6d0b986 : nop
        xor eax, eax
        public_6d0b988 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push 0
        push 0xFFFFFFFF
        lea ecx, ds:[eax+ecx-0x418]
        push edx
        call public_6d4f100
        jmp public_6d0ba7f
        public_6d0b9b6 : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push edx
        call dword ptr ds : [public_6d64268]
        add esp, 4
        test al, al
        je public_6d0ba2e
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        lea ecx, ss:[ebp+0x144]
        push eax
        call dword ptr ds : [public_6d64264]
        test eax, eax
        je public_6d0ba7f
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        je public_6d0b9f7
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0b9f9
        public_6d0b9f7 : nop
        xor ecx, ecx
        public_6d0b9f9 : nop
        mov edx, dword ptr ds : [ecx+0xB4]
        mov ecx, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        lea edi, ds:[edx+ecx-0x418]
        mov ecx, eax
        call dword ptr ds : [public_6d642c8]
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        push edx
        call public_6d4f430
        jmp public_6d0ba7f
        public_6d0ba2e : nop
        mov ax, word ptr ds : [esi+8]
        mov ecx, dword ptr ds : [public_6d6401c]
        cmp ax, word ptr ds : [ecx]
        jne public_6d0ba7f
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6d0ba4f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0ba51
        public_6d0ba4f : nop
        xor eax, eax
        public_6d0ba51 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        lea edi, ds:[eax+ecx-0x418]
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6d641f8]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_6d4ed10
        public_6d0ba7f : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x60]
        jne public_6d0b8c6
        public_6d0ba8b : nop
        mov dl, byte ptr ss : [esp+0x64]
        xor edi, edi
        push edi
        push edi
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], dl
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x58], edi
        call dword ptr ds : [eax+0x150]
        cmp eax, edi
        pop ebp
        je public_6d0bb36
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_6d0bb36
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0bb36
        jmp public_6d0baf0
        public_6d0baed : nop
        xor edi, edi
        nop 
        public_6d0baf0 : nop
        cmp dword ptr ds : [esi+0x10], edi
        je public_6d0bb2b
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6d0f6b0
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        public_6d0bb2b : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edx+4]
        jne public_6d0baed
        public_6d0bb36 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d0bb63
        public_6d0bb43 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        push eax
        lea ecx, ds:[esi+8]
        call public_6cf6950
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d0bb43
        public_6d0bb63 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d0bb9d
        lea ecx, ds:[ecx]
        public_6d0bb70 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6d0bb70
        mov edi, dword ptr ss : [esp+0x14]
        public_6d0bb9d : nop
        push edi
        call public_6d5ffb0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        public_6d0bba9 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 8
        UNREACHABLE_TRAP(0x6d0b800)
    }
}

#undef public_6d0b84d
#undef public_6d0b84f
#undef public_6d0b8c6
#undef public_6d0b934
#undef public_6d0b936
#undef public_6d0b974
#undef public_6d0b986
#undef public_6d0b988
#undef public_6d0b9b6
#undef public_6d0b9f7
#undef public_6d0b9f9
#undef public_6d0ba2e
#undef public_6d0ba4f
#undef public_6d0ba51
#undef public_6d0ba7f
#undef public_6d0ba8b
#undef public_6d0baed
#undef public_6d0baf0
#undef public_6d0bb2b
#undef public_6d0bb36
#undef public_6d0bb43
#undef public_6d0bb63
#undef public_6d0bb70
#undef public_6d0bb9d
#undef public_6d0bba9
