#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fe4b0);
CLANG_FORWARD_PROC_SYMBOL(public_66fe700);
CLANG_FORWARD_JUMP_SYMBOL(public_6700dc8);

#define public_66fe6b0 _public_66fe6b0
#define public_66fe6dd _public_66fe6dd

PROC_DECLARE(0x66fe570, internal_66fe570, public_66fe570);
extern "C" NAKED register_t __cdecl internal_66fe570()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700dc8 @0x66fe578*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700dc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebp
        mov ebp, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_66fe6dd
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push esi
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push 0x8B
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0x8B
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6704620]
        mov ebx, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [ebx+8], 0
        mov byte ptr ds : [ebx+9], 1
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [edx+0x10]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_66fe700
        lea edx, ds:[ebx+0xC]
        mov esi, eax
        mov edi, edx
        mov ecx, 0xC
        lea eax, ss:[esp+0x28]
        rep movsd
        push eax
        mov ecx, edx
        call public_66fe4b0
        mov edx, dword ptr ss : [esp+0x68]
        push edx
        mov edx, dword ptr ss : [esp+0x74]
        push 0
        push 0x80
        push 0x3F800000
        mov esi, eax
        push edx
        lea edi, ds:[ebx+0x3C]
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov esi, dword ptr ss : [ebp+0x14]
        mov ebp, dword ptr ss : [ebp+0x20]
        mov al, byte ptr ss : [ebp+8]
        test al, al
        je public_66fe6b0
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ss : [ebp+8], 0
        mov edi, dword ptr ds : [esi]
        push ebp
        call dword ptr ds : [eax+0x24]
        push ecx
        mov ecx, dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        push ebp
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ss : [ebp]
        push ecx
        fstp dword ptr ss : [esp]
        push ebp
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [ebp]
        push ecx
        fstp dword ptr ss : [esp]
        push ebp
        call dword ptr ds : [eax+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [edi+0x94]
        public_66fe6b0 : nop
        mov byte ptr ss : [ebp+9], 0
        mov dword ptr ss : [ebp+4], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        pop edi
        pop esi
        pop ebx
        public_66fe6dd : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        xor eax, eax
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 0xC
        UNREACHABLE_TRAP(0x66fe570)
    }
}

#undef public_66fe6b0
#undef public_66fe6dd
