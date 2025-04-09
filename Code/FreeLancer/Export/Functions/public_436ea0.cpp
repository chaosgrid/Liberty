#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ea0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b91a1);

#define public_436f04 _public_436f04
#define public_436f12 _public_436f12
#define public_436f25 _public_436f25
#define public_436f5c _public_436f5c
#define public_436f6d _public_436f6d
#define public_436f81 _public_436f81
#define public_436f9d _public_436f9d
#define public_436fb1 _public_436fb1
#define public_436fcf _public_436fcf
#define public_436ff0 _public_436ff0
#define public_437005 _public_437005

PROC_DECLARE(0x436ea0, internal_436ea0, public_436ea0);
extern "C" NAKED register_t __cdecl internal_436ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b91a1 @0x436ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b91a1
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
        je public_437005
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [ebp], eax
        mov dl, byte ptr ds : [edi+4]
        add edi, 4
        add ebp, 4
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov eax, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], edi
        jae public_436f04
        mov ebx, esi
        public_436f04 : nop
        cmp ebp, edi
        jne public_436f6d
        cmp ebx, ecx
        jbe public_436f12
        call dword ptr ds : [public_5c7064]
        public_436f12 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_436f25
        mov esi, eax
        public_436f25 : nop
        test esi, esi
        jbe public_436f5c
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_436f5c
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_436f5c : nop
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c707c]
        jmp public_436ff0
        public_436f6d : nop
        cmp ebx, ecx
        jbe public_436fb1
        cmp ebx, eax
        jne public_436fb1
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_436f81
        mov eax, dword ptr ds : [public_5c7078]
        public_436f81 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_436fb1
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_436f9d
        mov eax, dword ptr ds : [public_5c7078]
        public_436f9d : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_436ff0
        public_436fb1 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_436ff0
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_5c7078]
        je public_436fcf
        mov esi, edi
        public_436fcf : nop
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
        public_436ff0 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], ecx
        pop ebx
        public_437005 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x436ea0)
    }
}

#undef public_436f04
#undef public_436f12
#undef public_436f25
#undef public_436f5c
#undef public_436f6d
#undef public_436f81
#undef public_436f9d
#undef public_436fb1
#undef public_436fcf
#undef public_436ff0
#undef public_437005
