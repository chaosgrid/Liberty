#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fa10);
CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_4102c0);
CLANG_FORWARD_PROC_SYMBOL(public_421620);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422390);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422910);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);

#define public_58468c _public_58468c

PROC_DECLARE(0x584470, internal_584470, public_584470);
extern "C" NAKED register_t __cdecl internal_584470()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov edi, ecx
        call public_59e5c0
        cmp dword ptr ds : [edi+0x4B8], 0xFFFFFFFF
        je public_58468c
        mov eax, dword ptr ds : [edi+0x4A0]
        mov esi, dword ptr ds : [edi+0x49C]
        mov edx, dword ptr ds : [edi+0x498]
        mov ecx, dword ptr ds : [edi+0x494]
        or eax, esi
        lea ebx, ds:[edi+0x494]
        or eax, edx
        or eax, ecx
        je public_58468c
        call public_4101e0
        mov cl, byte ptr ds : [edi+0x448]
        mov dl, byte ptr ds : [edi+0x449]
        mov al, byte ptr ds : [edi+0x44A]
        mov byte ptr ss : [esp+0xC], cl
        lea ecx, ss:[esp+0xC]
        push ecx
        mov byte ptr ss : [esp+0x11], dl
        mov byte ptr ss : [esp+0x12], al
        call public_410240
        mov edx, dword ptr ds : [edi+0x46C]
        push 0
        lea esi, ds:[edi+0x388]
        push esi
        push edx
        lea eax, ds:[edi+0x44C]
        push eax
        call public_4102c0
        mov ecx, dword ptr ds : [edi+0x4B4]
        add esp, 0x14
        push ecx
        mov ecx, esi
        call public_40fa10
        push 1
        push ebx
        mov ecx, esi
        call public_40fb80
        lea edx, ss:[esp+0x24]
        push edx
        push 0xBA2
        call public_422390
        push 0x1D8
/*FIXUP push offset public_5e4cd8 @0x58452c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4cd8
        push esi
        call public_422610
        mov eax, dword ptr ds : [esi]
        add esp, 0x14
        push esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0xC]
        sub ecx, edx
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [public_5c6de0]
        sub eax, ebx
        dec eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 2
        push eax
        call dword ptr ds : [edx+0x3C]
        push esi
        call public_422910
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        push 1
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edi+0x4B8]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x300
        push 0x3F800000
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        push 0xB71
        call public_421ed0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0xB71
        call public_421ed0
/*FIXUP push offset public_67dbf8 @0x58463f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        push 0x1FC
/*FIXUP push offset public_5e4cd8 @0x58465a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4cd8
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        push edx
        call public_421620
        mov al, 0xFF
        mov byte ptr ss : [esp+0x30], al
        mov byte ptr ss : [esp+0x31], al
        mov byte ptr ss : [esp+0x32], al
        call public_4101e0
        lea eax, ss:[esp+0x30]
        push eax
        call public_410240
        add esp, 0x24
        public_58468c : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x584470)
    }
}

#undef public_58468c
