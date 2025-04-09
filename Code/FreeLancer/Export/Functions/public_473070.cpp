#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);

#define public_4730a4 _public_4730a4
#define public_473100 _public_473100
#define public_47310f _public_47310f
#define public_47311b _public_47311b
#define public_47312b _public_47312b
#define public_473140 _public_473140
#define public_473152 _public_473152
#define public_473170 _public_473170
#define public_4731c8 _public_4731c8
#define public_4731d7 _public_4731d7
#define public_4731e3 _public_4731e3
#define public_4731f3 _public_4731f3
#define public_473204 _public_473204
#define public_473216 _public_473216

PROC_DECLARE(0x473070, internal_473070, public_473070);
extern "C" NAKED register_t __cdecl internal_473070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x800
        sub eax, 0xF
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        je public_473170
        sub eax, 3
        je public_473170
        dec eax
        je public_4730a4
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x800
        ret 4
        public_4730a4 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        add esi, 0xFFFFFCD4
        test ecx, ecx
        je public_47311b
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_47311b
        push 0x400
        lea eax, ss:[esp+0x14]
        push eax
        call public_57c2c0
        mov ebx, dword ptr ds : [esi+0x338]
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov edi, eax
        push 1
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_47311b
        test edi, edi
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        jbe public_47310f
        mov edx, edi
        lea esp, ss:[esp]
        public_473100 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_473100
        public_47310f : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_47311b : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_47312b
        mov dword ptr ds : [eax], 1
        public_47312b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_473152
        lea esp, ss:[esp]
        public_473140 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_473140
        public_473152 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x800
        ret 4
        public_473170 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        add esi, 0xFFFFFCD4
        test ecx, ecx
        je public_4731e3
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_4731e3
        push 0x400
        lea edx, ss:[esp+0x14]
        push edx
        call public_57c2c0
        mov ebx, dword ptr ds : [esi+0x338]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov edi, eax
        push 1
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4731e3
        test edi, edi
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        jbe public_4731d7
        mov edx, edi
        public_4731c8 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_4731c8
        public_4731d7 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], edi
        mov word ptr ds : [ecx+edi*2], 0
        public_4731e3 : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_4731f3
        mov dword ptr ds : [eax], 0
        public_4731f3 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_473216
        public_473204 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_473204
        public_473216 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x800
        ret 4
        UNREACHABLE_TRAP(0x473070)
    }
}

#undef public_4730a4
#undef public_473100
#undef public_47310f
#undef public_47311b
#undef public_47312b
#undef public_473140
#undef public_473152
#undef public_473170
#undef public_4731c8
#undef public_4731d7
#undef public_4731e3
#undef public_4731f3
#undef public_473204
#undef public_473216
