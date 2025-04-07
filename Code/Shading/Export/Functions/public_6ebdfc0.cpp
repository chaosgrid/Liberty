#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3310);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3b90);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5940);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5980);

#define public_6ebe057 _public_6ebe057
#define public_6ebe0bf _public_6ebe0bf
#define public_6ebe10a _public_6ebe10a
#define public_6ebe115 _public_6ebe115
#define public_6ebe11c _public_6ebe11c
#define public_6ebe17e _public_6ebe17e
#define public_6ebe18e _public_6ebe18e
#define public_6ebe197 _public_6ebe197
#define public_6ebe1a8 _public_6ebe1a8
#define public_6ebe1b2 _public_6ebe1b2
#define public_6ebe1c3 _public_6ebe1c3
#define public_6ebe1d2 _public_6ebe1d2
#define public_6ebe230 _public_6ebe230
#define public_6ebe25f _public_6ebe25f
#define public_6ebe27f _public_6ebe27f
#define public_6ebe293 _public_6ebe293
#define public_6ebe2a1 _public_6ebe2a1
#define public_6ebe2ae _public_6ebe2ae
#define public_6ebe2f0 _public_6ebe2f0
#define public_6ebe30d _public_6ebe30d
#define public_6ebe393 _public_6ebe393
#define public_6ebe395 _public_6ebe395

