#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aa210);
CLANG_FORWARD_PROC_SYMBOL(public_5ad8b0);
CLANG_FORWARD_PROC_SYMBOL(public_5adfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7398);

#define public_5aa223 _public_5aa223
#define public_5aa260 _public_5aa260
#define public_5aa26f _public_5aa26f
#define public_5aa27b _public_5aa27b
#define public_5aa2f0 _public_5aa2f0
#define public_5aa2ff _public_5aa2ff
#define public_5aa30b _public_5aa30b
#define public_5aa340 _public_5aa340
#define public_5aa34f _public_5aa34f
#define public_5aa35b _public_5aa35b
#define public_5aa3a9 _public_5aa3a9
#define public_5aa418 _public_5aa418
#define public_5aa434 _public_5aa434

PROC_DECLARE(0x5aa210, internal_5aa210, public_5aa210);
extern "C" NAKED register_t __cdecl internal_5aa210()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x184]
        test al, al
        je public_5aa223
        xor al, al
        pop ebp
        pop ecx
        ret 
        public_5aa223 : nop
        push ebx
        push esi
        push edi
/*FIXUP push offset public_5e65b8 @0x5aa226*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e65b8
        lea edi, ss:[ebp+0x94]
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5aa27b
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        mov ecx, offset public_5e65b8
        jbe public_5aa26f
        mov edx, esi
        lea esp, ss:[esp]
        public_5aa260 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_5aa260
        public_5aa26f : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [eax+esi*2], 0
        public_5aa27b : nop
        xor eax, eax
        mov ebx, 1
        mov dword ptr ss : [ebp+0xA4], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0xBC], ebx
        mov dword ptr ss : [ebp+0xC0], eax
        mov dword ptr ss : [ebp+0x118], eax
        mov dword ptr ss : [ebp+0x11C], ebx
        mov dword ptr ss : [ebp+0x12C], 2
        mov ecx, dword ptr ds : [public_67ecb8]
/*FIXUP push offset public_5c8ce0 @0x5aa2b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        mov dword ptr ss : [ebp+0x120], ecx
        lea edi, ss:[ebp+0xD8]
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov esi, eax
        push ebx
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5aa30b
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        mov ecx, offset public_5c8ce0
        jbe public_5aa2ff
        mov edx, esi
        lea esp, ss:[esp]
        public_5aa2f0 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_5aa2f0
        public_5aa2ff : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [edx+esi*2], 0
/*FIXUP public_5aa30b : nop
        push offset public_5c8ce0 @0x5aa30b*/
  FIXUP public_5aa30b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        lea edi, ss:[ebp+0xE8]
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5aa35b
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        mov ecx, offset public_5c8ce0
        jbe public_5aa34f
        mov edx, esi
        mov edi, edi
        public_5aa340 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_5aa340
        public_5aa34f : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [eax+esi*2], 0
        public_5aa35b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5c865c
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        push 1
        lea ebx, ss:[ebp+0x108]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5aa3a9
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, esi
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5c865c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_5aa3a9 : nop
        lea ecx, ss:[ebp+4]
        call public_5b7398
        mov edx, dword ptr ss : [ebp+0x148]
        mov eax, dword ptr ss : [ebp+0x144]
        lea ecx, ss:[ebp+0x140]
        push edx
        push eax
        call public_5ad8b0
        mov ecx, dword ptr ss : [ebp+0x168]
        mov edx, dword ptr ss : [ebp+0x164]
        lea esi, ss:[ebp+0x160]
        push ecx
        push edx
        mov ecx, esi
        call public_5ad8b0
        mov eax, dword ptr ss : [ebp+0x178]
        mov edx, dword ptr ss : [ebp+0x174]
        lea ecx, ss:[ebp+0x170]
        push eax
        push edx
        call public_5ad8b0
        mov edi, dword ptr ss : [ebp+0x158]
        mov dword ptr ss : [ebp+0x25C], 0
        mov ebp, dword ptr ss : [ebp+0x154]
        cmp ebp, edi
        je public_5aa434
        public_5aa418 : nop
        push ebp
        mov byte ptr ss : [ebp+0x3D], 0
        mov eax, dword ptr ds : [esi+8]
        push 1
        push eax
        mov ecx, esi
        call public_5adfc0
        add ebp, 0x9C
        cmp ebp, edi
        jne public_5aa418
        public_5aa434 : nop
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5aa210)
    }
}

#undef public_5aa223
#undef public_5aa260
#undef public_5aa26f
#undef public_5aa27b
#undef public_5aa2f0
#undef public_5aa2ff
#undef public_5aa30b
#undef public_5aa340
#undef public_5aa34f
#undef public_5aa35b
#undef public_5aa3a9
#undef public_5aa418
#undef public_5aa434
