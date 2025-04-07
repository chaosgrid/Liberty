#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5df0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46370);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6d53fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d571f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57350);
CLANG_FORWARD_PROC_SYMBOL(public_6d580d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59940);
CLANG_FORWARD_PROC_SYMBOL(public_6d59a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d639a8);

#define public_6d5411d _public_6d5411d
#define public_6d5411f _public_6d5411f
#define public_6d5415f _public_6d5415f
#define public_6d5419d _public_6d5419d
#define public_6d541f9 _public_6d541f9
#define public_6d54285 _public_6d54285
#define public_6d542ef _public_6d542ef
#define public_6d5430a _public_6d5430a
#define public_6d54313 _public_6d54313
#define public_6d54317 _public_6d54317

PROC_DECLARE(0x6d53fd0, internal_6d53fd0, public_6d53fd0);
extern "C" NAKED register_t __cdecl internal_6d53fd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d639a8 @0x6d53fd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d639a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24C
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], al
        call dword ptr ds : [public_6d64b74]
        mov ebx, dword ptr ss : [esp+0x26C]
        lea ecx, ss:[esp+0x158]
        push ebx
        push ecx
        mov dword ptr ss : [esp+0x26C], 0
        mov byte ptr ss : [esp+0x5C], 0
        call public_6d46370
        or ecx, 0xFFFFFFFF
        add esp, 8
        xor eax, eax
        lea edi, ss:[esp+0x158]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea edx, ss:[esp+0x15C]
        push edx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64b08]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d6aecc
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6d6aecc @0x6d54061*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aecc
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64b3c]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d6aea4
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6d6aea4 @0x6d54080*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d64b3c]
/*FIXUP push offset public_6d6aea4 @0x6d5408f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x60]
        push 0
        push edx
        call dword ptr ds : [public_6d64bc0]
        lea eax, ss:[esp+0x16C]
        push eax
        call dword ptr ds : [public_6d64ca8]
        mov cl, byte ptr ss : [esp+0x2B]
        add esp, 0x18
        mov byte ptr ss : [esp+0x14], cl
        push 0
        lea ecx, ss:[esp+0x18]
        call public_6ce5d80
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x54]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6d59a60
        mov byte ptr ss : [esp+0x264], 1
        lea eax, ss:[esp+0x14]
        push eax
        lea edx, ss:[esp+0x38]
        lea ecx, ds:[esi+0x30]
        push edx
        mov dword ptr ss : [esp+0x44], ecx
        call public_6d571f0
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        cmp ecx, eax
        je public_6d5411d
        mov ecx, dword ptr ds : [ecx+0x1C]
        jmp public_6d5411f
        public_6d5411d : nop
        xor ecx, ecx
        public_6d5411f : nop
        test ecx, ecx
        push 1
        lea ecx, ss:[esp+0x18]
        setne byte ptr ss : [esp+0x17]
        mov byte ptr ss : [esp+0x268], 0
        call public_6ce5d80
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6d5415f
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x268], 0xFFFFFFFF
        call dword ptr ds : [public_6d64b74]
        xor al, al
        jmp public_6d54317
        public_6d5415f : nop
        mov eax, dword ptr ss : [esp+0x270]
        mov ecx, dword ptr ds : [esi]
        dec eax
        imul eax, 0x418
        add eax, ecx
        mov ebp, eax
        mov ecx, dword ptr ss : [ebp+0x400]
        cmp dword ptr ds : [ecx+0x2C], 5
        jb public_6d5419d
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x268], 0xFFFFFFFF
        call dword ptr ds : [public_6d64b74]
        mov al, 1
        jmp public_6d54317
        public_6d5419d : nop
        push ebx
        mov ecx, ebp
        call public_6d4b790
        test al, al
        mov byte ptr ss : [esp+0x13], al
        je public_6d542ef
        mov dl, byte ptr ss : [esp+0x13]
        push 0
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], dl
        call public_6ce3b20
        push ebx
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6ce4520
        test al, al
        je public_6d541f9
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push ebx
        push eax
        call public_6ce1960
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x18]
        call public_6ce4500
        public_6d541f9 : nop
        mov ecx, dword ptr ss : [ebp+0x400]
        mov eax, dword ptr ds : [ecx+0x28]
        add ecx, 0x24
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov byte ptr ss : [esp+0x270], 2
        call public_6d57350
        push 1
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x268], 0
        call public_6ce3b20
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x14], cl
        push 0
        lea ecx, ss:[esp+0x18]
        call public_6ce5d80
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x54]
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_6ce5df0
        test al, al
        je public_6d54285
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x54]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebx
        lea ecx, ss:[esp+0x18]
        call public_6ce5dd0
        public_6d54285 : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x268], 3
        call public_6d59940
        mov dword ptr ss : [esp+0x50], 0
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        lea edx, ss:[esp+0x38]
        push edx
        mov byte ptr ss : [esp+0x26C], 4
        call public_6d580d0
        mov esi, dword ptr ds : [eax]
        push 1
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x268], 3
        call public_6ce5d80
        mov eax, dword ptr ss : [ebp+0x400]
        push 1
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ss : [esp+0x268], 0
        call public_6ce5d80
        public_6d542ef : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_6d54313
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d5430a
        cmp cl, 0xFF
        je public_6d5430a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d54313
        public_6d5430a : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d54313 : nop
        mov al, byte ptr ss : [esp+0x13]
        public_6d54317 : nop
        mov ecx, dword ptr ss : [esp+0x25C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x258
        ret 8
        UNREACHABLE_TRAP(0x6d53fd0)
    }
}

#undef public_6d5411d
#undef public_6d5411f
#undef public_6d5415f
#undef public_6d5419d
#undef public_6d541f9
#undef public_6d54285
#undef public_6d542ef
#undef public_6d5430a
#undef public_6d54313
#undef public_6d54317
