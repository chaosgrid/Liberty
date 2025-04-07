#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a28f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a4010);
CLANG_FORWARD_PROC_SYMBOL(public_62a6260);
CLANG_FORWARD_PROC_SYMBOL(public_62a6560);
CLANG_FORWARD_PROC_SYMBOL(public_62a66c0);
CLANG_FORWARD_PROC_SYMBOL(public_62aee50);
CLANG_FORWARD_PROC_SYMBOL(public_62f05d0);
CLANG_FORWARD_PROC_SYMBOL(public_630cff0);
CLANG_FORWARD_PROC_SYMBOL(public_630d1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a6300 _public_62a6300
#define public_62a6347 _public_62a6347
#define public_62a6420 _public_62a6420
#define public_62a6523 _public_62a6523
#define public_62a6537 _public_62a6537
#define public_62a653c _public_62a653c
#define public_62a654a _public_62a654a

PROC_DECLARE(0x62a6260, internal_62a6260, public_62a6260);
extern "C" NAKED register_t __cdecl internal_62a6260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0xF8
        push ebx
        mov ebx, ecx
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[ebx+0x30]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x10C]
        lea eax, ds:[ebx+0xC]
        push ebp
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx], edi
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        push edx
        push eax
        mov dword ptr ds : [eax+0x1C], edi
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x14], edi
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call public_62a4010
        add esp, 0x10
        neg al
        sbb al, al
        inc al
        mov byte ptr ds : [ebx+0x54], al
        jne public_62a654a
        call public_630cff0
        mov ecx, dword ptr ss : [esp+0x110]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_62a654a
        push esi
        lea ecx, ds:[ecx]
        public_62a6300 : nop
        lea ecx, ss:[esp+0x58]
        call public_62a6560
        mov eax, dword ptr ds : [public_63fc2b4]
        cmp eax, edi
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0xB4], edi
        mov byte ptr ss : [esp+0xBC], 0
        mov byte ptr ss : [esp+0xBD], 0
        mov dword ptr ss : [esp+0xC0], edi
        mov dword ptr ss : [esp+0xB8], edx
        lea esi, ss:[ebp+0xC]
        jne public_62a6347
        call public_6391cf0
        mov dword ptr ds : [public_63fc2b4], eax
        public_62a6347 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x34], edx
        lea edx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0x38], eax
        push edx
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x40], ecx
        push eax
        mov ecx, ebx
        call public_62a66c0
        test al, al
        je public_62a653c
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xB8]
        push ecx
        push edx
        lea eax, ss:[esp+0xCC]
/*FIXUP push offset public_639dff0 @0x62a63a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dff0
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0x10
        lea ecx, ss:[esp+0xC4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_630d1f0
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x10C]
        mov dword ptr ss : [esp+0x58], eax
        lea eax, ss:[esp+0x34]
        push eax
        mov dword ptr ss : [esp+0xC4], edx
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        mov dword ptr ss : [esp+0x68], edi
        mov dword ptr ss : [esp+0x6C], edi
        call public_62887d0
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ds : [public_63fc2b4]
        add esp, 0xC
        cmp eax, edi
        mov dword ptr ss : [esp+0x6C], ecx
        mov dword ptr ss : [esp+0x70], edx
        lea esi, ss:[ebp+0x18]
        jne public_62a6420
        call public_6391cf0
        mov dword ptr ds : [public_63fc2b4], eax
        public_62a6420 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea ecx, ss:[esp+0xEC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0xE4]
        lea edi, ss:[esp+0x74]
        rep movsd
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xA0], ecx
        mov dword ptr ss : [esp+0xA4], edx
        mov dl, byte ptr ss : [ebp+0x3C]
        mov dword ptr ss : [esp+0xA8], eax
        mov al, byte ptr ss : [ebp+0x3D]
        mov dword ptr ss : [esp+0x30], 0
        mov ecx, dword ptr ss : [esp+0x30]
        push 0x1003
        mov dword ptr ss : [esp+0xB0], ecx
        mov byte ptr ss : [esp+0xC0], dl
        mov byte ptr ss : [esp+0xC1], al
        call public_62aee50
        mov ecx, dword ptr ds : [ebx+0x50]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0xF4], ecx
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ss : [ebp+8]
        push esi
        call public_62f05d0
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, esi
        call public_62a28f0
        mov edi, dword ptr ds : [ebx+0x48]
        mov edx, dword ptr ds : [edi+4]
        push 0xC
        mov dword ptr ss : [esp+0x28], edx
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], edi
        jne public_62a6523
        mov ecx, eax
        public_62a6523 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62a6537
        mov dword ptr ds : [eax], esi
        public_62a6537 : nop
        inc dword ptr ds : [ebx+0x4C]
        xor edi, edi
        public_62a653c : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x10]
        jne public_62a6300
        pop esi
        public_62a654a : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0xF8
        ret 0x14
        UNREACHABLE_TRAP(0x62a6260)
    }
}

#undef public_62a6300
#undef public_62a6347
#undef public_62a6420
#undef public_62a6523
#undef public_62a6537
#undef public_62a653c
#undef public_62a654a
