#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d4215a);
CLANG_FORWARD_PROC_SYMBOL(public_6d43e7c);
CLANG_FORWARD_PROC_SYMBOL(public_6d441af);
CLANG_FORWARD_PROC_SYMBOL(public_6d442b6);
CLANG_FORWARD_PROC_SYMBOL(public_6d480bc);
CLANG_FORWARD_PROC_SYMBOL(public_6d484c1);
CLANG_FORWARD_PROC_SYMBOL(public_6d48515);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48612);
CLANG_FORWARD_PROC_SYMBOL(public_6d48828);
CLANG_FORWARD_PROC_SYMBOL(public_6d48af1);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c6c);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d495f9);

#define public_6d4216f _public_6d4216f
#define public_6d421c2 _public_6d421c2
#define public_6d421ce _public_6d421ce
#define public_6d421e4 _public_6d421e4
#define public_6d421f0 _public_6d421f0
#define public_6d4220d _public_6d4220d
#define public_6d4221f _public_6d4221f
#define public_6d42228 _public_6d42228
#define public_6d42241 _public_6d42241
#define public_6d42253 _public_6d42253
#define public_6d42260 _public_6d42260
#define public_6d4226c _public_6d4226c
#define public_6d42277 _public_6d42277
#define public_6d42288 _public_6d42288
#define public_6d4228a _public_6d4228a
#define public_6d4229d _public_6d4229d
#define public_6d422b3 _public_6d422b3
#define public_6d422ca _public_6d422ca
#define public_6d42317 _public_6d42317
#define public_6d42322 _public_6d42322
#define public_6d42340 _public_6d42340
#define public_6d42356 _public_6d42356
#define public_6d42375 _public_6d42375
#define public_6d4237e _public_6d4237e
#define public_6d42389 _public_6d42389
#define public_6d4239b _public_6d4239b
#define public_6d423a8 _public_6d423a8
#define public_6d423b0 _public_6d423b0
#define public_6d42446 _public_6d42446
#define public_6d42477 _public_6d42477
#define public_6d42496 _public_6d42496
#define public_6d424ae _public_6d424ae
#define public_6d424c5 _public_6d424c5
#define public_6d424ce _public_6d424ce
#define public_6d424d7 _public_6d424d7
#define public_6d424fd _public_6d424fd

PROC_DECLARE(0x6d4215a, internal_6d4215a, public_6d4215a);
extern "C" NAKED register_t __cdecl internal_6d4215a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        test byte ptr ds : [esi+0x5C], 0x40
        push edi
        jne public_6d4216f
        push esi
        call public_6d48c6c
        pop ecx
        public_6d4216f : nop
        cmp byte ptr ds : [esi+0x113], 0
        je public_6d42288
        test byte ptr ds : [esi+0x60], 2
        je public_6d42288
        movzx eax, byte ptr ds : [esi+0x114]
        xor edi, edi
        sub eax, edi
        je public_6d42260
        dec eax
        je public_6d42241
        dec eax
        je public_6d42228
        dec eax
        je public_6d4220d
        dec eax
        je public_6d421f0
        dec eax
        je public_6d421ce
        dec eax
        jne public_6d4228a
        test byte ptr ds : [esi+0xD4], 1
        jne public_6d4228a
        public_6d421c2 : nop
        push esi
        call public_6d495f9
        pop ecx
        jmp public_6d424fd
        public_6d421ce : nop
        test byte ptr ds : [esi+0xD4], 1
        jne public_6d421e4
        cmp dword ptr ds : [esi+0xB8], 2
        jae public_6d4228a
        public_6d421e4 : nop
        cmp dword ptr ss : [ebp+0x10], edi
        je public_6d421c2
        push 0x55
        jmp public_6d42277
        public_6d421f0 : nop
        mov eax, dword ptr ds : [esi+0xD4]
        mov ecx, eax
        and cl, 3
        cmp cl, 2
        je public_6d4228a
        cmp dword ptr ss : [ebp+0x10], edi
        je public_6d421c2
        test al, 2
        jmp public_6d4226c
        public_6d4220d : nop
        test byte ptr ds : [esi+0xD4], 3
        jne public_6d4221f
        cmp dword ptr ds : [esi+0xB8], 3
        jae public_6d4228a
        public_6d4221f : nop
        cmp dword ptr ss : [ebp+0x10], edi
        je public_6d421c2
        push 0x33
        jmp public_6d42277
        public_6d42228 : nop
        mov eax, dword ptr ds : [esi+0xD4]
        mov ecx, eax
        and cl, 7
        cmp cl, 4
        je public_6d4228a
        cmp dword ptr ss : [ebp+0x10], edi
        je public_6d421c2
        test al, 4
        jmp public_6d4226c
        public_6d42241 : nop
        test byte ptr ds : [esi+0xD4], 7
        jne public_6d42253
        cmp dword ptr ds : [esi+0xB8], 5
        jae public_6d4228a
        public_6d42253 : nop
        cmp dword ptr ss : [ebp+0x10], edi
        je public_6d421c2
        push 0xF
        jmp public_6d42277
        public_6d42260 : nop
        test byte ptr ds : [esi+0xD4], 7
        je public_6d4228a
        cmp dword ptr ss : [ebp+0x10], edi
        public_6d4226c : nop
        je public_6d421c2
        push 0xFF
        public_6d42277 : nop
        push dword ptr ss : [ebp+0x10]
        push esi
        call public_6d48612
        add esp, 0xC
        jmp public_6d421c2
        public_6d42288 : nop
        xor edi, edi
        public_6d4228a : nop
        test byte ptr ds : [esi+0x58], 4
        jne public_6d4229d
