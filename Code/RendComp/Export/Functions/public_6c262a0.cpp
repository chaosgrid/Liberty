#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26d30);
CLANG_FORWARD_PROC_SYMBOL(public_6c26d50);
CLANG_FORWARD_PROC_SYMBOL(public_6c26d70);
CLANG_FORWARD_PROC_SYMBOL(public_6c26f70);
CLANG_FORWARD_PROC_SYMBOL(public_6c26fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27610);
CLANG_FORWARD_PROC_SYMBOL(public_6c2fb50);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c262c9 _public_6c262c9
#define public_6c262d2 _public_6c262d2
#define public_6c262f6 _public_6c262f6
#define public_6c2630e _public_6c2630e
#define public_6c26332 _public_6c26332
#define public_6c26350 _public_6c26350
#define public_6c26366 _public_6c26366
#define public_6c2636b _public_6c2636b
#define public_6c2639f _public_6c2639f
#define public_6c263b0 _public_6c263b0
#define public_6c263c1 _public_6c263c1
#define public_6c263c8 _public_6c263c8
#define public_6c263f0 _public_6c263f0
#define public_6c263ff _public_6c263ff
#define public_6c26411 _public_6c26411
#define public_6c26419 _public_6c26419
#define public_6c26446 _public_6c26446
#define public_6c2644e _public_6c2644e
#define public_6c2645a _public_6c2645a
#define public_6c264a9 _public_6c264a9
#define public_6c264b2 _public_6c264b2
#define public_6c264c0 _public_6c264c0
#define public_6c264d8 _public_6c264d8
#define public_6c264f0 _public_6c264f0
#define public_6c26510 _public_6c26510

PROC_DECLARE(0x6c262a0, internal_6c262a0, public_6c262a0);
extern "C" NAKED register_t __cdecl internal_6c262a0()
{
    __asm
    {
        sub esp, 0x68
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [ebp+0x218]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        mov byte ptr ss : [esp+0x12], 0
        jne public_6c262c9
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x68
        ret 4
        public_6c262c9 : nop
        lea esi, ss:[esp+0x28]
        mov edi, 5
        public_6c262d2 : nop
        lea eax, ss:[esp+0x13]
        push eax
        mov ecx, esi
        call public_6c26d30
        add esi, 0x10
        dec edi
        jne public_6c262d2
        mov eax, dword ptr ss : [ebp+0x10]
        mov ebp, dword ptr ss : [ebp+0xC]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6c263ff
        public_6c262f6 : nop
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6c2630e
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x14]
        public_6c2630e : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6c26350
        lea esi, ds:[eax+8]
        mov dword ptr ss : [esp+0x20], offset public_6c37330
        mov dword ptr ss : [esp+0x24], ecx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_6c26332
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], ebx
        public_6c26332 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [eax+0x218]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        cmp eax, ebx
        mov eax, dword ptr ss : [esp+0x14]
        je public_6c2636b
        public_6c26350 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        lea esi, ds:[eax+8]
        je public_6c26366
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ds : [esi], ebx
        mov eax, dword ptr ss : [esp+0x14]
        public_6c26366 : nop
        mov byte ptr ss : [esp+0x12], 1
        public_6c2636b : nop
        mov dword ptr ds : [eax+0x3C], 4
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6c263c8
        lea edx, ss:[esp+0x18]
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov al, byte ptr ss : [esp+0x18]
        test al, 1
        je public_6c2639f
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x3C], 2
        jmp public_6c263c8
        public_6c2639f : nop
        test al, 8
        jne public_6c263b0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x3C], 3
        jmp public_6c263c8
        public_6c263b0 : nop
        test al, 0x12
        je public_6c263c1
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x3C], 1
        jmp public_6c263c8
        public_6c263c1 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x3C], ebx
        public_6c263c8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x3C]
        shl edx, 4
        lea eax, ss:[esp+0x14]
        lea ecx, ss:[esp+edx+0x28]
        mov edx, dword ptr ds : [ecx+8]
        push eax
        push 1
        push edx
        call public_6c26fa0
        cmp edi, ebx
        je public_6c263f0
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        public_6c263f0 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add ebp, 4
        cmp ebp, eax
        jne public_6c262f6
        public_6c263ff : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, ebx
        lea esi, ds:[ecx+8]
        jne public_6c26411
        xor ebp, ebp
        jmp public_6c26419
        public_6c26411 : nop
        mov ebp, dword ptr ds : [esi+8]
        sub ebp, eax
        sar ebp, 2
        public_6c26419 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push eax
        push eax
        call public_6c27610
        mov edx, dword ptr ds : [esi+8]
        add esp, 0xC
        mov edi, eax
        push edx
        push edi
        mov ecx, esi
        call public_6c2fb50
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        jne public_6c26446
        xor eax, eax
        jmp public_6c2644e
        public_6c26446 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6c2644e : nop
        cmp eax, ebp
        jae public_6c264a9
        cmp ebp, ebx
        mov eax, ebp
        jge public_6c2645a
        xor eax, eax
        public_6c2645a : nop
        shl eax, 2
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov edi, eax
        push edi
        push ecx
        push edx
        mov ecx, esi
        call public_6c26f70
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6c2fb50
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6c34ea0
        lea eax, ds:[edi+ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6c26d70
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edi
        public_6c264a9 : nop
        lea ebp, ss:[esp+0x30]
        mov ebx, 5
        public_6c264b2 : nop
        mov edi, dword ptr ss : [ebp-4]
        cmp edi, dword ptr ss : [ebp]
        je public_6c264d8
        lea ebx, ds:[ebx]
        public_6c264c0 : nop
        mov edx, dword ptr ds : [esi+8]
        push edi
        push 1
        push edx
        mov ecx, esi
        call public_6c26fa0
        mov eax, dword ptr ss : [ebp]
        add edi, 4
        cmp edi, eax
        jne public_6c264c0
        public_6c264d8 : nop
        add ebp, 0x10
        dec ebx
        jne public_6c264b2
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        mov edi, 5
        lea esi, ss:[esp+0x78]
        je public_6c26510
        nop 
        public_6c264f0 : nop
        sub esi, 0x10
        mov ecx, esi
        call public_6c26d50
        dec edi
        jne public_6c264f0
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x68
        ret 4
        lea ebx, ds:[ebx]
        public_6c26510 : nop
        sub esi, 0x10
        mov ecx, esi
        call public_6c26d50
        dec edi
        jne public_6c26510
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x68
        ret 4
        UNREACHABLE_TRAP(0x6c262a0)
    }
}

#undef public_6c262c9
#undef public_6c262d2
#undef public_6c262f6
#undef public_6c2630e
#undef public_6c26332
#undef public_6c26350
#undef public_6c26366
#undef public_6c2636b
#undef public_6c2639f
#undef public_6c263b0
#undef public_6c263c1
#undef public_6c263c8
#undef public_6c263f0
#undef public_6c263ff
#undef public_6c26411
#undef public_6c26419
#undef public_6c26446
#undef public_6c2644e
#undef public_6c2645a
#undef public_6c264a9
#undef public_6c264b2
#undef public_6c264c0
#undef public_6c264d8
#undef public_6c264f0
#undef public_6c26510
