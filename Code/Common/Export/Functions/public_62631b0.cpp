#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62631cc _public_62631cc
#define public_62631db _public_62631db
#define public_62631ee _public_62631ee
#define public_6263225 _public_6263225
#define public_6263232 _public_6263232
#define public_6263248 _public_6263248
#define public_6263268 _public_6263268
#define public_6263271 _public_6263271
#define public_6263286 _public_6263286
#define public_626329a _public_626329a
#define public_62632b8 _public_62632b8
#define public_62632d9 _public_62632d9

PROC_DECLARE(0x62631b0, internal_62631b0, public_62631b0);
extern "C" NAKED register_t __cdecl internal_62631b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63991c0]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        mov ebp, ecx
        jae public_62631cc
        mov ebx, esi
        public_62631cc : nop
        cmp ebp, edi
        jne public_6263232
        cmp dword ptr ss : [ebp+8], ebx
        jae public_62631db
        call dword ptr ds : [public_63991c4]
        public_62631db : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_62631ee
        mov esi, eax
        public_62631ee : nop
        test esi, esi
        jbe public_6263225
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6263225
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6263225 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_62632d9
        public_6263232 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_626329a
        cmp ebx, eax
        jne public_626329a
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6263248
        mov eax, dword ptr ds : [public_63991d0]
        public_6263248 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_626329a
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6263271
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6263268
        cmp cl, 0xFF
        je public_6263268
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6263271
        public_6263268 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6263271 : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6263286
        mov eax, dword ptr ds : [public_63991d0]
        public_6263286 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_62632d9
        public_626329a : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62632d9
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_63991d0]
        je public_62632b8
        mov esi, edi
        public_62632b8 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_62632d9 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [ebp+0x20], eax
        mov ecx, dword ptr ds : [edi+0x24]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x24], ecx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62631b0)
    }
}

#undef public_62631cc
#undef public_62631db
#undef public_62631ee
#undef public_6263225
#undef public_6263232
#undef public_6263248
#undef public_6263268
#undef public_6263271
#undef public_6263286
#undef public_626329a
#undef public_62632b8
#undef public_62632d9
