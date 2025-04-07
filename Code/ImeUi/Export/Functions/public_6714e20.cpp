#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6714e20);
CLANG_FORWARD_PROC_SYMBOL(public_6715aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6716982);
CLANG_FORWARD_PROC_SYMBOL(public_6716988);
CLANG_FORWARD_PROC_SYMBOL(public_6716af0);

#define public_6714eac _public_6714eac
#define public_6714ec3 _public_6714ec3
#define public_6714f09 _public_6714f09
#define public_6714f45 _public_6714f45
#define public_6714f4f _public_6714f4f
#define public_6714f52 _public_6714f52
#define public_6714f6f _public_6714f6f
#define public_6714f94 _public_6714f94
#define public_6714fa6 _public_6714fa6
#define public_6714fcc _public_6714fcc
#define public_6714fdd _public_6714fdd
#define public_671502f _public_671502f
#define public_671503b _public_671503b
#define public_6715071 _public_6715071
#define public_6715090 _public_6715090
#define public_67150cb _public_67150cb
#define public_67150d7 _public_67150d7
#define public_6715112 _public_6715112
#define public_6715126 _public_6715126
#define public_671512c _public_671512c
#define public_671513b _public_671513b
#define public_6715179 _public_6715179
#define public_6715193 _public_6715193
#define public_67151ac _public_67151ac
#define public_67151d5 _public_67151d5
#define public_6715216 _public_6715216
#define public_671522e _public_671522e
#define public_6715246 _public_6715246
#define public_6715250 _public_6715250

