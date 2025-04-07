#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248c3b);

#define public_62221b4 _public_62221b4
#define public_62221d4 _public_62221d4
#define public_62221d8 _public_62221d8
#define public_62221dd _public_62221dd
#define public_6222245 _public_6222245
#define public_6222247 _public_6222247
#define public_6222263 _public_6222263
#define public_62222b1 _public_62222b1
#define public_62222ba _public_62222ba
#define public_62222d4 _public_62222d4
#define public_62222e1 _public_62222e1
#define public_62222e7 _public_62222e7
#define public_62222e9 _public_62222e9

PROC_DECLARE(0x6222180, internal_6222180, public_6222180);
extern "C" NAKED register_t __cdecl internal_6222180()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248c3b @0x6222188*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248c3b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        xor ebx, ebx
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_62222d4
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_62221b4 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_62221d8
        cmp cl, bl
        je public_62221d4
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_62221d8
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_62221b4
        public_62221d4 : nop
        xor eax, eax
        jmp public_62221dd
        public_62221d8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62221dd : nop
        cmp eax, ebx
        jne public_62222d4
        push 0x4C
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6222245
        mov al, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624d928
        push ebx
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_624b01c]
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov cl, byte ptr ss : [esp+0x28]
        mov dl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x14], cl
        mov dword ptr ds : [esi+0x20], ebx
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi], offset public_624d8d0
        mov dword ptr ds : [esi+0x48], 1
        jmp public_6222247
        public_6222245 : nop
        xor esi, esi
        public_6222247 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6222263
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_62222e9
        public_6222263 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x50]
        mov edi, eax
        cmp edi, ebx
        je public_62222e1
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_62460e0
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        call public_62460e0
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ebx
        je public_62222ba
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62222b1
        cmp cl, 0xFF
        je public_62222b1
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62222ba
        public_62222b1 : nop
        push eax
        call public_62460e0
        add esp, 4
        public_62222ba : nop
        push esi
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [edx], ebx
        jmp public_62222e7
        public_62222d4 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], ebp
        jmp public_62222e9
        public_62222e1 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], esi
        public_62222e7 : nop
        mov eax, edi
        public_62222e9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6222180)
    }
}

#undef public_62221b4
#undef public_62221d4
#undef public_62221d8
#undef public_62221dd
#undef public_6222245
#undef public_6222247
#undef public_6222263
#undef public_62222b1
#undef public_62222ba
#undef public_62222d4
#undef public_62222e1
#undef public_62222e7
#undef public_62222e9
