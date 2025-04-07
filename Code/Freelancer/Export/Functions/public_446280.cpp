#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446280);

#define public_4462ca _public_4462ca
#define public_4462ea _public_4462ea
#define public_44630a _public_44630a
#define public_44632a _public_44632a
#define public_44634a _public_44634a
#define public_44636a _public_44636a
#define public_44638a _public_44638a
#define public_4463aa _public_4463aa
#define public_4463ca _public_4463ca
#define public_4463ea _public_4463ea
#define public_44640a _public_44640a
#define public_44642a _public_44642a
#define public_44644a _public_44644a
#define public_44646a _public_44646a
#define public_44648a _public_44648a
#define public_4464b0 _public_4464b0
#define public_4464d9 _public_4464d9

PROC_DECLARE(0x446280, internal_446280, public_446280);
extern "C" NAKED register_t __cdecl internal_446280()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        xor ebp, ebp
        cmp al, 0x24
        jne public_4464d9
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x34]
        push eax
        call dword ptr ds : [public_5c6090]
        mov ecx, dword ptr ds : [public_61102c]
        mov ebx, dword ptr ds : [public_5c6d24]
        push ecx
        push edi
        mov esi, eax
        call ebx
        add esp, 0xC
        test eax, eax
        jne public_4462ca
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_4462ca : nop
        mov eax, dword ptr ds : [public_611030]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_4462ea
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_4462ea : nop
        mov eax, dword ptr ds : [public_611034]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44630a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44630a : nop
        mov eax, dword ptr ds : [public_611038]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44632a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44632a : nop
        mov eax, dword ptr ds : [public_61103c]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44634a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44634a : nop
        mov eax, dword ptr ds : [public_611040]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44636a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44636a : nop
        mov eax, dword ptr ds : [public_611044]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44638a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44638a : nop
        mov eax, dword ptr ds : [public_611048]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_4463aa
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_4463aa : nop
        mov eax, dword ptr ds : [public_61104c]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_4463ca
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_4463ca : nop
        mov eax, dword ptr ds : [public_61104c]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_4463ea
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_4463ea : nop
        mov eax, dword ptr ds : [public_611050]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44640a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44640a : nop
        mov eax, dword ptr ds : [public_611054]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44642a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x40]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44642a : nop
        mov eax, dword ptr ds : [public_611058]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44644a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44644a : nop
        mov eax, dword ptr ds : [public_61105c]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44646a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x48]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44646a : nop
        mov eax, dword ptr ds : [public_611060]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44648a
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        public_44648a : nop
        mov eax, dword ptr ds : [public_611064]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_4464b0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        lea ebx, ds:[ebx]
        public_4464b0 : nop
        push edi
        push 0xD8
/*FIXUP push offset public_5cbc74 @0x4464b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc74
        mov eax, 0x100001
/*FIXUP push offset public_5cbce0 @0x4464c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbce0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        public_4464d9 : nop
        push edi
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        pop esi
        mov ebp, eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x446280)
    }
}

#undef public_4462ca
#undef public_4462ea
#undef public_44630a
#undef public_44632a
#undef public_44634a
#undef public_44636a
#undef public_44638a
#undef public_4463aa
#undef public_4463ca
#undef public_4463ea
#undef public_44640a
#undef public_44642a
#undef public_44644a
#undef public_44646a
#undef public_44648a
#undef public_4464b0
#undef public_4464d9