PROC_DECLARE(0x6714e20, internal_6714e20, public_6714e20);
extern "C" NAKED register_t __cdecl internal_6714e20()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        push 0
        call public_6714bd0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        mov dword ptr ss : [ebp-0x10], ebx
        je public_6715250
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6716988
        mov esi, eax
        test esi, esi
        mov dword ptr ss : [ebp-0x1C], esi
        je public_6715250
        mov eax, dword ptr ds : [public_671b548]
        xor ecx, ecx
        xor edi, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-0xC], ecx
        mov byte ptr ss : [ebp-1], cl
        mov dword ptr ss : [ebp-0x24], ecx
        je public_6714ec3
        lea edx, ss:[ebp-0x28]
        push edx
        lea edx, ss:[ebp-0x20]
        push edx
        lea edx, ss:[ebp-8]
        push edx
        push ecx
        push ecx
        push esi
        call eax
        mov edi, eax
        test edi, edi
        je public_6714eac
        add eax, 3
        and al, 0xFC
        call public_6716af0
        lea ecx, ss:[ebp-0x28]
        mov eax, esp
        push ecx
        lea edx, ss:[ebp-0x20]
        lea ecx, ss:[ebp-8]
        push edx
        push ecx
        push eax
        push edi
        push esi
        mov dword ptr ss : [ebp-0xC], eax
        call dword ptr ds : [public_671b548]
        mov edi, eax
        public_6714eac : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov byte ptr ss : [ebp-1], 1
        test eax, eax
        sete dl
        mov byte ptr ds : [public_671cfad], dl
        jmp public_6714f6f
        public_6714ec3 : nop
        push esi
        call dword ptr ds : [public_671b5a0]
        mov esi, eax
        cmp ebx, 0x4040404
        mov dword ptr ss : [ebp-0x24], esi
        ja public_6715071
        je public_671503b
        cmp ebx, 0x4020804
        ja public_671502f
        je public_6714fdd
        cmp ebx, 0x4010804
        je public_6714f09
        cmp ebx, 0x4020404
        je public_671503b
        jmp public_6714f52
        public_6714f09 : nop
        push 1
        call public_6714bd0
        add esp, 4
        cmp eax, 2
        mov eax, dword ptr ds : [esi+0x124]
        sbb ebx, ebx
        push eax
        add ebx, 8
        call dword ptr ds : [public_671ced4]
        mov eax, dword ptr ds : [eax+ebx*4]
        test eax, eax
        je public_6714f4f
        mov edi, dword ptr ds : [eax+0x9C]
        mov ecx, dword ptr ds : [eax+0xA0]
        cmp ecx, edi
        mov dword ptr ss : [ebp-8], ecx
        jb public_6714f45
        mov dword ptr ss : [ebp-8], edi
        public_6714f45 : nop
        add eax, 0x38
        mov byte ptr ss : [ebp-1], 1
        mov dword ptr ss : [ebp-0xC], eax
        public_6714f4f : nop
        mov ebx, dword ptr ss : [ebp-0x10]
        public_6714f52 : nop
        mov esi, dword ptr ss : [ebp-0x1C]
        xor eax, eax
        mov word ptr ds : [public_671bad0], ax
        mov word ptr ds : [public_671bcd0], ax
        mov word ptr ds : [public_671bed0], ax
        mov word ptr ds : [public_671c0d0], ax
        public_6714f6f : nop
        mov al, byte ptr ss : [ebp-1]
        or edx, 0xFFFFFFFF
        test al, al
        mov dword ptr ds : [public_671ceec], edi
        mov dword ptr ds : [public_671ced8], edx
        je public_6715112
        xor eax, eax
        test edi, edi
        jbe public_6714fcc
        mov ecx, offset public_671bad2
        public_6714f94 : nop
        cmp dword ptr ss : [ebp-8], eax
        ja public_6714fa6
        cmp edx, 0xFFFFFFFF
        jne public_6714fa6
        mov edx, eax
        mov dword ptr ds : [public_671ced8], edx
        public_6714fa6 : nop
        mov esi, dword ptr ss : [ebp-0xC]
        inc eax
        add ecx, 0x200
        cmp eax, edi
        mov si, word ptr ds : [esi+eax*2-2]
        mov word ptr ds : [ecx-0x200], 0
        mov word ptr ds : [ecx-0x202], si
        jb public_6714f94
        mov esi, dword ptr ss : [ebp-0x1C]
        public_6714fcc : nop
        shl eax, 9
        mov word ptr ds : [eax+public_671bad0], 0
        jmp public_67151ac
        public_6714fdd : nop
        mov ecx, dword ptr ds : [public_671cf08]
        xor ebx, ebx
        cmp ecx, 2
        mov ecx, dword ptr ds : [esi+0x124]
        sete bl
        push ecx
        inc ebx
        call dword ptr ds : [public_671ced4]
        mov eax, dword ptr ds : [eax+0x20]
        test eax, eax
        je public_6714f4f
        lea edx, ds:[ebx+4]
        add eax, 0x40
        shl edx, 4
        shl ebx, 4
        mov edi, dword ptr ds : [edx+eax-0x40]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ds : [ebx+eax+4]
        mov eax, dword ptr ds : [public_671cf08]
        cmp eax, 2
        mov dword ptr ss : [ebp-8], ecx
        sete byte ptr ss : [ebp-1]
        jmp public_6714f4f
        public_671502f : nop
        cmp ebx, 0x4030404
        jne public_6714f52
        public_671503b : nop
        mov edx, dword ptr ds : [esi+0x124]
        push edx
        call dword ptr ds : [public_671ced4]
        mov eax, dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6714f52
        mov edi, dword ptr ds : [eax+0x9C]
        mov ecx, dword ptr ds : [eax+0xA0]
        add eax, 0x38
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov byte ptr ss : [ebp-1], 1
        jmp public_6714f52
        public_6715071 : nop
        cmp ebx, 0x5020404
        ja public_67150cb
        je public_67150d7
        cmp ebx, 0x5000404
        je public_6715090
        cmp ebx, 0x5010404
        je public_67150d7
        jmp public_6714f52
        public_6715090 : nop
        mov edx, dword ptr ds : [esi+0x124]
        push edx
        call dword ptr ds : [public_671ced4]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6714f52
        mov eax, dword ptr ds : [eax+0x20]
        test eax, eax
        je public_6714f52
        mov edi, dword ptr ds : [eax+0x50]
        mov ecx, dword ptr ds : [eax+0x54]
        add eax, 0x40
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov byte ptr ss : [ebp-1], 0
        jmp public_6714f52
        public_67150cb : nop
        cmp ebx, 0x5030804
        jne public_6714f52
        public_67150d7 : nop
        mov edx, dword ptr ds : [esi+0x124]
        push edx
        call dword ptr ds : [public_671ced4]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6714f52
        mov eax, dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6714f52
        mov edi, dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [eax+0x64]
        add eax, 0x40
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov byte ptr ss : [ebp-1], 1
        jmp public_6714f52
        public_6715112 : nop
        xor ebx, ebx
        xor eax, eax
        test edi, edi
        mov dword ptr ss : [ebp-0x14], eax
        jbe public_6715193
        mov dword ptr ss : [ebp-0x18], offset public_671bad0
        jmp public_671512c
        public_6715126 : nop
        mov edx, dword ptr ds : [public_671ced8]
        public_671512c : nop
        cmp dword ptr ss : [ebp-8], ebx
        ja public_671513b
        cmp edx, 0xFFFFFFFF
        jne public_671513b
        mov dword ptr ds : [public_671ced8], eax
        public_671513b : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0x18]
        xor ecx, ecx
        push 1
        mov cl, byte ptr ds : [ebx+edx]
        lea esi, ds:[ebx+edx]
        push eax
        xor edx, edx
        mov al, byte ptr ds : [ecx+public_671b9c8]
        test al, al
        mov eax, dword ptr ds : [public_671cfc8]
        setne dl
        inc edx
        push edx
        push esi
        push 0
        push eax
        call dword ptr ds : [public_6719368]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        mov al, byte ptr ds : [ecx+public_671b9c8]
        test al, al
        je public_6715179
        inc ebx
        public_6715179 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x18]
        inc ebx
        inc edx
        add ecx, 0x200
        cmp ebx, edi
        mov dword ptr ss : [ebp-0x14], edx
        mov dword ptr ss : [ebp-0x18], ecx
        mov eax, edx
        jb public_6715126
        public_6715193 : nop
        mov ebx, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ss : [ebp-0x1C]
        mov edx, eax
        mov dword ptr ds : [public_671ceec], eax
        shl edx, 9
        mov word ptr ds : [edx+public_671bad0], 0
        public_67151ac : nop
        mov eax, dword ptr ds : [public_671b548]
        test eax, eax
        jne public_67151d5
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+0x124]
        push ecx
        call dword ptr ds : [public_671b550]
        push esi
        call dword ptr ds : [public_671b558]
        push ebx
        call public_6715aa0
        add esp, 4
        public_67151d5 : nop
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        call public_6716982
        mov al, byte ptr ds : [public_671cfad]
        mov byte ptr ds : [public_671cfac], 1
        test al, al
        je public_6715246
        mov eax, dword ptr ds : [public_671ceec]
        xor esi, esi
        test eax, eax
        mov dword ptr ds : [public_671b554], 0xFFFFFFFF
        mov word ptr ds : [public_671b560], si
        jbe public_6715246
        mov ebx, dword ptr ds : [public_6719370]
        mov edi, offset public_671bad0
        public_6715216 : nop
        cmp dword ptr ds : [public_671ced8], esi
        jne public_671522e