PROC_DECLARE(0x6ebdfc0, internal_6ebdfc0, public_6ebdfc0);
extern "C" NAKED register_t __cdecl internal_6ebdfc0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        mov al, byte ptr ds : [esi+0x65]
        test al, al
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        je public_6ebe1a8
        test edi, 0x400
        jne public_6ebe1a8
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push 0x18
        push eax
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0x80
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x19
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 5
        push 0x19
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push 0xF
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xF
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6ebe057 : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ebp, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x3C]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push eax
        push ebp
        push ecx
        push edx
        push ebx
        push esi
        call public_6eb3b90
        mov edi, eax
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_6ebe0bf
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x19
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xF
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6ebe0bf : nop
        test edi, edi
        jl public_6ebe393
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6ebe393
        mov ecx, dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea edi, ss:[esp+0x24]
        push edi
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jl public_6ebe395
        mov edx, dword ptr ds : [ebx+0xC]
        mov bl, byte ptr ds : [edx+0x68]
        mov eax, dword ptr ss : [esp+0x28]
        test bl, 0x10
        seta byte ptr ss : [esp+0x38]
        xor ebp, ebp
        test al, 0x10
        je public_6ebe10a
        mov ebp, 0xC
        public_6ebe10a : nop
        xor edi, edi
        test al, 0x40
        je public_6ebe115
        mov edi, 4
        public_6ebe115 : nop
        test al, al
        jns public_6ebe11c
        add edi, 4
        public_6ebe11c : nop
        push eax
        call public_6eb5940
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6eb3310
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 8
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        add edi, ebx
        mov ebx, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ds : [ebx+0xC]
        add eax, edi
        mov edi, dword ptr ds : [ecx]
        add eax, ebp
        imul eax, edx
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        push ebx
        sub edx, eax
        push edx
        push ecx
        call dword ptr ds : [edi+0x20]
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_6ebe30d
        mov eax, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        xor edi, edi
        test al, 0x10
        je public_6ebe17e
        mov edi, 0xC
        public_6ebe17e : nop
        test al, 0x40
        mov dword ptr ss : [esp+0x38], ebx
        je public_6ebe18e
        mov dword ptr ss : [esp+0x38], 4
        public_6ebe18e : nop
        test al, al
        jns public_6ebe197
        add dword ptr ss : [esp+0x38], 4
        public_6ebe197 : nop
        mov ecx, eax
        and ecx, 0xC
        cmp cl, 0xC
        jne public_6ebe1b2
        mov ebx, 0x1C
        jmp public_6ebe1d2
        public_6ebe1a8 : nop
        mov byte ptr ss : [esp+0x38], 0
        jmp public_6ebe057
        public_6ebe1b2 : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_6ebe1c3
        mov ebx, 0x10
        jmp public_6ebe1d2
        public_6ebe1c3 : nop
        mov ecx, eax
        and ecx, 2
        cmp cl, 2
        jne public_6ebe1d2
        mov ebx, 0xC
        public_6ebe1d2 : nop
        push eax
        call public_6eb5940
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x5C], eax
        call public_6eb3310
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x5C]
        add edi, eax
        mov eax, dword ptr ss : [esp+0x38]
        add ebp, edi
        lea edi, ds:[ebx+eax]
        mov eax, dword ptr ds : [ecx+0xC]
        mov cl, byte ptr ds : [eax]
        add esp, 8
        add ebp, edx
        test cl, 4
        je public_6ebe25f
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        lea ecx, ds:[eax+ecx*4]
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        jbe public_6ebe30d
        mov ebx, eax
        public_6ebe230 : nop
        mov eax, dword ptr ds : [ecx]
        imul eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+edx]
        fchs 
        fstp dword ptr ds : [edi]
        fld dword ptr ds : [eax+edx+4]
        fchs 
        fstp dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+edx+8]
        add eax, edx
        fchs 
        fstp dword ptr ds : [edi+8]
        add edi, ebp
        add ecx, 4
        dec ebx
        jne public_6ebe230
        jmp public_6ebe30d
        public_6ebe25f : nop
        mov ebx, dword ptr ds : [eax+0x68]
        mov ecx, 0xC
        mov edx, ebx
        xor eax, eax
        and edx, ecx
        cmp dl, cl
        mov dword ptr ss : [esp+0x38], eax
        jne public_6ebe27f
        mov dword ptr ss : [esp+0x38], 0x1C
        jmp public_6ebe2a1
        public_6ebe27f : nop
        mov edx, ebx
        and edx, 4
        cmp dl, 4
        jne public_6ebe293
        mov dword ptr ss : [esp+0x38], 0x10
        jmp public_6ebe2a1
        public_6ebe293 : nop
        mov edx, ebx
        and edx, 2
        cmp dl, 2
        jne public_6ebe2a1
        mov dword ptr ss : [esp+0x38], ecx
        public_6ebe2a1 : nop
        test bl, 0x10
        mov dword ptr ss : [esp+0x54], eax
        je public_6ebe2ae
        mov dword ptr ss : [esp+0x54], ecx
        public_6ebe2ae : nop
        push ebx
        call public_6eb5980
        push ebx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb3310
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x5C]
        add ecx, edx
        mov edx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [edx+0xC]
        mov ebx, dword ptr ds : [edx+0x18]
        mov edx, dword ptr ss : [esp+0x50]
        add eax, ecx
        add eax, dword ptr ss : [esp+0x40]
        mov ecx, eax
        imul ecx, dword ptr ss : [esp+0x4C]
        add esp, 8
        add ecx, ebx
        test edx, edx
        jbe public_6ebe30d
        lea esp, ss:[esp]
        public_6ebe2f0 : nop
        fld dword ptr ds : [ecx]
        fchs 
        fstp dword ptr ds : [edi]
        fld dword ptr ds : [ecx+4]
        fchs 
        fstp dword ptr ds : [edi+4]
        fld dword ptr ds : [ecx+8]
        add ecx, eax
        fchs 
        fstp dword ptr ds : [edi+8]
        add edi, ebp
        dec edx
        jne public_6ebe2f0
        public_6ebe30d : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx*4+public_6ed4848]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x50]
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [edx+0x10]
        lea edx, ds:[edx+edi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi+4]
        push ecx
        push 0x16
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xF0]
        public_6ebe393 : nop
        mov eax, edi
        public_6ebe395 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x20
        UNREACHABLE_TRAP(0x6ebdfc0)
    }
}

#undef public_6ebe057
#undef public_6ebe0bf
#undef public_6ebe10a
#undef public_6ebe115
#undef public_6ebe11c
#undef public_6ebe17e
#undef public_6ebe18e
#undef public_6ebe197
#undef public_6ebe1a8
#undef public_6ebe1b2
#undef public_6ebe1c3
#undef public_6ebe1d2
#undef public_6ebe230
#undef public_6ebe25f
#undef public_6ebe27f
#undef public_6ebe293
#undef public_6ebe2a1
#undef public_6ebe2ae
#undef public_6ebe2f0
#undef public_6ebe30d
#undef public_6ebe393
#undef public_6ebe395
