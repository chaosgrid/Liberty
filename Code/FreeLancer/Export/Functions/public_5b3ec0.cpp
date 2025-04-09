#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_5b3f4f _public_5b3f4f
#define public_5b3f87 _public_5b3f87
#define public_5b3fc6 _public_5b3fc6
#define public_5b3ff6 _public_5b3ff6
#define public_5b3ff8 _public_5b3ff8
#define public_5b3ffe _public_5b3ffe
#define public_5b4043 _public_5b4043

PROC_DECLARE(0x5b3ec0, internal_5b3ec0, public_5b3ec0);
extern "C" NAKED register_t __cdecl internal_5b3ec0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x21C
        push ebx
        push esi
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        call dword ptr ds : [public_5c6c00]
        mov ecx, dword ptr ss : [ebp+8]
        xor ebx, ebx
        push ebx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x130]
        push ebx
        push eax
        call dword ptr ds : [public_5c70b8]
        lea ecx, ss:[esp+0x138]
/*FIXUP push offset public_5c9adc @0x5b3efc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9adc
        push ecx
        call dword ptr ds : [public_5c7150]
        mov cl, byte ptr ds : [public_67ed0c]
        mov esi, eax
        mov al, 1
        add esp, 0x20
        test al, cl
        jne public_5b3f4f
        mov dl, byte ptr ss : [esp+0xF]
        or cl, al
        push ebx
        mov byte ptr ds : [public_67ed0c], cl
        push ebx
        mov ecx, offset public_67ed00
        mov byte ptr ds : [public_67ed00], dl
        call public_42a7e0
/*FIXUP push offset _public_5b3640 @0x5b3f37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], ebx
        call public_5b7e6c
        add esp, 4
        public_5b3f4f : nop
        cmp esi, ebx
        je public_5b4043
        fld dword ptr ds : [public_5e6dfc]
        mov edi, dword ptr ds : [public_5c70d8]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_5e6f60 @0x5b3f69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6f60
        push esi
        call edi
        mov al, byte ptr ds : [public_67a439]
        add esp, 0x10
        cmp al, bl
        mov eax, offset public_5e6f58
        jne public_5b3f87
        mov eax, offset public_5e6f50
        public_5b3f87 : nop
        push eax
/*FIXUP push offset public_5e6f34 @0x5b3f88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6f34
        push esi
        call edi
        mov eax, dword ptr ds : [public_67ed08]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ebx
        fild qword ptr ss : [esp+0x1C]
        add esp, 4
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_5e6f1c @0x5b3fa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6f1c
        push esi
        call edi
/*FIXUP push offset public_5e6f0c @0x5b3faf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6f0c
        push esi
        call edi
        mov edx, dword ptr ds : [public_67ed04]
        mov ebx, dword ptr ds : [edx]
        add esp, 0x18
        cmp ebx, edx
        je public_5b3ffe
        public_5b3fc6 : nop
        mov ecx, dword ptr ds : [ebx+8]
        fld dword ptr ds : [ecx+0x14]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_5b3ff6
        mov ecx, dword ptr ds : [ecx+4]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
/*FIXUP push offset public_5e6f00 @0x5b3fe3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6f00
        push esi
        call edi
        mov edx, dword ptr ds : [public_67ed04]
        add esp, 0x14
        jmp public_5b3ff8
        public_5b3ff6 : nop
        fstp st(0)
        public_5b3ff8 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, edx
        jne public_5b3fc6
/*FIXUP public_5b3ffe : nop
        push offset public_5e6ef4 @0x5b3ffe*/
  FIXUP public_5b3ffe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6ef4
        push esi
        call edi
        mov edx, dword ptr ds : [public_679bcc]
        mov eax, dword ptr ds : [public_679bc8]
        push edx
        push eax
/*FIXUP push offset public_5e6ee4 @0x5b4013*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6ee4
        push esi
        call edi
        mov ecx, dword ptr ds : [public_679bd0]
        push ecx
/*FIXUP push offset public_5e6ed4 @0x5b4022*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6ed4
        push esi
        call edi
        mov edx, dword ptr ds : [public_679bd4]
        push edx
/*FIXUP push offset public_5e6ec4 @0x5b4031*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6ec4
        push esi
        call edi
        push esi
        call dword ptr ds : [public_5c714c]
        add esp, 0x34
        public_5b4043 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5b3ec0)
    }
}

#undef public_5b3f4f
#undef public_5b3f87
#undef public_5b3fc6
#undef public_5b3ff6
#undef public_5b3ff8
#undef public_5b3ffe
#undef public_5b4043
