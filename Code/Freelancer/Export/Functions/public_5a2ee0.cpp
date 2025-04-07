#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_4227d0);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_5a2ee0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c503b);

#define public_5a2f61 _public_5a2f61
#define public_5a2fe5 _public_5a2fe5
#define public_5a3050 _public_5a3050
#define public_5a30c0 _public_5a30c0
#define public_5a30f0 _public_5a30f0
#define public_5a318e _public_5a318e
#define public_5a31a0 _public_5a31a0
#define public_5a31ce _public_5a31ce
#define public_5a31f0 _public_5a31f0

PROC_DECLARE(0x5a2ee0, internal_5a2ee0, public_5a2ee0);
extern "C" NAKED register_t __cdecl internal_5a2ee0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c503b @0x5a2ee8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c503b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        mov byte ptr ss : [ebp+0x24], 1
        je public_5a31f0
        mov al, byte ptr ss : [ebp+0x25]
        test al, al
        jne public_5a2f61
/*FIXUP push offset public_67dbf8 @0x5a2f14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        push 0xB50
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        add esp, 0x20
        jmp public_5a2fe5
        public_5a2f61 : nop
        push 0xB50
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB60
        call public_421ed0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
/*FIXUP push offset public_67dbf8 @0x5a2faa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_4227d0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        add esp, 0xC
        public_5a2fe5 : nop
        mov edx, dword ptr ss : [ebp+0x1C]
        xor eax, eax
        push esi
        push edi
        mov ecx, 0x1C
        lea edi, ss:[esp+0x20]
        rep stosd
        mov eax, 0x10
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x24], eax
        add eax, 0xC
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x20], 2
        mov dword ptr ss : [esp+0x28], 0xC
        mov dword ptr ss : [esp+0x50], 4
        mov dword ptr ss : [esp+0x88], 0x42
        mov dword ptr ss : [esp+0x8C], edx
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5e6014
        mov eax, 0x8D
        lea ecx, ds:[ecx]
        public_5a3050 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_5a3050
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x89
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0x89
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x98], 0
        mov esi, offset public_5e603c
        mov eax, 1
        mov edi, edi
        public_5a30c0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_5a30c0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5e603c
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_5a30f0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_5a30f0
        mov edx, dword ptr ss : [ebp+0x1C]
        push edx
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_5a318e
        mov edx, dword ptr ss : [ebp+0x20]
        push edx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_5a318e
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_5a318e
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [edx+0x24]
        test eax, eax
        jne public_5a318e
        mov ecx, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        push ecx
        push 0
        push 4
        push eax
        call dword ptr ds : [edx+0xC]
        public_5a318e : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5e602c
        mov eax, 0x8D
        public_5a31a0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_5a31a0
        mov al, byte ptr ss : [ebp+0x25]
        test al, al
        pop edi
        pop esi
        je public_5a31ce
/*FIXUP push offset public_67dbf8 @0x5a31c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        add esp, 4
        public_5a31ce : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        public_5a31f0 : nop
        mov ecx, dword ptr ss : [esp+0x88]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x5a2ee0)
    }
}

#undef public_5a2f61
#undef public_5a2fe5
#undef public_5a3050
#undef public_5a30c0
#undef public_5a30f0
#undef public_5a318e
#undef public_5a31a0
#undef public_5a31ce
#undef public_5a31f0