/*FIXUP push offset public_671b560 @0x671521e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b560
        call dword ptr ds : [public_671937c]
        mov dword ptr ds : [public_671b554], eax
        public_671522e : nop
        push edi
/*FIXUP push offset public_671b560 @0x671522f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b560
        call ebx
        mov eax, dword ptr ds : [public_671ceec]
        inc esi
        add edi, 0x200
        cmp esi, eax
        jb public_6715216
        public_6715246 : nop
        mov dword ptr ds : [public_671cee8], 0xA
        public_6715250 : nop
        lea esp, ss:[ebp-0x34]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6714e20)
    }
}

#undef public_6714eac
#undef public_6714ec3
#undef public_6714f09
#undef public_6714f45
#undef public_6714f4f
#undef public_6714f52
#undef public_6714f6f
#undef public_6714f94
#undef public_6714fa6
#undef public_6714fcc
#undef public_6714fdd
#undef public_671502f
#undef public_671503b
#undef public_6715071
#undef public_6715090
#undef public_67150cb
#undef public_67150d7
#undef public_6715112
#undef public_6715126
#undef public_671512c
#undef public_671513b
#undef public_6715179
#undef public_6715193
#undef public_67151ac
#undef public_67151d5
#undef public_6715216
#undef public_671522e
#undef public_6715246
#undef public_6715250
