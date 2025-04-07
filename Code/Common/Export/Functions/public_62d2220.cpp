#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d1630);
CLANG_FORWARD_PROC_SYMBOL(public_62d2220);
CLANG_FORWARD_PROC_SYMBOL(public_62db3b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6260);
CLANG_FORWARD_PROC_SYMBOL(public_62e6490);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639502a);

#define public_62d22d5 _public_62d22d5
#define public_62d22d7 _public_62d22d7
#define public_62d22e3 _public_62d22e3
#define public_62d235d _public_62d235d
#define public_62d235f _public_62d235f
#define public_62d238a _public_62d238a
#define public_62d238c _public_62d238c
#define public_62d23b0 _public_62d23b0
#define public_62d2486 _public_62d2486
#define public_62d2490 _public_62d2490

PROC_DECLARE(0x62d2220, internal_62d2220, public_62d2220);
extern "C" NAKED register_t __cdecl internal_62d2220()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639502a @0x62d2222*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639502a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        or ebp, 0xFFFFFFFF
        mov dword ptr ds : [esi+0xCC], ebp
        push edi
        lea edi, ds:[esi+0xF0]
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], 0x3F800000
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov al, byte ptr ss : [esp+0x2C]
        push 0x24
        mov dword ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi+0x158], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x15C], eax
        mov dword ptr ds : [esi+0x160], ebx
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        mov byte ptr ds : [esi+0x168], 1
        mov byte ptr ds : [esi+0x169], bl
        mov dword ptr ds : [esi+0x16C], ebx
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ds : [esi], offset public_63a037c
        mov byte ptr ds : [esi+0x170], bl
        mov dword ptr ds : [esi+4], ebx
        je public_62d22d5
        add eax, 8
        jmp public_62d22d7
        public_62d22d5 : nop
        xor eax, eax
        public_62d22d7 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62d22e3
        push eax
        mov ecx, edi
        call public_6341610
        public_62d22e3 : nop
        mov al, byte ptr ds : [esi+0x1C8]
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0xD8], bl
        mov byte ptr ds : [esi+0xF8], 1
        xor ecx, ecx
        or al, 1
        mov byte ptr ds : [esi+0x1C8], al
        mov dword ptr ds : [esi+0xFC], ecx
        mov dword ptr ds : [esi+0x100], ecx
        mov dword ptr ds : [esi+0x104], ecx
        mov dword ptr ds : [esi+0x108], ecx
        mov dword ptr ds : [esi+0x10C], ecx
        push 0x580
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov dword ptr ds : [esi+0x11C], ebp
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 3
        je public_62d235d
        push esi
        mov ecx, eax
        call public_62db3b0
        jmp public_62d235f
        public_62d235d : nop
        xor eax, eax
        public_62d235f : nop
        push 0x195C
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ds : [esi+0xC], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 4
        je public_62d238a
        mov ecx, eax
        call public_62e6260
        jmp public_62d238c
        public_62d238a : nop
        xor eax, eax
        public_62d238c : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push esi
        push edx
        mov ecx, eax
        mov byte ptr ss : [esp+0x2C], 2
        mov dword ptr ds : [esi+8], eax
        call public_62e6490
        xor edi, edi
        lea ebp, ds:[esi+0x174]
        lea esp, ss:[esp]
        public_62d23b0 : nop
        push edi
        call public_62d1630
        add esp, 4
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push esi
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        inc edi
        add ebp, 4
        cmp edi, 0x15
        jb public_62d23b0
        mov edi, dword ptr ds : [public_6399308]
        mov dword ptr ds : [esi+0xC0], ebx
        mov edx, dword ptr ds : [public_63a0340]
        mov dword ptr ss : [esp+0x14], edx
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0xD0]
        mov eax, dword ptr ds : [public_63a0344]
        mov dword ptr ss : [esp+0x10], eax
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov ebp, 0x3F800000
        mov ecx, ebp
        fmul dword ptr ds : [public_63997d0]
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE4], ebp
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0xD4]
        mov dword ptr ss : [esp+0x10], ecx
        call edi
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0xE0]
        fld dword ptr ds : [public_63a0348]
        fstp dword ptr ds : [esi+0xE4]
        je public_62d2486
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62d2486
        mov dword ptr ds : [esi+0x120], 0x13
        jmp public_62d2490
        public_62d2486 : nop
        mov dword ptr ds : [esi+0x120], 6
        public_62d2490 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0xF9], 1
        mov dword ptr ds : [esi+0x124], ebx
        mov dword ptr ds : [esi+0x128], ebx
        mov dword ptr ds : [esi+0x12C], ebx
        mov byte ptr ds : [esi+0x130], bl
        mov dword ptr ds : [esi+0x134], ebx
        mov dword ptr ds : [esi+0x138], ebp
        mov dword ptr ds : [esi+0x13C], ebx
        mov dword ptr ds : [esi+0x140], ebx
        mov dword ptr ds : [esi+0x144], ebp
        mov dword ptr ds : [esi+0x148], ebx
        pop edi
        mov byte ptr ds : [esi+0x150], bl
        mov dword ptr ds : [esi+0x14C], ebx
        mov dword ptr ds : [esi+0x154], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov byte ptr ds : [esi+0xBC], bl
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0x164], 0x3F400000
        mov dword ptr ds : [esi+0x114], 3
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62d2220)
    }
}

#undef public_62d22d5
#undef public_62d22d7
#undef public_62d22e3
#undef public_62d235d
#undef public_62d235f
#undef public_62d238a
#undef public_62d238c
#undef public_62d23b0
#undef public_62d2486
#undef public_62d2490
