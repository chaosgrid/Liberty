#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_630b270);
CLANG_FORWARD_PROC_SYMBOL(public_630cd40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63962a1);

#define public_630b3a1 _public_630b3a1
#define public_630b3a3 _public_630b3a3
#define public_630b3c2 _public_630b3c2
#define public_630b3c9 _public_630b3c9
#define public_630b3cb _public_630b3cb
#define public_630b415 _public_630b415
#define public_630b427 _public_630b427
#define public_630b42f _public_630b42f
#define public_630b445 _public_630b445
#define public_630b44b _public_630b44b

PROC_DECLARE(0x630b320, internal_630b320, public_630b320);
extern "C" NAKED register_t __cdecl internal_630b320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63962a1 @0x630b322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63962a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push 0xA0
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_630b3a1
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [esi], ebx
        call public_630b270
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov dword ptr ds : [esi+0xC], 0x64
        mov byte ptr ds : [esi+0x10], bl
        mov byte ptr ds : [esi+0x11], bl
        mov byte ptr ds : [esi+0x12], bl
        mov byte ptr ds : [esi+4], 1
        call public_630b0f0
        jmp public_630b3a3
        public_630b3a1 : nop
        xor esi, esi
        public_630b3a3 : nop
        cmp byte ptr ds : [esi+4], bl
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_630b3c9
        cmp byte ptr ds : [esi+0x11], bl
        jne public_630b3c2
        cmp byte ptr ds : [esi+0x12], bl
        jne public_630b3c2
        cmp dword ptr ds : [esi+0x94], ebx
        je public_630b3c9
        public_630b3c2 : nop
        mov eax, 1
        jmp public_630b3cb
        public_630b3c9 : nop
        xor eax, eax
        public_630b3cb : nop
        cmp al, bl
        mov byte ptr ds : [esi+0x10], al
        jne public_630b415
        push edi
        mov dword ptr ss : [esp+0x30], esi
        lea edi, ds:[esi+0x14]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 2
        call public_630cd40
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_630cd40
        push esi
        call public_6391d5a
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_630b415 : nop
        cmp byte ptr ds : [esi+0x12], bl
        je public_630b42f
        mov eax, dword ptr ds : [public_63fcf2c]
        cmp eax, ebx
        je public_630b427
        mov dword ptr ds : [eax], esi
        jmp public_630b445
        public_630b427 : nop
        mov dword ptr ds : [public_63fcf28], esi
        jmp public_630b445
        public_630b42f : nop
        mov edx, dword ptr ds : [public_63fcf28]
        mov dword ptr ds : [esi], edx
        cmp dword ptr ds : [public_63fcf2c], ebx
        mov dword ptr ds : [public_63fcf28], esi
        jne public_630b44b
        public_630b445 : nop
        mov dword ptr ds : [public_63fcf2c], esi
        public_630b44b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x630b320)
    }
}

#undef public_630b3a1
#undef public_630b3a3
#undef public_630b3c2
#undef public_630b3c9
#undef public_630b3cb
#undef public_630b415
#undef public_630b427
#undef public_630b42f
#undef public_630b445
#undef public_630b44b
