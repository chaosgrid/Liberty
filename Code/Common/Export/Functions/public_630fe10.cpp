#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630fe10);
CLANG_FORWARD_PROC_SYMBOL(public_630ff40);

#define public_630fe70 _public_630fe70
#define public_630fe9c _public_630fe9c
#define public_630fed7 _public_630fed7
#define public_630ff0a _public_630ff0a
#define public_630ff12 _public_630ff12

PROC_DECLARE(0x630fe10, internal_630fe10, public_630fe10);
extern "C" NAKED register_t __cdecl internal_630fe10()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x1564]
        test al, al
        je public_630ff12
        mov eax, dword ptr ds : [ebx+0x145C]
        add ebx, 0x1428
        test eax, eax
        je public_630ff0a
        movzx eax, word ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x28]
        push ebp
        push esi
        push edi
        add eax, ecx
        push eax
/*FIXUP push offset public_63a36ec @0x630fe42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a36ec
/*FIXUP push offset public_658e800 @0x630fe47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e800
        call dword ptr ds : [public_639931c]
        mov eax, dword ptr ds : [ebx+0x34]
        lea edi, ds:[ebx+0x3C]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        mov byte ptr ds : [edi], 0
        je public_630fed7
        mov cl, byte ptr ds : [eax+2]
        xor ebp, ebp
        test cl, cl
        jbe public_630fed7
        nop 
        public_630fe70 : nop
        push ebp
        mov ecx, ebx
        call public_630ff40
        test ebp, ebp
        mov edx, eax
        jle public_630fe9c
        mov edi, dword ptr ss : [esp+0x10]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov cx, word ptr ds : [public_63a3624]
        dec edi
        mov word ptr ds : [edi], cx
        mov al, byte ptr ds : [public_63a3626]
        mov byte ptr ds : [edi+2], al
        public_630fe9c : nop
        xor eax, eax
        mov edi, edx
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x10]
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+0x34]
        movzx ecx, byte ptr ds : [eax+2]
        inc ebp
        cmp ebp, ecx
        jl public_630fe70
        mov edi, dword ptr ss : [esp+0x10]
        public_630fed7 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, offset public_658e800
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        mov eax, offset public_658e800
        pop ebx
        pop ecx
        ret 
        public_630ff0a : nop
        mov eax, offset public_63997b0
        pop ebx
        pop ecx
        ret 
        public_630ff12 : nop
        lea eax, ds:[ebx+0x828]
        push eax
        lea ecx, ds:[ebx+0x428]
        push ecx
/*FIXUP push offset public_63a36e4 @0x630ff20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a36e4
/*FIXUP push offset public_63fd198 @0x630ff25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fd198
        call dword ptr ds : [public_639931c]
        add esp, 0x10
        mov eax, offset public_63fd198
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x630fe10)
    }
}

#undef public_630fe70
#undef public_630fe9c
#undef public_630fed7
#undef public_630ff0a
#undef public_630ff12
