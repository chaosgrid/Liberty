#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60789);

#define public_6cef211 _public_6cef211
#define public_6cef213 _public_6cef213
#define public_6cef254 _public_6cef254
#define public_6cef2c2 _public_6cef2c2
#define public_6cef2d8 _public_6cef2d8
#define public_6cef300 _public_6cef300
#define public_6cef31c _public_6cef31c
#define public_6cef325 _public_6cef325

PROC_DECLARE(0x6cef1e0, internal_6cef1e0, public_6cef1e0);
extern "C" NAKED register_t __cdecl internal_6cef1e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60789 @0x6cef1e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60789
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_6cef211
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cef213
        public_6cef211 : nop
        xor eax, eax
        public_6cef213 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f0]
        fmul dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [public_6d6401c]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        push edx
        lea esi, ss:[ebp+0x44]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d641ec]
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6cef254
        mov byte ptr ss : [ebp+0x50], 1
        public_6cef254 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x18C]
        test al, al
        jne public_6cef325
        mov al, byte ptr ds : [esi]
        push ebx
        push 0x14
        mov byte ptr ss : [esp+0x18], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], edi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d64380]
        mov cl, byte ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        mov byte ptr ss : [esp+0x20], cl
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x38], edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6cef2d8
        public_6cef2c2 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x44]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d641e8]
        cmp edi, ebx
        jne public_6cef2c2
        public_6cef2d8 : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov edi, eax
        pop ebx
        je public_6cef31c
        lea ecx, ds:[ecx]
        public_6cef300 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641e8]
        cmp esi, edi
        jne public_6cef300
        mov eax, dword ptr ss : [esp+0x14]
        public_6cef31c : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cef325 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x6cef1e0)
    }
}

#undef public_6cef211
#undef public_6cef213
#undef public_6cef254
#undef public_6cef2c2
#undef public_6cef2d8
#undef public_6cef300
#undef public_6cef31c
#undef public_6cef325
