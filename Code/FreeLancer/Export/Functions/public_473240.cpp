#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0840);

#define public_473288 _public_473288
#define public_4732e0 _public_4732e0
#define public_4732ef _public_4732ef
#define public_4732fb _public_4732fb
#define public_47330b _public_47330b
#define public_473320 _public_473320
#define public_473332 _public_473332
#define public_473350 _public_473350
#define public_4733a5 _public_4733a5
#define public_4733b4 _public_4733b4
#define public_4733c0 _public_4733c0
#define public_4733d0 _public_4733d0
#define public_4733e1 _public_4733e1
#define public_4733f3 _public_4733f3

PROC_DECLARE(0x473240, internal_473240, public_473240);
extern "C" NAKED register_t __cdecl internal_473240()
{
    __asm
    {
        sub esp, 0x800
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x810]
        mov eax, ecx
        sub eax, 0xF003
        push edi
        je public_473350
        dec eax
        je public_473288
        mov eax, dword ptr ss : [esp+0x81C]
        mov edx, dword ptr ss : [esp+0x818]
        push eax
        push edx
        push ecx
        mov ecx, esi
        call public_5a0840
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x800
        ret 0xC
        public_473288 : nop
        mov ecx, dword ptr ds : [esi+0x344]
        test ecx, ecx
        je public_4732fb
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_4732fb
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
        je public_4732fb
        test edi, edi
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        jbe public_4732ef
        mov edx, edi
        lea ecx, ds:[ecx]
        public_4732e0 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_4732e0
        public_4732ef : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_4732fb : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_47330b
        mov dword ptr ds : [eax], 1
        public_47330b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_473332
        lea esp, ss:[esp]
        public_473320 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_473320
        public_473332 : nop
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
        ret 0xC
        public_473350 : nop
        mov ecx, dword ptr ds : [esi+0x344]
        test ecx, ecx
        je public_4733c0
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_4733c0
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
        je public_4733c0
        test edi, edi
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        jbe public_4733b4
        mov edx, edi
        public_4733a5 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_4733a5
        public_4733b4 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], edi
        mov word ptr ds : [ecx+edi*2], 0
        public_4733c0 : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_4733d0
        mov dword ptr ds : [eax], 0
        public_4733d0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4733f3
        public_4733e1 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4733e1
        public_4733f3 : nop
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
        ret 0xC
        UNREACHABLE_TRAP(0x473240)
    }
}

#undef public_473288
#undef public_4732e0
#undef public_4732ef
#undef public_4732fb
#undef public_47330b
#undef public_473320
#undef public_473332
#undef public_473350
#undef public_4733a5
#undef public_4733b4
#undef public_4733c0
#undef public_4733d0
#undef public_4733e1
#undef public_4733f3
