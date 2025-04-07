#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_6217b60);
CLANG_FORWARD_PROC_SYMBOL(public_6217b80);
CLANG_FORWARD_PROC_SYMBOL(public_62184c0);
CLANG_FORWARD_PROC_SYMBOL(public_6218540);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248471);

#define public_621827a _public_621827a
#define public_621829a _public_621829a
#define public_621829e _public_621829e
#define public_62182a3 _public_62182a3
#define public_621834b _public_621834b
#define public_6218351 _public_6218351
#define public_621836d _public_621836d
#define public_621840b _public_621840b
#define public_621841b _public_621841b
#define public_6218454 _public_6218454
#define public_621846d _public_621846d
#define public_621847a _public_621847a
#define public_6218480 _public_6218480

PROC_DECLARE(0x6218240, internal_6218240, public_6218240);
extern "C" NAKED register_t __cdecl internal_6218240()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248471 @0x6218248*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248471
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        push esi
        push edi
        xor ebx, ebx
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, 8
        jne public_621846d
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_621827a : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_621829e
        cmp cl, bl
        je public_621829a
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_621829e
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_621827a
        public_621829a : nop
        xor eax, eax
        jmp public_62182a3
        public_621829e : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62182a3 : nop
        cmp eax, ebx
        jne public_621846d
        push 0x108
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_621834b
        lea esi, ds:[edi+0xC]
        mov dword ptr ds : [edi], offset public_624b8b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_6244360
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x2C], 1
        call public_6244b20
        mov ebp, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi], offset public_624cb20
        mov dword ptr ds : [esi+0xE0], offset public_6257a04
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [edi+0xB8], edi
        mov dword ptr ds : [edi+0x24], edi
        mov dword ptr ds : [edi], offset public_624cc40
        mov dword ptr ds : [esi], offset public_624cbb0
        mov dword ptr ds : [edi+0x104], 1
        mov dword ptr ss : [esp+0x34], edi
        jmp public_6218351
        public_621834b : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, ebx
        public_6218351 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        jne public_621836d
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_6218480
        public_621836d : nop
        mov edx, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+0xC]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_621847a
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x2C], 2
        lea ebp, ds:[esi+0xD8]
        mov dword ptr ss : [esp+0x18], ebp
        push ecx
        mov ecx, ebp
        mov eax, esp
        mov dword ptr ss : [esp+0x20], esp
        push eax
        mov byte ptr ss : [esp+0x34], 4
        call public_6217b80
        push ecx
        mov byte ptr ss : [esp+0x34], 5
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, ebp
        call public_6217b60
        lea edx, ss:[esp+0x40]
        mov ecx, ebp
        push edx
        mov byte ptr ss : [esp+0x38], 4
        call public_62184c0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_6218540
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x2C], 2
        call public_6244b50
        mov edi, dword ptr ds : [esi+0xA0]
        mov ebp, dword ptr ds : [esi+0x9C]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x2C], 6
        je public_621841b
        public_621840b : nop
        push ebp
        call public_620ccc0
        add ebp, 4
        add esp, 4
        cmp ebp, edi
        jne public_621840b
        public_621841b : nop
        mov eax, dword ptr ds : [esi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov eax, dword ptr ds : [esi+0x7C]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6218454
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6218454 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6218480
        public_621846d : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6218480
        public_621847a : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx], edi
        public_6218480 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6218240)
    }
}

#undef public_621827a
#undef public_621829a
#undef public_621829e
#undef public_62182a3
#undef public_621834b
#undef public_6218351
#undef public_621836d
#undef public_621840b
#undef public_621841b
#undef public_6218454
#undef public_621846d
#undef public_621847a
#undef public_6218480
