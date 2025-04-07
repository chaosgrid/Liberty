#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bee370);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a911);

#define public_6bee3c5 _public_6bee3c5
#define public_6bee3d3 _public_6bee3d3
#define public_6bee3e6 _public_6bee3e6
#define public_6bee41d _public_6bee41d
#define public_6bee42a _public_6bee42a
#define public_6bee43e _public_6bee43e
#define public_6bee45a _public_6bee45a
#define public_6bee46e _public_6bee46e
#define public_6bee48c _public_6bee48c
#define public_6bee4ad _public_6bee4ad
#define public_6bee4b6 _public_6bee4b6

PROC_DECLARE(0x6bee370, internal_6bee370, public_6bee370);
extern "C" NAKED register_t __cdecl internal_6bee370()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a911 @0x6bee372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a911
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6bee4b6
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [public_6c0b1c4]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebx, eax
        cmp esi, ebx
        jae public_6bee3c5
        mov ebx, esi
        public_6bee3c5 : nop
        cmp ebp, edi
        jne public_6bee42a
        cmp ebx, ecx
        jbe public_6bee3d3
        call dword ptr ds : [public_6c0b16c]
        public_6bee3d3 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6c0b168]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6bee3e6
        mov esi, eax
        public_6bee3e6 : nop
        test esi, esi
        jbe public_6bee41d
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6c0b1e4]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6c0b174]
        test al, al
        je public_6bee41d
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6c0b164]
        public_6bee41d : nop
        mov ecx, ebp
        call dword ptr ds : [public_6c0b168]
        jmp public_6bee4ad
        public_6bee42a : nop
        cmp ebx, ecx
        jbe public_6bee46e
        cmp ebx, eax
        jne public_6bee46e
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_6bee43e
        mov eax, dword ptr ds : [public_6c0b160]
        public_6bee43e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6bee46e
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6c0b180]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6bee45a
        mov eax, dword ptr ds : [public_6c0b160]
        public_6bee45a : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6bee4ad
        public_6bee46e : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6c0b174]
        test al, al
        je public_6bee4ad
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_6c0b160]
        je public_6bee48c
        mov esi, edi
        public_6bee48c : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6bee4ad : nop
        mov edx, dword ptr ds : [edi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_6bee4b6 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6bee370)
    }
}

#undef public_6bee3c5
#undef public_6bee3d3
#undef public_6bee3e6
#undef public_6bee41d
#undef public_6bee42a
#undef public_6bee43e
#undef public_6bee45a
#undef public_6bee46e
#undef public_6bee48c
#undef public_6bee4ad
#undef public_6bee4b6
