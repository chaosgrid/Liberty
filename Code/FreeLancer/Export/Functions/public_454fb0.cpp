#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_44f720);
CLANG_FORWARD_PROC_SYMBOL(public_454820);
CLANG_FORWARD_PROC_SYMBOL(public_454fb0);
CLANG_FORWARD_PROC_SYMBOL(public_455850);
CLANG_FORWARD_PROC_SYMBOL(public_455b10);
CLANG_FORWARD_PROC_SYMBOL(public_455fc0);
CLANG_FORWARD_PROC_SYMBOL(public_459ad0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2aa0);
CLANG_FORWARD_PROC_SYMBOL(public_4a6630);
CLANG_FORWARD_PROC_SYMBOL(public_558bf0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_45501b _public_45501b
#define public_455090 _public_455090
#define public_45509c _public_45509c
#define public_4550f2 _public_4550f2
#define public_455130 _public_455130
#define public_455146 _public_455146
#define public_455157 _public_455157
#define public_455159 _public_455159
#define public_455161 _public_455161
#define public_455171 _public_455171
#define public_45517b _public_45517b
#define public_4551b4 _public_4551b4
#define public_4551c9 _public_4551c9
#define public_45521e _public_45521e
#define public_455225 _public_455225
#define public_45522d _public_45522d
#define public_455278 _public_455278
#define public_455286 _public_455286

PROC_DECLARE(0x454fb0, internal_454fb0, public_454fb0);
extern "C" NAKED register_t __cdecl internal_454fb0()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call dword ptr ds : [public_5c60f8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0xB0]
        mov edi, dword ptr ss : [ebp+0xB4]
        mov dword ptr ss : [ebp+0xC0], ecx
        push ebp
        shl ecx, 6
        push eax
        add ecx, edi
        call public_454820
        mov edx, dword ptr ss : [ebp+0xC0]
        mov eax, dword ptr ss : [ebp+0xB4]
        shl edx, 6
        mov edx, dword ptr ds : [edx+eax]
        lea ecx, ss:[ebp+0x114]
        mov dword ptr ds : [edx+0x38], ecx
        mov al, byte ptr ss : [ebp+7]
        mov byte ptr ss : [esp+0x14], al
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        je public_45501b
        mov ecx, ebp
        call public_455fc0
        cmp eax, dword ptr ss : [ebp+0xBC]
        jl public_45501b
        mov byte ptr ss : [esp+0x14], 1
        public_45501b : nop
        mov ecx, dword ptr ss : [ebp+0xC0]
        mov edx, dword ptr ss : [ebp+0xB4]
        shl ecx, 6
        lea eax, ds:[ecx+edx]
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0xD]
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x14]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x120]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        push edx
        xor edx, edx
        mov dl, byte ptr ss : [ebp+8]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+5]
        push edx
        xor edx, edx
        mov dl, byte ptr ss : [ebp+4]
        push ecx
        mov ecx, dword ptr ss : [ebp]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        push ecx
        mov ecx, dword ptr ds : [eax]
        call public_44f720
        mov al, byte ptr ss : [ebp+0x16]
        test al, al
        je public_455090
        mov al, byte ptr ds : [public_66d304]
        test al, al
        je public_455090
        mov al, byte ptr ss : [ebp+0x2D]
        test al, al
        je public_455090
        mov al, byte ptr ss : [ebp+0x15]
        test al, al
        je public_455090
        mov byte ptr ss : [ebp+0x2E], 1
        public_455090 : nop
        mov al, byte ptr ss : [ebp+0xF]
        test al, al
        je public_45509c
        call public_558bf0
        public_45509c : nop
        mov al, byte ptr ss : [ebp+0x30]
        test al, al
        jne public_4550f2
        mov edx, dword ptr ss : [ebp+0xC0]
        mov eax, dword ptr ss : [ebp+0xB4]
        shl edx, 6
        mov ecx, dword ptr ds : [eax+edx]
        add eax, edx
        mov dl, byte ptr ds : [ecx+0x61]
        test dl, dl
        je public_4550f2
        mov byte ptr ss : [ebp+0x30], 1
        mov esi, dword ptr ds : [eax]
        add esi, 0x64
        lea edi, ss:[ebp+0x34]
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [eax]
        fld dword ptr ds : [edx+0x94]
        fstp dword ptr ss : [ebp+0x64]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x98]
        mov dword ptr ss : [ebp+0x68], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x9C]
        mov dword ptr ss : [ebp+0x6C], ecx
        public_4550f2 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        mov edx, dword ptr ss : [ebp+0xB4]
        mov ecx, eax
        shl ecx, 6
        cmp dword ptr ds : [ecx+edx+0x3C], 1
        jne public_4551c9
        mov esi, dword ptr ss : [ebp+0xBC]
        push ebx
        xor bl, bl
        lea ecx, ds:[eax+1]
        cmp ecx, esi
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x18], bl
        jge public_455171
        mov eax, ecx
        shl eax, 6
        lea edx, ds:[eax+edx+0x3C]
        nop 
        public_455130 : nop
        mov eax, dword ptr ds : [edx]
        cmp eax, 2
        je public_455157
        cmp eax, 3
        je public_455146
        cmp eax, 4
        je public_455157
        cmp eax, 6
        jne public_455161
        public_455146 : nop
        cmp eax, 4
        je public_455157
        cmp eax, 3
        jne public_455159
        mov byte ptr ss : [esp+0x18], 1
        jmp public_455159
        public_455157 : nop
        mov bl, 1
        public_455159 : nop
        inc ecx
        add edx, 0x40
        cmp ecx, esi
        jl public_455130
        public_455161 : nop
        test bl, bl
        mov byte ptr ss : [esp+0x10], bl
        jne public_45517b
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        jne public_45517b
        public_455171 : nop
        mov byte ptr ss : [esp+0x10], 1
        mov byte ptr ss : [esp+0x18], 1
        public_45517b : nop
        mov al, byte ptr ss : [ebp+0x104]
        test al, al
        pop ebx
        jne public_4551c9
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        mov ecx, ebp
        call public_455850
        mov al, byte ptr ss : [ebp+6]
        test al, al
        je public_4551b4
        push 0x40400000
        push 0
        call public_41a0f0
        push 1
        call public_41dda0
        add esp, 0xC
        public_4551b4 : nop
        mov byte ptr ss : [ebp+0x104], 1
        mov byte ptr ss : [ebp+0x105], 0
        mov byte ptr ss : [ebp+0x106], 0
        public_4551c9 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        mov ecx, dword ptr ss : [ebp+0xB4]
        shl eax, 6
        cmp dword ptr ds : [eax+ecx+0x3C], 4
        jne public_455286
        mov al, byte ptr ss : [ebp+0x10C]
        test al, al
        jne public_455286
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea esi, ss:[ebp+0xEC]
        push esi
        call public_459ad0
        add esp, 0xC
        test al, al
        je public_45522d
        test byte ptr ss : [esp+0x14], 0x20
        je public_45521e
        mov ecx, dword ptr ss : [esp+0xC]
        push 1
        push ecx
        jmp public_455225
        public_45521e : nop
        mov edx, dword ptr ss : [esp+0xC]
        push 0
        push edx
        public_455225 : nop
        call public_4a2aa0
        add esp, 8
        public_45522d : nop
        push 0
        push 0
/*FIXUP push offset public_5ce080 @0x455231*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce080
/*FIXUP push offset public_5ce064 @0x455236*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce064
        call public_59db20
        add esp, 0x10
        push ebp
/*FIXUP push offset _public_455b10 @0x455244*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_455b10
        push 1
        push esi
        push 4
        mov ecx, eax
        mov dword ptr ss : [ebp+0x110], eax
        call public_4a6630
        mov al, byte ptr ss : [ebp+6]
        test al, al
        je public_455278
        push 0x40400000
        push 0
        call public_41a0f0
        push 1
        call public_41dda0
        add esp, 0xC
        public_455278 : nop
        mov byte ptr ss : [ebp+0x10C], 1
        mov byte ptr ss : [ebp+0x10D], 0
        public_455286 : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x454fb0)
    }
}

#undef public_45501b
#undef public_455090
#undef public_45509c
#undef public_4550f2
#undef public_455130
#undef public_455146
#undef public_455157
#undef public_455159
#undef public_455161
#undef public_455171
#undef public_45517b
#undef public_4551b4
#undef public_4551c9
#undef public_45521e
#undef public_455225
#undef public_45522d
#undef public_455278
#undef public_455286
