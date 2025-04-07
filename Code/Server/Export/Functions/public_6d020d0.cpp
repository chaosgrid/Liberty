#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced210);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60f49);

#define public_6d02144 _public_6d02144
#define public_6d021e2 _public_6d021e2
#define public_6d021e4 _public_6d021e4
#define public_6d02227 _public_6d02227
#define public_6d02252 _public_6d02252
#define public_6d02262 _public_6d02262
#define public_6d022b3 _public_6d022b3
#define public_6d022fe _public_6d022fe
#define public_6d02315 _public_6d02315
#define public_6d0231c _public_6d0231c
#define public_6d02321 _public_6d02321

PROC_DECLARE(0x6d020d0, internal_6d020d0, public_6d020d0);
extern "C" NAKED register_t __cdecl internal_6d020d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60f49 @0x6d020d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60f49
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x24]
        test eax, eax
        je public_6d0231c
        mov eax, dword ptr ds : [edi-4]
        lea esi, ds:[edi-4]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6d0231c
        mov ecx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [edi+0xC]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        push eax
        call dword ptr ds : [public_6d641e0]
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_6d02315
        mov eax, dword ptr ss : [ebp+0x28]
        mov ebx, dword ptr ss : [esp+0x74]
        cmp ebx, eax
        jb public_6d02144
        mov ebx, eax
        public_6d02144 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x74], ebx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], eax
        mov ax, word ptr ss : [esp+0x70]
        mov word ptr ss : [esp+0x18], ax
        mov eax, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax+8]
        push eax
        call dword ptr ds : [public_6d644bc]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x23
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6d43650
        mov ebx, dword ptr ss : [ebp+0x20]
        add esp, 0xC
        test ebx, ebx
        je public_6d02262
        mov dl, byte ptr ss : [esp+0x70]
        push 0
        push 0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], dl
        call dword ptr ds : [public_6d641fc]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov byte ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x34], 0x16
        call dword ptr ds : [eax+0x20]
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x38], eax
        je public_6d021e2
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d021e4
        public_6d021e2 : nop
        xor edi, edi
        public_6d021e4 : nop
        mov eax, dword ptr ds : [edi+0xB4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x24]
        push eax
        push 4
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x224]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x188]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x70], ecx
        je public_6d02252
        public_6d02227 : nop
        push ebp
        lea ecx, ss:[esp+0x78]
        push ecx
        lea ecx, ss:[esp+0x78]
        call public_6d1b490
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6d641e8]
        cmp dword ptr ss : [esp+0x70], esi
        jne public_6d02227
        mov eax, dword ptr ss : [esp+0x28]
        public_6d02252 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        jmp public_6d02321
        public_6d02262 : nop
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_6d64248]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x28]
        test al, al
        je public_6d0231c
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_6d645ac]
        mov ebx, dword ptr ds : [edi+0xA0]
        mov edx, dword ptr ds : [ebx+4]
        push 0x28
        mov dword ptr ss : [esp+0x14], edx
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebx
        jne public_6d022b3
        mov ecx, eax
        public_6d022b3 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x40]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ced210
        mov edx, dword ptr ds : [edi+0xA4]
        add esp, 8
        inc edx
        mov dword ptr ds : [edi+0xA4], edx
        mov ecx, dword ptr ds : [edi+0xC]
        call dword ptr ds : [public_6d645d4]
        fstp st(0)
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d022fe
        mov eax, dword ptr ss : [esp+0x74]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6d641dc]
        public_6d022fe : nop
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x70]
        push ecx
        mov ecx, dword ptr ds : [edi+0x24]
        push edx
        push esi
        call public_6d0f0c0
        xor eax, eax
        jmp public_6d02321
        public_6d02315 : nop
        mov eax, 0xFFFFFFFE
        jmp public_6d02321
        public_6d0231c : nop
        mov eax, 0xFFFFFFFB
        public_6d02321 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 0xC
        UNREACHABLE_TRAP(0x6d020d0)
    }
}

#undef public_6d02144
#undef public_6d021e2
#undef public_6d021e4
#undef public_6d02227
#undef public_6d02252
#undef public_6d02262
#undef public_6d022b3
#undef public_6d022fe
#undef public_6d02315
#undef public_6d0231c
#undef public_6d02321
