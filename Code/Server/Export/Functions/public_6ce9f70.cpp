#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b200);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d605fb);

#define public_6ce9fcf _public_6ce9fcf
#define public_6ce9fe8 _public_6ce9fe8
#define public_6cea054 _public_6cea054
#define public_6cea056 _public_6cea056
#define public_6cea086 _public_6cea086
#define public_6cea096 _public_6cea096
#define public_6cea098 _public_6cea098
#define public_6cea129 _public_6cea129
#define public_6cea13c _public_6cea13c
#define public_6cea21d _public_6cea21d
#define public_6cea237 _public_6cea237
#define public_6cea277 _public_6cea277
#define public_6cea28e _public_6cea28e
#define public_6cea2a3 _public_6cea2a3
#define public_6cea2c7 _public_6cea2c7
#define public_6cea324 _public_6cea324
#define public_6cea326 _public_6cea326
#define public_6cea34a _public_6cea34a
#define public_6cea351 _public_6cea351
#define public_6cea370 _public_6cea370
#define public_6cea389 _public_6cea389

PROC_DECLARE(0x6ce9f70, internal_6ce9f70, public_6ce9f70);
extern "C" NAKED register_t __cdecl internal_6ce9f70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d605fb @0x6ce9f78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d605fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD4
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xEC]
        mov eax, dword ptr ds : [esi]
        mov ebp, ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6cea370
        cmp dword ptr ds : [esi+0x14], 0x800
        jne public_6ce9fcf
        mov eax, dword ptr ss : [esp+0xF4]
        mov ecx, dword ptr ss : [esp+0xF0]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        push esi
        mov ecx, ebp
        call dword ptr ds : [edx+0x228]
        jmp public_6cea370
        public_6ce9fcf : nop
        mov eax, dword ptr ss : [esp+0xF0]
        push ebx
        xor ebx, ebx
        cmp eax, 4
        push edi
        je public_6ce9fe8
        cmp eax, 5
        jne public_6cea351
        public_6ce9fe8 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        test al, al
        je public_6cea389
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        test al, al
        jne public_6cea389
        mov ecx, dword ptr ss : [esp+0xFC]
        mov edi, dword ptr ss : [ebp+0x10]
        cmp edi, ebx
        mov esi, dword ptr ds : [ecx+0x18]
        mov dword ptr ss : [esp+0x24], esi
        je public_6cea098
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6cea098
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, offset public_6d90260
        call public_6ce1a00
        test al, al
        je public_6cea096
        test edi, edi
        je public_6cea054
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6cea056
        public_6cea054 : nop
        xor edi, edi
        public_6cea056 : nop
        mov edx, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        mov ecx, edi
        lea esi, ds:[esi+edx-0x418]
        call dword ptr ds : [public_6d6425c]
        mov ecx, esi
        push eax
        mov eax, dword ptr ds : [edi+0xB0]
        push eax
        call public_6d4b200
        xor ebx, ebx
        cmp al, bl
        jne public_6cea098
        public_6cea086 : nop
        mov dword ptr ss : [esp+0xF8], 2
        jmp public_6cea34a
        public_6cea096 : nop
        xor ebx, ebx
        public_6cea098 : nop
        mov esi, dword ptr ds : [public_6d64248]
        lea ecx, ss:[esp+0x58]
        call esi
        cmp dword ptr ss : [esp+0xF8], 4
        jne public_6cea129
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call esi
        mov ecx, dword ptr ss : [ebp+0x28]
        call public_6d06cd0
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0xFC]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0xF4]
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        lea eax, ss:[esp+0x28]
        push eax
        push 0x13
        call public_6d43650
        mov ecx, 8
        lea esi, ss:[esp+0x40]
        lea edi, ss:[esp+0x60]
        rep movsd
        mov esi, dword ptr ss : [esp+0xFC]
        add esp, 8
        jmp public_6cea13c
        public_6cea129 : nop
        mov esi, dword ptr ss : [esp+0xF4]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x58]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        public_6cea13c : nop
        cmp dword ptr ss : [esp+0x6C], ebx
        jle public_6cea086
        fld dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cea086
        push esi
        call dword ptr ds : [public_6d64290]
        add esp, 4
        cmp eax, ebx
        je public_6cea237
        mov edx, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x78]
        push ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], ebx
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        mov byte ptr ss : [esp+0xE8], 1
        mov byte ptr ss : [esp+0xE9], bl
        call dword ptr ds : [edx+0x248]
        test al, al
        je public_6cea2c7
        fld dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0xFC]
        cmp dword ptr ds : [eax+0x10], 0x16
        fmul dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [ebp]
        push 1
        fst dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x84]
        jne public_6cea21d
        lea ecx, ss:[esp+0x7C]
        push ecx
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+0x28]
        push eax
        call public_6d08a40
        jmp public_6cea2c7
        public_6cea21d : nop
        lea eax, ss:[esp+0x7C]
        push eax
        push 2
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+0x28]
        push eax
        call public_6d08a40
        jmp public_6cea2c7
        public_6cea237 : nop
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xF4], ebx
        call dword ptr ds : [edx+0x244]
        test eax, eax
        je public_6cea2a3
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, ebx
        jne public_6cea277
        xor edx, edx
        jmp public_6cea28e
        public_6cea277 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        sub ecx, esi
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6cea28e : nop
        push edx
        mov edx, dword ptr ss : [ebp]
        push esi
        push 2
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+0x28]
        push eax
        call public_6d08a40
        public_6cea2a3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov dword ptr ss : [esp+0xF0], 0xFFFFFFFF
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_6cea2c7 : nop
        mov ebp, dword ptr ss : [ebp+0x10]
        cmp ebp, ebx
        mov ecx, dword ptr ss : [esp+0xFC]
        mov eax, dword ptr ds : [ecx+0x18]
        je public_6cea34a
        mov edx, dword ptr ss : [ebp+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6cea34a
        cmp eax, ebx
        jbe public_6cea34a
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[eax-1]
        cmp ecx, edx
        jae public_6cea34a
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], ebx
        je public_6cea34a
        cmp ebp, ebx
        je public_6cea324
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6cea326
        public_6cea324 : nop
        xor ebp, ebp
        public_6cea326 : nop
        imul eax, 0x418
        mov ecx, ebp
        lea esi, ds:[eax+edx-0x418]
        call dword ptr ds : [public_6d6425c]
        mov edx, dword ptr ss : [ebp+0xB0]
        mov ecx, esi
        push eax
        push edx
        call public_6d4b270
        public_6cea34a : nop
        mov esi, dword ptr ss : [esp+0xF4]
        public_6cea351 : nop
        mov eax, dword ptr ss : [esp+0xF8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push eax
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x108]
        call dword ptr ds : [public_6d641ec]
        pop edi
        pop ebx
        public_6cea370 : nop
        mov ecx, dword ptr ss : [esp+0xDC]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xE0
        ret 0xC
        public_6cea389 : nop
        mov dword ptr ss : [esp+0xF8], 2
        jmp public_6cea351
        UNREACHABLE_TRAP(0x6ce9f70)
    }
}

#undef public_6ce9fcf
#undef public_6ce9fe8
#undef public_6cea054
#undef public_6cea056
#undef public_6cea086
#undef public_6cea096
#undef public_6cea098
#undef public_6cea129
#undef public_6cea13c
#undef public_6cea21d
#undef public_6cea237
#undef public_6cea277
#undef public_6cea28e
#undef public_6cea2a3
#undef public_6cea2c7
#undef public_6cea324
#undef public_6cea326
#undef public_6cea34a
#undef public_6cea351
#undef public_6cea370
#undef public_6cea389