/*FIXUP push offset public_6d60e7c @0x6d42290*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e7c
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d4229d : nop
        mov eax, dword ptr ds : [esi+0xDC]
        mov dword ptr ds : [esi+0x70], eax
        mov eax, dword ptr ds : [esi+0xCC]
        push ebx
        mov dword ptr ds : [esi+0x74], eax
        lea ebx, ds:[esi+0x64]
        public_6d422b3 : nop
        cmp dword ptr ds : [esi+0x68], edi
        jne public_6d42356
        cmp dword ptr ds : [esi+0xFC], edi
        jne public_6d42322
        lea edi, ds:[esi+0x10C]
        public_6d422ca : nop
        push 0
        push esi
        call public_6d48e08
        push 4
        lea eax, ss:[ebp+8]
        push eax
        push esi
        call public_6d441af
        lea eax, ss:[ebp+8]
        push eax
        call public_6d48515
        push esi
        mov dword ptr ds : [esi+0xFC], eax
        call public_6d442b6
        push 4
        push edi
        push esi
        call public_6d48538
        mov ecx, dword ptr ds : [edi]
        mov eax, offset public_6d60d1c
        add esp, 0x28
        cmp ecx, dword ptr ds : [eax]
        je public_6d42317
/*FIXUP push offset public_6d60e64 @0x6d4230a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e64
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d42317 : nop
        cmp dword ptr ds : [esi+0xFC], 0
        je public_6d422ca
        xor edi, edi
        public_6d42322 : nop
        mov eax, dword ptr ds : [esi+0xA0]
        mov edx, dword ptr ds : [esi+0xFC]
        cmp eax, edx
        mov ecx, dword ptr ds : [esi+0x9C]
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [ebx], ecx
        jbe public_6d42340
        mov dword ptr ds : [esi+0x68], edx
        public_6d42340 : nop
        push dword ptr ds : [esi+0x68]
        push ecx
        push esi
        call public_6d48538
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 0xC
        sub dword ptr ds : [esi+0xFC], eax
        public_6d42356 : nop
        push 1
        push ebx
        call public_6d480bc
        cmp eax, 1
        pop ecx
        pop ecx
        je public_6d42389
        cmp eax, edi
        je public_6d4237e
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, edi
        jne public_6d42375
        mov eax, offset public_6d60e50
        public_6d42375 : nop
        push eax
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d4237e : nop
        cmp dword ptr ds : [esi+0x74], edi
        jne public_6d422b3
        jmp public_6d423b0
        public_6d42389 : nop
        cmp dword ptr ds : [esi+0x74], edi
        jne public_6d4239b
        cmp dword ptr ds : [esi+0x68], edi
        jne public_6d4239b
        cmp dword ptr ds : [esi+0xFC], edi
        je public_6d423a8
/*FIXUP public_6d4239b : nop
        push offset public_6d60e38 @0x6d4239b*/
  FIXUP public_6d4239b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e38
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d423a8 : nop
        or dword ptr ds : [esi+0x58], 8
        or dword ptr ds : [esi+0x5C], 0x20
        public_6d423b0 : nop
        mov cl, byte ptr ds : [esi+0x11A]
        mov al, byte ptr ds : [esi+0x116]
        mov byte ptr ds : [esi+0xFA], cl
        mov cl, byte ptr ds : [esi+0x117]
        mov byte ptr ds : [esi+0xF9], cl
        mov cl, byte ptr ds : [esi+0x119]
        mov byte ptr ds : [esi+0xFB], cl
        movzx ecx, cl
        mov byte ptr ds : [esi+0xF8], al
        mov eax, dword ptr ds : [esi+0xD0]
        imul ecx, eax
        add ecx, 7
        shr ecx, 3
        lea edi, ds:[esi+0xF0]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi+0xDC]
        mov dword ptr ds : [esi+0xF4], ecx
        movzx ecx, byte ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [esi+0xD8]
        inc ecx
        push ecx
        inc eax
        push eax
        push edi
        push esi
        call public_6d48af1
        mov eax, dword ptr ds : [esi+0xC8]
        inc eax
        push eax
        push dword ptr ds : [esi+0xDC]
        push dword ptr ds : [esi+0xD8]
        push esi
        call public_6d484c1
        xor ebx, ebx
        add esp, 0x24
        cmp dword ptr ds : [esi+0x60], ebx
        je public_6d42446
        push esi
        call public_6d43e7c
        pop ecx
        public_6d42446 : nop
        cmp byte ptr ds : [esi+0x113], 0
        je public_6d424ae
        mov eax, dword ptr ds : [esi+0x60]
        test al, 2
        je public_6d424ae
        mov cl, byte ptr ds : [esi+0x114]
        cmp cl, 6
        jae public_6d42477
        push eax
        movzx eax, cl
        push eax
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        push edi
        call public_6d48828
        add esp, 0x10
        public_6d42477 : nop
        cmp dword ptr ss : [ebp+0x10], ebx
        je public_6d42496
        movzx eax, byte ptr ds : [esi+0x114]
        push dword ptr ds : [eax*4+public_6d60cf8]
        push dword ptr ss : [ebp+0x10]
        push esi
        call public_6d48612
        add esp, 0xC
        public_6d42496 : nop
        cmp dword ptr ss : [ebp+0xC], ebx
        je public_6d424d7
        movzx eax, byte ptr ds : [esi+0x114]
        push dword ptr ds : [eax*4+public_6d60cdc]
        push dword ptr ss : [ebp+0xC]
        jmp public_6d424ce
        public_6d424ae : nop
        cmp dword ptr ss : [ebp+0xC], ebx
        mov edi, 0xFF
        je public_6d424c5
        push edi
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6d48612
        add esp, 0xC
        public_6d424c5 : nop
        cmp dword ptr ss : [ebp+0x10], ebx
        je public_6d424d7
        push edi
        push dword ptr ss : [ebp+0x10]
        public_6d424ce : nop
        push esi
        call public_6d48612
        add esp, 0xC
        public_6d424d7 : nop
        push esi
        call public_6d495f9
        mov eax, dword ptr ds : [esi+0x16C]
        pop ecx
        cmp eax, ebx
        pop ebx
        je public_6d424fd
        movzx ecx, byte ptr ds : [esi+0x114]
        push ecx
        push dword ptr ds : [esi+0xD4]
        push esi
        call eax
        add esp, 0xC
        public_6d424fd : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4215a)
    }
}

#undef public_6d4216f
#undef public_6d421c2
#undef public_6d421ce
#undef public_6d421e4
#undef public_6d421f0
#undef public_6d4220d
#undef public_6d4221f
#undef public_6d42228
#undef public_6d42241
#undef public_6d42253
#undef public_6d42260
#undef public_6d4226c
#undef public_6d42277
#undef public_6d42288
#undef public_6d4228a
#undef public_6d4229d
#undef public_6d422b3
#undef public_6d422ca
#undef public_6d42317
#undef public_6d42322
#undef public_6d42340
#undef public_6d42356
#undef public_6d42375
#undef public_6d4237e
#undef public_6d42389
#undef public_6d4239b
#undef public_6d423a8
#undef public_6d423b0
#undef public_6d42446
#undef public_6d42477
#undef public_6d42496
#undef public_6d424ae
#undef public_6d424c5
#undef public_6d424ce
#undef public_6d424d7
#undef public_6d424fd
