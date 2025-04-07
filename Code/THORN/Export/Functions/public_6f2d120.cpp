#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d120);

#define public_6f2d181 _public_6f2d181
#define public_6f2d214 _public_6f2d214
#define public_6f2d240 _public_6f2d240
#define public_6f2d255 _public_6f2d255
#define public_6f2d28d _public_6f2d28d
#define public_6f2d291 _public_6f2d291
#define public_6f2d2b7 _public_6f2d2b7

PROC_DECLARE(0x6f2d120, internal_6f2d120, public_6f2d120);
extern "C" NAKED register_t __cdecl internal_6f2d120()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x224
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov edi, eax
        or eax, 0xFFFFFFFF
        test edi, edi
        mov dword ptr ss : [esp+0x28], edi
        je public_6f2d2b7
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [edx+0x28]
        push eax
        lea eax, ss:[esp+0x34]
/*FIXUP push offset public_6f5f6fc @0x6f2d160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6fc
        push eax
        call dword ptr ds : [public_6f5a06c]
        mov dword ptr ss : [esp+0x20], eax
        xor eax, eax
        add esp, 0xC
        test edi, edi
        mov dword ptr ss : [esp+0x10], eax
        jbe public_6f2d255
        public_6f2d181 : nop
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        cmp eax, 0xFFFFFFFF
        je public_6f2d240
        mov edx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        test al, al
        je public_6f2d240
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        sub esp, 0x20
        fstp qword ptr ss : [esp+0x18]
        lea eax, ss:[esp+edx+0x50]
        fld dword ptr ss : [esp+0x3C]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x4C]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6f5f6e0 @0x6f2d1e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6e0
        push eax
        call dword ptr ds : [public_6f5a06c]
        mov edx, dword ptr ds : [esi+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0x28
        lea edi, ss:[esp+0x30]
        repne scasb
        mov eax, dword ptr ds : [esi+8]
        not ecx
        dec ecx
        add ecx, edx
        cmp ecx, eax
        jbe public_6f2d214
        mov ecx, esi
        call public_6f2ca80
        mov dword ptr ss : [esp+0x18], eax
        public_6f2d214 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x30]
        push ecx
        add edx, eax
/*FIXUP push offset public_6f5f6c8 @0x6f2d221*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        push edx
        call dword ptr ds : [public_6f5a06c]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 0xC
        add ecx, eax
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ss : [esp+0x14], 0
        public_6f2d240 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6f2d181
        public_6f2d255 : nop
        lea eax, ss:[esp+0x30]
/*FIXUP push offset public_6f5f6dc @0x6f2d259*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6dc
        push eax
        call dword ptr ds : [public_6f5a06c]
        mov edx, dword ptr ds : [esi+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 8
        lea edi, ss:[esp+0x30]
        repne scasb
        mov eax, dword ptr ds : [esi+8]
        not ecx
        dec ecx
        add ecx, edx
        cmp ecx, eax
        jbe public_6f2d28d
        mov ecx, esi
        call public_6f2ca80
        mov edi, eax
        jmp public_6f2d291
        public_6f2d28d : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_6f2d291 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x30]
        push ecx
        add edx, eax
/*FIXUP push offset public_6f5f6c8 @0x6f2d29e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        push edx
        call dword ptr ds : [public_6f5a06c]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 0xC
        add ecx, eax
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, edi
        public_6f2d2b7 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f2d120)
    }
}

#undef public_6f2d181
#undef public_6f2d214
#undef public_6f2d240
#undef public_6f2d255
#undef public_6f2d28d
#undef public_6f2d291
#undef public_6f2d2b7
