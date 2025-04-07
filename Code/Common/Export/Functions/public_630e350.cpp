#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e350);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396378);

#define public_630e394 _public_630e394
#define public_630e3a1 _public_630e3a1
#define public_630e3a4 _public_630e3a4
#define public_630e3d3 _public_630e3d3
#define public_630e3d5 _public_630e3d5
#define public_630e403 _public_630e403
#define public_630e40d _public_630e40d
#define public_630e429 _public_630e429
#define public_630e434 _public_630e434

PROC_DECLARE(0x630e350, internal_630e350, public_630e350);
extern "C" NAKED register_t __cdecl internal_630e350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396378 @0x630e352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396378
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+0xC], bl
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi], offset public_639b5ac
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov cl, byte ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0xC], cl
        xor ebp, ebp
        public_630e394 : nop
        cmp ebp, ebx
        jne public_630e3a1
        mov edx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [edx+4]
        jmp public_630e3a4
        public_630e3a1 : nop
        mov ebp, dword ptr ss : [ebp]
        public_630e3a4 : nop
        cmp ebp, ebx
        je public_630e434
        push 0x10
        call dword ptr ds : [public_6399328]
        add esp, 4
        cmp eax, ebx
        je public_630e3d3
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov edi, eax
        jmp public_630e3d5
        public_630e3d3 : nop
        xor edi, edi
        public_630e3d5 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        cmp byte ptr ds : [esi+0xC], bl
        je public_630e403
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_630e403
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_630e40d
        public_630e403 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_630e40d : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_630e429
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+8], eax
        jmp public_630e394
        public_630e429 : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        jmp public_630e394
        public_630e434 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x630e350)
    }
}

#undef public_630e394
#undef public_630e3a1
#undef public_630e3a4
#undef public_630e3d3
#undef public_630e3d5
#undef public_630e403
#undef public_630e40d
#undef public_630e429
#undef public_630e434
