#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dd10);
CLANG_FORWARD_PROC_SYMBOL(public_634def0);
CLANG_FORWARD_PROC_SYMBOL(public_635c200);
CLANG_FORWARD_PROC_SYMBOL(public_6362ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6369be0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6398391);

#define public_6360d07 _public_6360d07
#define public_6360d2f _public_6360d2f
#define public_6360d31 _public_6360d31
#define public_6360d5a _public_6360d5a
#define public_6360d80 _public_6360d80
#define public_6360d82 _public_6360d82
#define public_6360d8c _public_6360d8c

PROC_DECLARE(0x6360c80, internal_6360c80, public_6360c80);
extern "C" NAKED register_t __cdecl internal_6360c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398391 @0x6360c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398391
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [ebx+0x80]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [ebp+0x80]
        mov edx, dword ptr ds : [ecx]
        mov edi, eax
        call dword ptr ds : [edx]
        test edi, edi
        mov dword ptr ss : [esp+0x24], eax
        je public_6360d5a
        test eax, eax
        je public_6360d5a
        mov dl, byte ptr ds : [edi+8]
        mov ebp, dword ptr ds : [ebx+0x18]
        mov cl, 3
        test cl, dl
        jne public_6360d07
        test byte ptr ds : [eax+8], cl
        jne public_6360d07
        push 0x80
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 1
        je public_6360d2f
        push esi
        push ebp
        mov ecx, eax
        call public_634dd10
        jmp public_6360d31
        public_6360d07 : nop
        push 0x94
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_6360d2f
        push esi
        push ebp
        mov ecx, eax
        call public_6362ab0
        jmp public_6360d31
        public_6360d2f : nop
        xor eax, eax
        public_6360d31 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add eax, 0x14
        push eax
        add edi, 0x14
        push edi
        push ecx
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_634def0
        mov ebp, dword ptr ss : [esp+0x28]
        jmp public_6360d8c
        public_6360d5a : nop
        push 0x40
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 2
        je public_6360d80
        push ebp
        push ebx
        push esi
        mov ecx, eax
        call public_6369be0
        jmp public_6360d82
        public_6360d80 : nop
        xor eax, eax
        public_6360d82 : nop
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov esi, eax
        public_6360d8c : nop
        mov ecx, dword ptr ds : [ebx+0x90]
        mov ebp, dword ptr ss : [ebp+0x90]
        push esi
        call public_635c200
        push esi
        mov ecx, ebp
        call public_635c200
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6360c80)
    }
}

#undef public_6360d07
#undef public_6360d2f
#undef public_6360d31
#undef public_6360d5a
#undef public_6360d80
#undef public_6360d82
#undef public_6360d8c
