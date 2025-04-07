#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f15e20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaeeb);

#define public_6ec7204 _public_6ec7204
#define public_6ec7210 _public_6ec7210
#define public_6ec7213 _public_6ec7213
#define public_6ec7233 _public_6ec7233
#define public_6ec7237 _public_6ec7237
#define public_6ec723c _public_6ec723c
#define public_6ec7254 _public_6ec7254
#define public_6ec7264 _public_6ec7264
#define public_6ec727c _public_6ec727c
#define public_6ec736c _public_6ec736c
#define public_6ec7396 _public_6ec7396
#define public_6ec73af _public_6ec73af
#define public_6ec73ba _public_6ec73ba
#define public_6ec73c6 _public_6ec73c6

PROC_DECLARE(0x6ec71d0, internal_6ec71d0, public_6ec71d0);
extern "C" NAKED register_t __cdecl internal_6ec71d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faaeeb @0x6ec71d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaeeb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF8
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [edx+0xBC]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ec73c6
        public_6ec7204 : nop
        lea esi, ds:[edi+0xC]
        test esi, esi
        jne public_6ec7210
        mov eax, dword ptr ss : [ebp+0xC]
        jmp public_6ec723c
        public_6ec7210 : nop
        lea eax, ss:[ebp+0x10]
        public_6ec7213 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ec7237
        test cl, cl
        je public_6ec7233
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ec7237
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec7213
        public_6ec7233 : nop
        xor eax, eax
        jmp public_6ec723c
        public_6ec7237 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec723c : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ec7254
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [edx+0xBC]
        jne public_6ec7204
        jmp public_6ec73c6
        public_6ec7254 : nop
        mov eax, dword ptr ds : [edi+0xF4]
        mov ecx, dword ptr ds : [edi+0xF8]
        cmp eax, ecx
        je public_6ec727c
        public_6ec7264 : nop
        mov ecx, dword ptr ds : [eax+0x80]
        mov dword ptr ds : [eax+0x7C], ecx
        mov ecx, dword ptr ds : [edi+0xF8]
        add eax, 0x88
        cmp eax, ecx
        jne public_6ec7264
        public_6ec727c : nop
        mov al, byte ptr ss : [ebp+0x70]
        test al, al
        je public_6ec73ba
        mov edx, dword ptr ds : [edi+0x3C]
        lea eax, ds:[edi+8]
        mov esi, eax
        mov ecx, 0xD
        lea edi, ss:[esp+0x10]
        rep movsd
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [eax+0xA0]
        lea esi, ds:[eax+0x38]
        mov ecx, 0xC
        lea edi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ds : [eax+0x68]
        mov dword ptr ss : [esp+0x78], ecx
        lea esi, ds:[eax+0x6C]
        mov ecx, 0xD
        lea edi, ss:[esp+0x7C]
        rep movsd
        mov cl, byte ptr ds : [eax+0xA4]
        mov byte ptr ss : [esp+0xB4], cl
        mov dword ptr ss : [esp+0xB0], edx
        mov dl, byte ptr ds : [eax+0xA5]
        lea esi, ds:[eax+0xA8]
        mov byte ptr ss : [esp+0xB5], dl
        mov edx, dword ptr ds : [eax+0xE0]
        mov ecx, 0xD
        lea edi, ss:[esp+0xB8]
        rep movsd
        mov ecx, dword ptr ds : [eax+0xDC]
        mov dword ptr ss : [esp+0xEC], ecx
        mov ecx, dword ptr ds : [eax+0xE4]
        add eax, 0xE8
        mov dword ptr ss : [esp+0xF4], ecx
        push eax
        lea ecx, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0xF4], edx
        call public_6ecfb80
        lea edx, ss:[ebp+0x64]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x6C], eax
        mov al, byte ptr ss : [ebp+0x71]
        test al, al
        mov dword ptr ss : [esp+0x110], 0
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x74], edx
        je public_6ec736c
        lea esi, ss:[ebp+0x40]
        mov ecx, 9
        lea edi, ss:[esp+0x48]
        rep movsd
        public_6ec736c : nop
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x10]
        push eax
        call public_6f15e20
        mov edi, dword ptr ss : [esp+0x100]
        mov esi, dword ptr ss : [esp+0xFC]
        cmp esi, edi
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        je public_6ec73af
        public_6ec7396 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0x88
        cmp esi, edi
        jne public_6ec7396
        mov esi, dword ptr ss : [esp+0xFC]
        public_6ec73af : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        jmp public_6ec73c6
        public_6ec73ba : nop
        mov ecx, dword ptr ss : [ebp+4]
        add edi, 8
        push edi
        call public_6f15e20
        public_6ec73c6 : nop
        mov ecx, dword ptr ss : [esp+0x108]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6ec71d0)
    }
}

#undef public_6ec7204
#undef public_6ec7210
#undef public_6ec7213
#undef public_6ec7233
#undef public_6ec7237
#undef public_6ec723c
#undef public_6ec7254
#undef public_6ec7264
#undef public_6ec727c
#undef public_6ec736c
#undef public_6ec7396
#undef public_6ec73af
#undef public_6ec73ba
#undef public_6ec73c6
