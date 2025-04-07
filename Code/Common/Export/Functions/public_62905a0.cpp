#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62905a0);
CLANG_FORWARD_PROC_SYMBOL(public_6290740);
CLANG_FORWARD_PROC_SYMBOL(public_6319070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63935da);

#define public_62905f6 _public_62905f6
#define public_62905f8 _public_62905f8
#define public_629060e _public_629060e
#define public_6290610 _public_6290610
#define public_629065a _public_629065a
#define public_6290660 _public_6290660
#define public_6290680 _public_6290680
#define public_6290693 _public_6290693
#define public_629069d _public_629069d
#define public_6290728 _public_6290728

PROC_DECLARE(0x62905a0, internal_62905a0, public_62905a0);
extern "C" NAKED register_t __cdecl internal_62905a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63935da @0x62905a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63935da
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 0
        je public_6290728
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        add ebx, 4
        push esi
        push edi
        add ebp, 4
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx], offset public_639c288
        test ebp, ebp
        je public_62905f6
        lea eax, ss:[ebp+4]
        jmp public_62905f8
        public_62905f6 : nop
        xor eax, eax
        public_62905f8 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], offset public_639c2a0
        test ebp, ebp
        je public_629060e
        lea eax, ss:[ebp+0xC]
        jmp public_6290610
        public_629060e : nop
        xor eax, eax
        public_6290610 : nop
        mov dword ptr ds : [ebx+0xC], offset public_639c40c
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x10], edx
        mov dword ptr ds : [ebx+0xC], offset public_639c3fc
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x18], ecx
        mov dl, byte ptr ss : [ebp+0x1C]
        mov byte ptr ds : [ebx+0x1C], dl
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        mov byte ptr ss : [esp+0x20], 3
        je public_629065a
        mov ecx, dword ptr ss : [ebp+0x24]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_629065a : nop
        test eax, eax
        jge public_6290660
        xor eax, eax
        public_6290660 : nop
        imul eax, 0x34
        push eax
        call public_6391d9c
        mov dword ptr ds : [ebx+0x20], eax
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ss : [ebp+0x20]
        add esp, 4
        cmp edx, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        je public_629069d
        lea ecx, ds:[ecx]
        public_6290680 : nop
        test eax, eax
        je public_6290693
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6290693 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ecx
        jne public_6290680
        public_629069d : nop
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], eax
        mov cl, byte ptr ss : [ebp+0x2C]
        lea edi, ss:[ebp+0x2C]
        lea esi, ds:[ebx+0x2C]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0xC]
        push 1
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 4
        mov byte ptr ds : [esi+0xC], al
        call public_6319070
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ds : [esi+8]
        push 0
        push eax
        mov ecx, esi
        call public_6319070
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_6290740
        mov ecx, dword ptr ss : [ebp+0x40]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x40], ecx
        mov dword ptr ds : [ebx], offset public_639c3bc
        mov dword ptr ds : [ebx+4], offset public_639c3a4
        mov dword ptr ds : [ebx+0xC], offset public_639c3d4
        pop ebp
        public_6290728 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62905a0)
    }
}

#undef public_62905f6
#undef public_62905f8
#undef public_629060e
#undef public_6290610
#undef public_629065a
#undef public_6290660
#undef public_6290680
#undef public_6290693
#undef public_629069d
#undef public_6290728
