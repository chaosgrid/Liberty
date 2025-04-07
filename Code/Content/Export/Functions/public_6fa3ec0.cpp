#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f949b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1fd8);

#define public_6fa40c4 _public_6fa40c4
#define public_6fa40dd _public_6fa40dd
#define public_6fa40e5 _public_6fa40e5
#define public_6fa4110 _public_6fa4110
#define public_6fa4125 _public_6fa4125
#define public_6fa413e _public_6fa413e
#define public_6fa414d _public_6fa414d

PROC_DECLARE(0x6fa3ec0, internal_6fa3ec0, public_6fa3ec0);
extern "C" NAKED register_t __cdecl internal_6fa3ec0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1fd8 @0x6fa3ec2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1fd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+4], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], 0
        je public_6fa414d
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        push esi
        push edi
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+8]
        mov ecx, 0xF6
        rep movsd
        mov dl, byte ptr ss : [ebp+0x3E0]
        mov byte ptr ds : [ebx+0x3E0], dl
        mov eax, dword ptr ss : [ebp+0x3E4]
        mov dword ptr ds : [ebx+0x3E4], eax
        lea esi, ss:[ebp+0x3E8]
        lea edi, ds:[ebx+0x3E8]
        mov ecx, 0xD
        rep movsd
        lea edi, ds:[ebx+0x41C]
        lea esi, ss:[ebp+0x41C]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x44C]
        mov dword ptr ds : [ebx+0x44C], ecx
        mov edx, dword ptr ss : [ebp+0x450]
        mov dword ptr ds : [ebx+0x450], edx
        mov eax, dword ptr ss : [ebp+0x454]
        mov dword ptr ds : [ebx+0x454], eax
        mov ecx, dword ptr ss : [ebp+0x458]
        mov dword ptr ds : [ebx+0x458], ecx
        mov edx, dword ptr ss : [ebp+0x45C]
        mov dword ptr ds : [ebx+0x45C], edx
        mov eax, dword ptr ss : [ebp+0x460]
        mov dword ptr ds : [ebx+0x460], eax
        mov ecx, dword ptr ss : [ebp+0x464]
        mov dword ptr ds : [ebx+0x464], ecx
        mov edx, dword ptr ss : [ebp+0x468]
        mov dword ptr ds : [ebx+0x468], edx
        mov al, byte ptr ss : [ebp+0x46C]
        lea edi, ss:[ebp+0x46C]
        lea esi, ds:[ebx+0x46C]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, edi
        call public_6f1df30
        mov edi, eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed0230
        lea esi, ss:[ebp+0x478]
        lea edi, ds:[ebx+0x478]
        mov ecx, 0xD
        rep movsd
        lea ecx, ss:[ebp+0x4AC]
        push ecx
        lea ecx, ds:[ebx+0x4AC]
        mov byte ptr ss : [esp+0x2C], 1
        call dword ptr ds : [public_6fb3084]
        mov dl, byte ptr ss : [ebp+0x4C4]
        mov byte ptr ds : [ebx+0x4C4], dl
        mov eax, dword ptr ss : [ebp+0x4C8]
        mov dword ptr ds : [ebx+0x4C8], eax
        mov ecx, dword ptr ss : [ebp+0x4CC]
        mov dword ptr ds : [ebx+0x4CC], ecx
        mov edx, dword ptr ss : [ebp+0x4D0]
        mov dword ptr ds : [ebx+0x4D0], edx
        mov eax, dword ptr ss : [ebp+0x4D4]
        mov dword ptr ds : [ebx+0x4D4], eax
        mov ecx, dword ptr ss : [ebp+0x4D8]
        mov dword ptr ds : [ebx+0x4D8], ecx
        mov edx, dword ptr ss : [ebp+0x4DC]
        mov dword ptr ds : [ebx+0x4DC], edx
        mov eax, dword ptr ss : [ebp+0x4E0]
        mov dword ptr ds : [ebx+0x4E0], eax
        mov ecx, dword ptr ss : [ebp+0x4E4]
        mov dword ptr ds : [ebx+0x4E4], ecx
        mov dl, byte ptr ss : [ebp+0x4E8]
        mov byte ptr ds : [ebx+0x4E8], dl
        mov eax, dword ptr ss : [ebp+0x4EC]
        test eax, eax
        mov byte ptr ss : [esp+0x28], 2
        jne public_6fa40c4
        xor edx, edx
        jmp public_6fa40dd
        public_6fa40c4 : nop
        mov ecx, dword ptr ss : [ebp+0x4F0]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa40dd : nop
        test edx, edx
        mov eax, edx
        jge public_6fa40e5
        xor eax, eax
        public_6fa40e5 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+0x4EC], eax
        mov edi, dword ptr ss : [ebp+0x4F0]
        mov ebp, dword ptr ss : [ebp+0x4EC]
        add esp, 4
        cmp ebp, edi
        mov esi, eax
        mov dword ptr ss : [esp+0x34], esi
        je public_6fa413e
        public_6fa4110 : nop
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov byte ptr ss : [esp+0x28], 3
        je public_6fa4125
        push ebp
        mov ecx, esi
        call public_6f949b0
        public_6fa4125 : nop
        add esi, 0x108
        add ebp, 0x108
        cmp ebp, edi
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x34], esi
        jne public_6fa4110
        public_6fa413e : nop
        pop edi
        mov dword ptr ds : [ebx+0x4F0], esi
        mov dword ptr ds : [ebx+0x4F4], esi
        pop esi
        pop ebp
        public_6fa414d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6fa3ec0)
    }
}

#undef public_6fa40c4
#undef public_6fa40dd
#undef public_6fa40e5
#undef public_6fa4110
#undef public_6fa4125
#undef public_6fa413e
#undef public_6fa414d
