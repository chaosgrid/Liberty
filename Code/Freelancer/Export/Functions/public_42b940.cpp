#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42b940);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_42b989 _public_42b989
#define public_42b9af _public_42b9af
#define public_42b9ea _public_42b9ea
#define public_42ba00 _public_42ba00
#define public_42ba47 _public_42ba47
#define public_42ba71 _public_42ba71
#define public_42ba9b _public_42ba9b
#define public_42bab7 _public_42bab7
#define public_42bacc _public_42bacc
#define public_42bb00 _public_42bb00
#define public_42bb1e _public_42bb1e
#define public_42bb50 _public_42bb50
#define public_42bb82 _public_42bb82
#define public_42bbb4 _public_42bbb4
#define public_42bbe1 _public_42bbe1
#define public_42bbf2 _public_42bbf2
#define public_42bc04 _public_42bc04
#define public_42bc28 _public_42bc28
#define public_42bc31 _public_42bc31

PROC_DECLARE(0x42b940, internal_42b940, public_42b940);
extern "C" NAKED register_t __cdecl internal_42b940()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c6cf4]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
/*FIXUP push offset public_5c99cc @0x42b950*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99cc
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_42b989
        call dword ptr ds : [public_5c6698]
        lea ecx, ss:[esp+0x14]
        mov esi, eax
        call dword ptr ds : [public_5c69a0]
        push 1
        push esi
        call dword ptr ds : [public_5c6028]
        add esp, 8
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42b989 : nop
        push offset public_5c8ab4 @0x42b989*/
  FIXUP public_42b989 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ab4
        call ebx
        test al, al
        mov ecx, esi
        je public_42b9af
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ds : [edi+0x18], al
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42b9af : nop
        push offset public_5c8b24 @0x42b9af*/
  FIXUP public_42b9af : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b24
        call ebx
        test al, al
        mov ecx, esi
        je public_42ba00
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x10]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cf8]
        test al, al
        je public_42b9ea
        fld dword ptr ds : [public_610984]
        mov al, 1
        fmul dword ptr ds : [edi+0x10]
        fstp dword ptr ds : [edi+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_42b9ea : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x14]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42ba00 : nop
        push offset public_5ca734 @0x42ba00*/
  FIXUP public_42ba00 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca734
        call ebx
        test al, al
        mov ecx, esi
        je public_42ba9b
        call dword ptr ds : [public_5c6698]
        mov ebx, dword ptr ds : [public_5c6d24]
        mov esi, eax
        push esi
/*FIXUP push offset public_5ca72c @0x42ba20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca72c
        call ebx
        add esp, 8
        test eax, eax
        jne public_42ba47
        mov eax, dword ptr ds : [edi+0x18]
        and eax, 0xFF1FFFFF
        or eax, 0x100000
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_42ba47 : nop
        push esi
/*FIXUP push offset public_5ca720 @0x42ba48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca720
        call ebx
        add esp, 8
        test eax, eax
        jne public_42ba71
        mov ecx, dword ptr ds : [edi+0x18]
        and ecx, 0xFF2FFFFF
        or ecx, 0x200000
        mov dword ptr ds : [edi+0x18], ecx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_42ba71 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x2FD
/*FIXUP push offset public_5ca3dc @0x42ba7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
        mov eax, 0x100002
/*FIXUP push offset public_5ca6e8 @0x42ba87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca6e8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42ba9b : nop
        push offset public_5c8b1c @0x42ba9b*/
  FIXUP public_42ba9b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b1c
        call ebx
        test al, al
        mov ecx, esi
        je public_42bb1e
        call dword ptr ds : [public_5c6698]
        mov ebp, eax
        mov esi, offset public_610988
        xor ebx, ebx
        public_42bab7 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_42bacc
        push eax
        push ebp
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_42bb00
        public_42bacc : nop
        add ebx, 8
        add esi, 8
        cmp ebx, 0x28
        jb public_42bab7
        push ebp
        push 0x30A
/*FIXUP push offset public_5ca3dc @0x42badd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
        mov eax, 0x100002
/*FIXUP push offset public_5ca6b8 @0x42bae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca6b8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_42bb00 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+0x18]
        shl eax, 0x10
        xor eax, ecx
        and eax, 0xF0000
        xor eax, ecx
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42bb1e : nop
        push offset public_5ca6ac @0x42bb1e*/
  FIXUP public_42bb1e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca6ac
        call ebx
        test al, al
        mov ecx, esi
        je public_42bb50
        mov ebx, dword ptr ds : [edi+0x18]
        push 0
        call dword ptr ds : [public_5c6034]
        and ebx, 0xFBFFFFFF
        and eax, 1
        shl eax, 0x1A
        xor eax, ebx
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42bb50 : nop
        push offset public_5ca6a4 @0x42bb50*/
  FIXUP public_42bb50 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca6a4
        call ebx
        test al, al
        mov ecx, esi
        je public_42bb82
        push 0
        call dword ptr ds : [public_5c6034]
        mov ecx, dword ptr ds : [edi+0x18]
        and ecx, 0xF7FFFFFF
        and eax, 1
        shl eax, 0x1B
        xor eax, ecx
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42bb82 : nop
        push offset public_5ca694 @0x42bb82*/
  FIXUP public_42bb82 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca694
        call ebx
        test al, al
        mov ecx, esi
        je public_42bbb4
        mov ebx, dword ptr ds : [edi+0x18]
        push 0
        call dword ptr ds : [public_5c6034]
        and ebx, 0xFEFFFFFF
        and eax, 1
        shl eax, 0x18
        xor eax, ebx
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42bbb4 : nop
        push offset public_5ca688 @0x42bbb4*/
  FIXUP public_42bbb4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca688
        call ebx
        test al, al
        je public_42bbe1
        or dword ptr ds : [edi+0x18], 0x3000000
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ds : [edi+0x19], al
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
/*FIXUP public_42bbe1 : nop
        push offset public_5ca680 @0x42bbe1*/
  FIXUP public_42bbe1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca680
        mov ecx, esi
        call ebx
        test al, al
        je public_42bbf2
        xor ebx, ebx
        jmp public_42bc04
/*FIXUP public_42bbf2 : nop
        push offset public_5ca678 @0x42bbf2*/
  FIXUP public_42bbf2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca678
        mov ecx, esi
        call ebx
        test al, al
        je public_42bc31
        mov ebx, 1
        public_42bc04 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        cmp ebx, 2
        jge public_42bc28
        mov ecx, 2
        lea edi, ds:[edi+ebx*4+0x1C]
        sub ecx, ebx
        rep stosd
        public_42bc28 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_42bc31 : nop
        mov ecx, esi
        mov edi, 0x100002
        call dword ptr ds : [public_5c60b8]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x329
/*FIXUP push offset public_5ca3dc @0x42bc4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
/*FIXUP push offset public_5ca640 @0x42bc4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca640
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
/*FIXUP push offset public_5c865c @0x42bc5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x42b940)
    }
}

#undef public_42b989
#undef public_42b9af
#undef public_42b9ea
#undef public_42ba00
#undef public_42ba47
#undef public_42ba71
#undef public_42ba9b
#undef public_42bab7
#undef public_42bacc
#undef public_42bb00
#undef public_42bb1e
#undef public_42bb50
#undef public_42bb82
#undef public_42bbb4
#undef public_42bbe1
#undef public_42bbf2
#undef public_42bc04
#undef public_42bc28
#undef public_42bc31
