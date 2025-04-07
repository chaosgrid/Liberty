#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa340);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e440);
CLANG_FORWARD_PROC_SYMBOL(public_6f302a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae90c);

#define public_6f30360 _public_6f30360
#define public_6f3037e _public_6f3037e
#define public_6f303ae _public_6f303ae
#define public_6f303b4 _public_6f303b4
#define public_6f303d6 _public_6f303d6
#define public_6f303ee _public_6f303ee
#define public_6f30415 _public_6f30415

PROC_DECLARE(0x6f302a0, internal_6f302a0, public_6f302a0);
extern "C" NAKED register_t __cdecl internal_6f302a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae90c @0x6f302a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae90c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x20]
        push ebp
        mov dword ptr ss : [esp+8], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6f30415
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov cl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [eax+0x10], cl
        mov dl, byte ptr ds : [esi+0x11]
        mov byte ptr ds : [eax+0x11], dl
        mov cl, byte ptr ds : [esi+0x12]
        mov byte ptr ds : [eax+0x12], cl
        mov dl, byte ptr ds : [esi+0x13]
        mov byte ptr ds : [eax+0x13], dl
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+0x18], edx
        push edi
        lea edi, ds:[eax+0x18]
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+4], eax
        mov cl, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [edi+8], cl
        mov dl, byte ptr ds : [esi+0x21]
        mov byte ptr ds : [edi+9], dl
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0xC], eax
        mov cl, byte ptr ds : [esi+0x28]
        lea ebx, ds:[edi+0x10]
        push 0x10
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [ebx], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0x2C]
        mov ebp, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x34], edx
        je public_6f3037e
        nop 
        public_6f30360 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ss:[ebp+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        call public_6f1e440
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x10]
        jne public_6f30360
        public_6f3037e : nop
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x1C], eax
        mov cl, byte ptr ds : [esi+0x38]
        mov byte ptr ds : [edi+0x20], cl
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        mov byte ptr ss : [esp+0x28], 1
        je public_6f303ae
        mov ecx, dword ptr ds : [esi+0x40]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6f303ae : nop
        test eax, eax
        jge public_6f303b4
        xor eax, eax
        public_6f303b4 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 4
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+0x24], eax
        mov ecx, dword ptr ds : [esi+0x40]
        mov ebx, dword ptr ds : [esi+0x3C]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov ebp, eax
        je public_6f303ee
        public_6f303d6 : nop
        push ebx
        push ebp
        call public_6efa340
        mov eax, dword ptr ss : [esp+0x3C]
        add ebx, 0x50
        add esp, 8
        add ebp, 0x50
        cmp ebx, eax
        jne public_6f303d6
        public_6f303ee : nop
        mov dword ptr ds : [edi+0x28], ebp
        mov dword ptr ds : [edi+0x2C], ebp
        mov edx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [edi+0x30], edx
        mov al, byte ptr ds : [esi+0x4C]
        mov byte ptr ds : [edi+0x34], al
        mov ecx, dword ptr ds : [esi+0x50]
        mov dword ptr ds : [edi+0x38], ecx
        mov edx, dword ptr ds : [esi+0x54]
        mov dword ptr ds : [edi+0x3C], edx
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [edi+0x40], eax
        pop edi
        pop esi
        pop ebx
        public_6f30415 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f302a0)
    }
}

#undef public_6f30360
#undef public_6f3037e
#undef public_6f303ae
#undef public_6f303b4
#undef public_6f303d6
#undef public_6f303ee
#undef public_6f30415
