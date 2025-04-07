#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d0bfa5 _public_6d0bfa5
#define public_6d0c0f6 _public_6d0c0f6
#define public_6d0c231 _public_6d0c231
#define public_6d0c244 _public_6d0c244
#define public_6d0c296 _public_6d0c296

PROC_DECLARE(0x6d0bf39, internal_6d0bf39, public_6d0bf39);
extern "C" NAKED register_t __cdecl internal_6d0bf39()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1A8
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0bfa5
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x68]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x68], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x68]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x68], ecx
/*FIXUP push offset public_6d66898 @0x6d0bf7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66898
        push 0xAD4
/*FIXUP push offset public_6d668d0 @0x6d0bf85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d668d0
/*FIXUP push offset public_6d6691c @0x6d0bf8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6691c
        mov edx, dword ptr ss : [ebp-0x68]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0c296
        public_6d0bfa5 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x3A8]
        mov dword ptr ss : [ebp-0x9C], edx
        xor eax, eax
        cmp dword ptr ss : [ebp-0x9C], 0
        sete al
        mov byte ptr ss : [ebp-1], al
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x108], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x2240
        mov dword ptr ss : [ebp-0x104], eax
        mov ecx, dword ptr ss : [ebp-0x104]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x64], edx
        mov eax, dword ptr ss : [ebp-0x104]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp-0x60], ecx
        mov edx, dword ptr ss : [ebp-0x104]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp-0x5C], eax
        mov ecx, dword ptr ss : [ebp-0x104]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x58], edx
        mov eax, dword ptr ss : [ebp-0x104]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x54], ecx
        mov edx, dword ptr ss : [ebp-0x104]
        mov eax, dword ptr ds : [edx+0x24]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x104]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x104]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x104]
        mov eax, dword ptr ds : [edx+0x28]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x104]
        mov edx, dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp-0x40], edx
        mov eax, dword ptr ss : [ebp-0x104]
        mov ecx, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp-0x104]
        mov eax, dword ptr ds : [edx+0x38]
        mov dword ptr ss : [ebp-0x38], eax
        movzx ecx, byte ptr ss : [ebp-1]
        neg ecx
        sbb cl, cl
        inc cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0c0f6
        lea ecx, ss:[ebp-0xCC]
        call public_6d15c30
        lea eax, ss:[ebp-0xA8]
        mov dword ptr ss : [ebp-0x100], eax
        mov ecx, dword ptr ss : [ebp-0x100]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x100]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x100]
        mov dword ptr ds : [eax], 0
        fld dword ptr ss : [ebp-0xAC]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0xAC]
        lea ecx, ss:[ebp-0x64]
        push ecx
        lea edx, ss:[ebp-0xFC]
        push edx
        lea ecx, ss:[ebp-0xCC]
        call public_6d15ec0
        mov ecx, 0xC
        lea esi, ss:[ebp-0xFC]
        lea edi, ss:[ebp-0x64]
        rep movsd
        public_6d0c0f6 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x174], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x21FC
        mov dword ptr ss : [ebp-0x170], edx
        mov eax, dword ptr ss : [ebp-0x170]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-0x170]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x170]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x170]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x170]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x170]
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x170]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x170]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x170]
        mov edx, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp-0x170]
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x170]
        mov eax, dword ptr ds : [edx+0x34]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0x170]
        mov edx, dword ptr ds : [ecx+0x38]
        mov dword ptr ss : [ebp-8], edx
        movzx eax, byte ptr ss : [ebp-1]
        test eax, eax
        je public_6d0c231
        push 0
        lea ecx, ss:[ebp-0x138]
        call public_6d15ca0
        lea ecx, ss:[ebp-0x138]
        call public_6d15c30
        lea ecx, ss:[ebp-0x114]
        mov dword ptr ss : [ebp-0x16C], ecx
        mov edx, dword ptr ss : [ebp-0x16C]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x16C]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x16C]
        mov dword ptr ds : [ecx], 0
        fld dword ptr ss : [ebp-0x118]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x118]
        lea edx, ss:[ebp-0x34]
        push edx
        lea eax, ss:[ebp-0x168]
        push eax
        lea ecx, ss:[ebp-0x138]
        call public_6d15ec0
        mov ecx, 0xC
        lea esi, ss:[ebp-0x168]
        lea edi, ss:[ebp-0x34]
        rep movsd
        public_6d0c231 : nop
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d0c244
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d0c244 : nop
        lea ecx, ss:[ebp-0x64]
        push ecx
        lea edx, ss:[ebp-0x34]
        push edx
        lea eax, ss:[ebp-0x1A4]
        push eax
        mov ecx, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0x1A8], ecx
        mov edx, dword ptr ss : [ebp-0x1A8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x1A8]
        push ecx
        call dword ptr ds : [eax+0x1C]
        mov ecx, 0xC
        lea esi, ss:[ebp-0x1A4]
        lea edi, ss:[ebp-0x98]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[ebp-0x98]
        mov edi, dword ptr ss : [ebp+0xC]
        rep movsd
        xor eax, eax
        public_6d0c296 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0bf39)
    }
}

#undef public_6d0bfa5
#undef public_6d0c0f6
#undef public_6d0c231
#undef public_6d0c244
#undef public_6d0c296
