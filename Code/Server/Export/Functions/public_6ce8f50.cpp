#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a90);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b200);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d605d8);

#define public_6ce8f83 _public_6ce8f83
#define public_6ce8f9b _public_6ce8f9b
#define public_6ce8f9d _public_6ce8f9d
#define public_6ce903b _public_6ce903b
#define public_6ce903d _public_6ce903d
#define public_6ce906d _public_6ce906d
#define public_6ce9098 _public_6ce9098
#define public_6ce90d5 _public_6ce90d5
#define public_6ce90ec _public_6ce90ec
#define public_6ce9101 _public_6ce9101
#define public_6ce9171 _public_6ce9171
#define public_6ce9173 _public_6ce9173
#define public_6ce9199 _public_6ce9199
#define public_6ce91bf _public_6ce91bf

PROC_DECLARE(0x6ce8f50, internal_6ce8f50, public_6ce8f50);
extern "C" NAKED register_t __cdecl internal_6ce8f50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d605d8 @0x6ce8f52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d605d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor ebx, ebx
        push 0x10000
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x17], bl
        call dword ptr ds : [public_6d64204]
        public_6ce8f83 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, ebx
        je public_6ce8f9b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce8f9d
        public_6ce8f9b : nop
        xor eax, eax
        public_6ce8f9d : nop
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64200]
        mov edi, eax
        cmp edi, ebx
        je public_6ce91bf
        cmp dword ptr ds : [edi+0x20], ebx
        jne public_6ce8f83
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6d64248]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        test al, al
        je public_6ce8f83
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, ebx
        mov ecx, dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6ce906d
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6ce906d
        cmp ecx, ebx
        jbe public_6ce906d
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6ce906d
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], ebx
        je public_6ce906d
        cmp eax, ebx
        je public_6ce903b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_6ce903b
        mov esi, eax
        jmp public_6ce903d
        public_6ce903b : nop
        xor esi, esi
        public_6ce903d : nop
        mov ecx, esi
        call dword ptr ds : [public_6d6425c]
        mov edx, dword ptr ds : [esi+0xB0]
        mov ecx, offset public_6d90260
        push eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6ce1a90
        mov ecx, eax
        call public_6d4b200
        xor ebx, ebx
        cmp al, bl
        je public_6ce8f83
        public_6ce906d : nop
        mov eax, dword ptr ss : [esp+0x6C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x13], 1
        je public_6ce9098
        push ebx
        push eax
        call dword ptr ds : [public_6d64250]
        add esp, 8
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d64258]
        public_6ce9098 : nop
        mov dl, byte ptr ss : [esp+0x70]
        mov byte ptr ss : [esp+0x1C], dl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x6C], ebx
        call dword ptr ds : [eax+0x244]
        test eax, eax
        je public_6ce9101
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, ebx
        jne public_6ce90d5
        xor edx, edx
        jmp public_6ce90ec
        public_6ce90d5 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        sub ecx, esi
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ce90ec : nop
        push edx
        mov edx, dword ptr ss : [ebp]
        push esi
        push 2
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+0x28]
        push eax
        call public_6d08a40
        public_6ce9101 : nop
        mov esi, dword ptr ss : [esp+0x70]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push 1
        push ebx
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6d641ec]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, ebx
        mov ecx, dword ptr ds : [esi+0x18]
        je public_6ce9199
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6ce9199
        cmp ecx, ebx
        jbe public_6ce9199
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6ce9199
        mov edi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        cmp dword ptr ds : [edx+edi+0x348], ebx
        je public_6ce9199
        cmp eax, ebx
        je public_6ce9171
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6ce9171
        mov esi, eax
        jmp public_6ce9173
        public_6ce9171 : nop
        xor esi, esi
        public_6ce9173 : nop
        imul ecx, 0x418
        lea edi, ds:[ecx+edi-0x418]
        mov ecx, esi
        call dword ptr ds : [public_6d6425c]
        mov ecx, edi
        push eax
        mov eax, dword ptr ds : [esi+0xB0]
        push eax
        call public_6d4b270
        xor ebx, ebx
        public_6ce9199 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        jmp public_6ce8f83
        public_6ce91bf : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 8
        UNREACHABLE_TRAP(0x6ce8f50)
    }
}

#undef public_6ce8f83
#undef public_6ce8f9b
#undef public_6ce8f9d
#undef public_6ce903b
#undef public_6ce903d
#undef public_6ce906d
#undef public_6ce9098
#undef public_6ce90d5
#undef public_6ce90ec
#undef public_6ce9101
#undef public_6ce9171
#undef public_6ce9173
#undef public_6ce9199
#undef public_6ce91bf
