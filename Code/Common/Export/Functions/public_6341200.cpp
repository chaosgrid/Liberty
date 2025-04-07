#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341200);
CLANG_FORWARD_JUMP_SYMBOL(public_63978a1);

#define public_6341286 _public_6341286
#define public_63412a5 _public_63412a5
#define public_63412ba _public_63412ba
#define public_63412d6 _public_63412d6
#define public_63412ea _public_63412ea
#define public_6341305 _public_6341305
#define public_6341326 _public_6341326
#define public_634139c _public_634139c

PROC_DECLARE(0x6341200, internal_6341200, public_6341200);
extern "C" NAKED register_t __cdecl internal_6341200()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63978a1 @0x6341202*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63978a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor eax, eax
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_634139c
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp+0x14], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp+0x18], edx
        mov cl, byte ptr ds : [ebx+0x1C]
        push esi
        lea esi, ds:[ebx+0x1C]
        push edi
        lea edi, ss:[ebp+0x1C]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov byte ptr ds : [edi], cl
        mov edx, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+8]
        mov eax, edx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x28], eax
        jae public_6341286
        mov dword ptr ss : [esp+0x28], ecx
        mov eax, ecx
        public_6341286 : nop
        cmp edi, esi
        jne public_63412a5
        push ecx
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6399198]
        jmp public_6341326
        public_63412a5 : nop
        test eax, eax
        jbe public_63412ea
        cmp eax, edx
        jne public_63412ea
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_63412ba
        mov ecx, dword ptr ds : [public_63991d0]
        public_63412ba : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_63412ea
        push 1
        mov ecx, edi
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_63412d6
        mov eax, dword ptr ds : [public_63991d0]
        public_63412d6 : nop
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6341326
        public_63412ea : nop
        push 1
        push eax
        mov ecx, edi
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6341326
        mov eax, dword ptr ds : [ebx+0x20]
        test eax, eax
        jne public_6341305
        mov eax, dword ptr ds : [public_63991d0]
        public_6341305 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [edi+4]
        mov esi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [ebp+0x24], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6341326 : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x2C], edx
        mov al, byte ptr ds : [ebx+0x30]
        mov byte ptr ss : [ebp+0x30], al
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+0x34], ecx
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x38], edx
        mov eax, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [ebp+0x3C], eax
        mov ecx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], ecx
        mov edx, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], edx
        mov eax, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], eax
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], ecx
        mov edx, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x50], edx
        mov eax, dword ptr ds : [ebx+0x54]
        mov dword ptr ss : [ebp+0x54], eax
        mov ecx, dword ptr ds : [ebx+0x58]
        mov dword ptr ss : [ebp+0x58], ecx
        mov edx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp+0x5C], edx
        mov eax, dword ptr ds : [ebx+0x60]
        mov dword ptr ss : [ebp+0x60], eax
        mov ecx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], ecx
        mov edx, dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [ebp+0x68], edx
        mov eax, dword ptr ds : [ebx+0x6C]
        pop edi
        mov dword ptr ss : [ebp+0x6C], eax
        mov cl, byte ptr ds : [ebx+0x70]
        pop esi
        mov byte ptr ss : [ebp+0x70], cl
        mov dword ptr ss : [ebp+4], offset public_63a4d5c
        pop ebx
        public_634139c : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6341200)
    }
}

#undef public_6341286
#undef public_63412a5
#undef public_63412ba
#undef public_63412d6
#undef public_63412ea
#undef public_6341305
#undef public_6341326
#undef public_634139c
