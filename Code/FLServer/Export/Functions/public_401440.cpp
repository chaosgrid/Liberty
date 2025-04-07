#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401440);
CLANG_FORWARD_PROC_SYMBOL(public_4023f0);
CLANG_FORWARD_JUMP_SYMBOL(public_419a1a);

#define public_401590 _public_401590
#define public_4015a1 _public_4015a1
#define public_40160c _public_40160c
#define public_401650 _public_401650
#define public_40165f _public_40165f
#define public_401671 _public_401671
#define public_4016a4 _public_4016a4
#define public_4016b3 _public_4016b3
#define public_4016c5 _public_4016c5

PROC_DECLARE(0x401440, internal_401440, public_401440);
extern "C" NAKED register_t __cdecl internal_401440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419a1a @0x401442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419a1a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[ebp+0x618]
        xor esi, esi
        push esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_41b86c]
        mov cl, byte ptr ss : [esp+0x13]
        lea ebx, ss:[ebp+0x738]
        mov dword ptr ss : [ebp+0x62C], 0x186A0
        mov dword ptr ss : [ebp+0x630], 0xC8
        mov byte ptr ds : [ebx], cl
        push esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], esi
        call dword ptr ds : [public_41b870]
        mov dl, byte ptr ss : [esp+0x13]
        lea ecx, ss:[ebp+0x74C]
        push esi
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_41b86c]
        mov al, byte ptr ss : [esp+0x13]
        lea ecx, ss:[ebp+0x75C]
        push esi
        mov byte ptr ss : [esp+0x28], 2
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_41b86c]
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [ebp+0x76C], esi
        mov byte ptr ss : [ebp+0x770], cl
        mov dword ptr ss : [ebp+0x774], esi
        mov dword ptr ss : [ebp+0x778], esi
        mov dword ptr ss : [ebp+0x77C], esi
        mov eax, 4
        mov dword ptr ss : [ebp+0x780], eax
        mov byte ptr ss : [ebp+0x794], 1
        mov byte ptr ss : [ebp+0x9AC], 0
        mov byte ptr ss : [ebp+0x9AD], 0
        mov byte ptr ss : [ebp+0x9AE], 0
        mov byte ptr ss : [esp+0x24], al
        xor eax, eax
        mov ecx, 0x41
        mov edi, ebp
        rep stosd
        lea esi, ss:[ebp+0x40F]
        mov ecx, 0x41
        mov edi, esi
        rep stosd
        mov ecx, 0x41
        lea edi, ss:[ebp+0x104]
        rep stosd
        mov ecx, 0x85
        lea edi, ss:[ebp+0x798]
        rep stosd
        mov byte ptr ss : [ebp+0x9A8], al
        mov dword ptr ss : [ebp+0x9A4], 0x36D9
        mov byte ptr ss : [ebp+0x9A9], 1
        mov ecx, 0x40
        lea edi, ss:[ebp+0x30C]
        rep stosd
        xor edx, edx
        lea eax, ss:[ebp+0x40C]
        mov word ptr ds : [eax], dx
        mov byte ptr ds : [eax+2], dl
        mov eax, offset public_425410
        mov edi, ebp
        sub edi, eax
        public_401590 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edi+eax], cl
        inc eax
        test cl, cl
        jne public_401590
        mov eax, offset public_425410
        sub esi, eax
        public_4015a1 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi+eax], cl
        inc eax
        test cl, cl
        jne public_4015a1
        mov ecx, dword ptr ds : [public_41c06c]
        mov dword ptr ss : [ebp+0x634], ecx
        xor eax, eax
        mov ecx, 0x40
        lea edi, ss:[ebp+0x638]
        rep stosd
        or ecx, 0xFFFFFFFF
        mov edi, offset public_425430
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        push 1
        push esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_41b874]
        test al, al
        je public_40160c
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, esi
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_425430
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
/*FIXUP public_40160c : nop
        push offset public_425f48 @0x40160c*/
  FIXUP public_40160c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425f48
        mov dword ptr ss : [ebp+0x748], 0x9988
        call dword ptr ds : [public_41b8f4]
        add esp, 4
        mov esi, eax
        push 1
        lea edi, ss:[ebp+0x74C]
        push esi
        mov ecx, edi
        call dword ptr ds : [public_41b878]
        test al, al
        je public_401671
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        mov ecx, offset public_425f48
        jbe public_40165f
        mov edx, esi
        lea esp, ss:[esp]
        public_401650 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_401650
        public_40165f : nop
        mov edx, dword ptr ss : [ebp+0x750]
        mov dword ptr ss : [ebp+0x754], esi
        mov word ptr ds : [edx+esi*2], 0
/*FIXUP public_401671 : nop
        push offset public_425f48 @0x401671*/
  FIXUP public_401671 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425f48
        call dword ptr ds : [public_41b8f4]
        add esp, 4
        mov esi, eax
        push 1
        lea edi, ss:[ebp+0x75C]
        push esi
        mov ecx, edi
        call dword ptr ds : [public_41b878]
        test al, al
        je public_4016c5
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        mov ecx, offset public_425f48
        jbe public_4016b3
        mov edx, esi
        public_4016a4 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_4016a4
        public_4016b3 : nop
        mov eax, dword ptr ss : [ebp+0x760]
        mov dword ptr ss : [ebp+0x764], esi
        mov word ptr ds : [eax+esi*2], 0
        public_4016c5 : nop
        xor eax, eax
        mov ecx, 0x41
        lea edi, ss:[ebp+0x208]
        rep stosd
        mov ecx, 0x41
        lea edi, ss:[ebp+0x513]
        rep stosd
        mov edx, dword ptr ss : [ebp+0x778]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[ebp+0x770]
        push 1
        push edx
        mov dword ptr ss : [esp+0x20], 0x10000
        call public_4023f0
        xor eax, eax
        lea ecx, ss:[ebp+0x784]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        pop edi
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x401440)
    }
}

#undef public_401590
#undef public_4015a1
#undef public_40160c
#undef public_401650
#undef public_40165f
#undef public_401671
#undef public_4016a4
#undef public_4016b3
#undef public_4016c5
