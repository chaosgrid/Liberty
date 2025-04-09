#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414640);
CLANG_FORWARD_PROC_SYMBOL(public_4147a0);
CLANG_FORWARD_PROC_SYMBOL(public_414d10);
CLANG_FORWARD_PROC_SYMBOL(public_418610);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b882e);

#define public_41468c _public_41468c
#define public_4146b7 _public_4146b7
#define public_4146cb _public_4146cb
#define public_4146ee _public_4146ee
#define public_4146f0 _public_4146f0
#define public_414705 _public_414705
#define public_414720 _public_414720
#define public_414736 _public_414736
#define public_414765 _public_414765
#define public_41476c _public_41476c

PROC_DECLARE(0x414640, internal_414640, public_414640);
extern "C" NAKED register_t __cdecl internal_414640()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b882e @0x414648*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b882e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        push edi
        lea edi, ds:[ebx+0xC]
        je public_41468c
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 3
        cmp ebp, eax
        jae public_41468c
        mov eax, dword ptr ds : [ebx+0x10]
        mov cl, byte ptr ds : [eax+ebp*8+4]
        cmp cl, byte ptr ss : [esp+0x2C]
        jne public_4146b7
        mov esi, dword ptr ds : [eax+ebp*8]
        test esi, esi
        jne public_414705
        public_41468c : nop
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_4146cb
        push 0x34
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        je public_4146ee
        mov ecx, eax
        call public_414d10
        jmp public_4146f0
        public_4146b7 : nop
        mov ecx, dword ptr ds : [eax+ebp*8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+ebp*8], 0
        jmp public_41468c
        public_4146cb : nop
        push 0x2C
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_4146ee
        mov ecx, eax
        call public_4147a0
        jmp public_4146f0
        public_4146ee : nop
        xor eax, eax
        public_4146f0 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        public_414705 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_414720
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 3
        cmp ebp, eax
        jae public_414720
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [edx+ebp*8], esi
        jmp public_41476c
        public_414720 : nop
        test esi, esi
        mov al, byte ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ss : [esp+0x14], al
        je public_414736
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_414736 : nop
        mov eax, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], 2
        call public_418610
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_414765
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_414765 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        public_41476c : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x414640)
    }
}

#undef public_41468c
#undef public_4146b7
#undef public_4146cb
#undef public_4146ee
#undef public_4146f0
#undef public_414705
#undef public_414720
#undef public_414736
#undef public_414765
#undef public_41476c
