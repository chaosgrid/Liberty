#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_465ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4669c0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_58cd00);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb3bb);

#define public_466a4c _public_466a4c
#define public_466a7a _public_466a7a
#define public_466aa9 _public_466aa9
#define public_466ac0 _public_466ac0
#define public_466ac3 _public_466ac3
#define public_466b09 _public_466b09
#define public_466b2b _public_466b2b
#define public_466b30 _public_466b30
#define public_466b33 _public_466b33
#define public_466b52 _public_466b52
#define public_466b94 _public_466b94
#define public_466ba7 _public_466ba7
#define public_466bc5 _public_466bc5
#define public_466bd6 _public_466bd6
#define public_466be7 _public_466be7
#define public_466bf5 _public_466bf5
#define public_466c68 _public_466c68
#define public_466cd3 _public_466cd3
#define public_466cd8 _public_466cd8
#define public_466d26 _public_466d26
#define public_466d29 _public_466d29
#define public_466d80 _public_466d80
#define public_466e14 _public_466e14
#define public_466e19 _public_466e19
#define public_466e87 _public_466e87
#define public_466e8a _public_466e8a
#define public_466e9a _public_466e9a
#define public_466eee _public_466eee
#define public_466ef1 _public_466ef1
#define public_466f3a _public_466f3a
#define public_466f43 _public_466f43
#define public_466f45 _public_466f45
#define public_466f7d _public_466f7d
#define public_46700e _public_46700e

PROC_DECLARE(0x4669c0, internal_4669c0, public_4669c0);
extern "C" NAKED register_t __cdecl internal_4669c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push public_5bb3bb @0x4669c5*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb3bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10C
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x3B0]
        push edi
        xor edi, edi
        cmp esi, edi
        je public_46700e
        mov ax, word ptr ds : [public_673344]
        mov word ptr ss : [ebp-0x3C], ax
        mov eax, dword ptr ds : [esi+0x10]
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        add eax, 3
        and eax, 0xFFFFFFFC
        mov byte ptr ss : [ebp-0x3A], 0
        mov byte ptr ss : [ebp-0x39], 0
        call public_5b7e90
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_66da84]
        mov dword ptr ss : [ebp-0x1C], eax
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov edx, dword ptr ds : [edx+0x350]
        mov ecx, esp
        mov dword ptr ss : [ebp-0x2C], ecx
        mov dword ptr ss : [ebp-0x28], edi
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-0x30], edx
        je public_466b52
        lea edx, ds:[ecx+0xC]
        mov dword ptr ss : [ebp-0x20], edx
        public_466a4c : nop
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [public_66da84]
        mov dword ptr ss : [ebp-0x18], eax
        cmp byte ptr ss : [ebp-0x16], 0
        jne public_466b33
        cmp eax, dword ptr ds : [public_66da48]
        je public_466b33
        cmp eax, dword ptr ss : [ebp-0x3C]
        jne public_466a7a
        mov esi, ecx
        inc dword ptr ss : [ebp-0x28]
        jmp public_466ac3
        public_466a7a : nop
        mov esi, dword ptr ds : [edx+0x344]
        mov dword ptr ss : [ebp-0x14], eax
        lea eax, ss:[ebp-0x14]
        push eax
        lea ecx, ss:[ebp-0x34]
        push ecx
        lea ecx, ds:[edx+0x340]
        call public_432240
        cmp dword ptr ss : [ebp-0x34], esi
        je public_466aa9
        mov esi, dword ptr ss : [ebp-0x20]
        mov eax, esi
        inc edi
        add eax, 0xC
        mov dword ptr ss : [ebp-0x20], eax
        jmp public_466ac0
        public_466aa9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x30]
        lea eax, ds:[edx+ecx+1]
        mov edx, dword ptr ss : [ebp-0x2C]
        lea eax, ds:[eax+eax*2]
        inc ecx
        lea esi, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x10], ecx
        public_466ac0 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        public_466ac3 : nop
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+4], ecx
        mov al, byte ptr ds : [public_67ed78]
        test al, 1
        mov edx, dword ptr ds : [ebx+0x3B0]
        mov dword ptr ss : [ebp-0x14], edx
        jne public_466b09
        mov dl, al
        xor eax, eax
        or dl, 1
/*FIXUP push offset _public_401e90 @0x466ae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401e90
        mov byte ptr ds : [public_67ed78], dl
        mov dword ptr ds : [public_67ed80], eax
        mov dword ptr ds : [public_67ed84], eax
        mov dword ptr ds : [public_67ed88], eax
        call public_5b7e6c
        add esp, 4
        public_466b09 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        lea eax, ss:[ebp-0x18]
        push eax
        lea ecx, ss:[ebp-0x38]
        push ecx
        lea ecx, ds:[edx+0x18]
        call public_46cd50
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x1C]
        je public_466b2b
        add eax, 0x10
        jmp public_466b30
        public_466b2b : nop
        mov eax, offset public_67ed80
        public_466b30 : nop
        mov dword ptr ds : [esi+8], eax
        public_466b33 : nop
        lea ecx, ss:[ebp-0x1C]
        call public_52afa0
        mov eax, dword ptr ds : [ebx+0x3B0]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, ecx
        mov ecx, dword ptr ss : [ebp-0x2C]
        jne public_466a4c
        public_466b52 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ss : [ebp-0x28]
        lea edx, ds:[eax+edi]
        add esi, edx
        mov edx, dword ptr ds : [ebx+0x3A8]
        cmp byte ptr ds : [edx+ebx+0x3AC], 0
        mov dword ptr ss : [ebp-0x28], esi
        mov esi, dword ptr ds : [public_5c70f4]
        je public_466ba7
        test edi, edi
        je public_466b94
        mov eax, dword ptr ds : [edx*4+public_6115a8]
        push eax
        push 0xC
        add ecx, 0xC
        push edi
        push ecx
        call esi
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x2C]
        add esp, 0x10
        public_466b94 : nop
        test eax, eax
        je public_466be7
        mov edx, dword ptr ds : [ebx+0x3A8]
        mov edx, dword ptr ds : [edx*4+public_6115a8]
        jmp public_466bd6
        public_466ba7 : nop
        test edi, edi
        je public_466bc5
        mov edx, dword ptr ds : [edx*4+public_6115b8]
        push edx
        push 0xC
        add ecx, 0xC
        push edi
        push ecx
        call esi
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x2C]
        add esp, 0x10
        public_466bc5 : nop
        test eax, eax
        je public_466be7
        mov edx, dword ptr ds : [ebx+0x3A8]
        mov edx, dword ptr ds : [edx*4+public_6115b8]
        public_466bd6 : nop
        push edx
        push 0xC
        push eax
        lea eax, ds:[edi+edi*2+3]
        lea ecx, ds:[ecx+eax*4]
        push ecx
        call esi
        add esp, 0x10
        public_466be7 : nop
        xor edi, edi
        lea edx, ds:[ebx+0x364]
        mov dword ptr ss : [ebp-0x34], edi
        mov dword ptr ss : [ebp-0x14], edx
        public_466bf5 : nop
        mov ecx, dword ptr ds : [ebx+0x3C8]
        lea eax, ss:[ebp-0x10]
        push eax
        push edi
        push 0
        call public_58cd00
        test al, al
        je public_466e9a
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[ebp-0x4C]
        push edx
        call public_46c860
        push 1
        lea ecx, ss:[ebp-0x74]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        xor esi, esi
        mov ecx, eax
        mov dword ptr ss : [ebp-4], esi
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x1C]
        push edx
        push eax
        lea eax, ss:[ebp-0x80]
        push eax
        mov byte ptr ss : [ebp-4], 1
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, esi
        mov byte ptr ss : [ebp-4], 0
        je public_466c68
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x1C], esi
        public_466c68 : nop
        lea ecx, ss:[ebp-0x74]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        cmp edi, dword ptr ds : [ebx+0x3A8]
        sete al
        test al, al
        mov byte ptr ss : [ebp-0x21], al
        je public_466cd8
        push 0xDA80
        lea ecx, ss:[ebp-0x54]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x20]
        push edx
        push eax
        lea eax, ss:[ebp-0x58]
        push eax
        mov byte ptr ss : [ebp-4], 3
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x20]
        cmp ecx, esi
        mov byte ptr ss : [ebp-4], 2
        je public_466cd3
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x20], esi
        public_466cd3 : nop
        lea ecx, ss:[ebp-0x54]
        jmp public_466d29
        public_466cd8 : nop
        push 0x3DF7
        lea ecx, ss:[ebp-0x60]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x18]
        push edx
        push eax
        lea eax, ss:[ebp-0x84]
        push eax
        mov byte ptr ss : [ebp-4], 5
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp ecx, esi
        mov byte ptr ss : [ebp-4], 4
        je public_466d26
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x18], esi
        public_466d26 : nop
        lea ecx, ss:[ebp-0x60]
        public_466d29 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x44], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [ebp-0x48], eax
        lea ecx, ss:[ebp-0x48]
        mov dword ptr ss : [ebp-4], 6
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x40]
        push edx
        push eax
        lea eax, ss:[ebp-0x64]
        push eax
        mov byte ptr ss : [ebp-4], 7
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x40]
        cmp ecx, esi
        mov byte ptr ss : [ebp-4], 6
        je public_466d80
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x40], esi
        public_466d80 : nop
        lea ecx, ss:[ebp-0x48]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62c8]
        mov al, byte ptr ss : [ebp-0x21]
        test al, al
        je public_466e9a
        mov al, byte ptr ds : [edi+ebx+0x3AC]
        test al, al
        je public_466e19
        mov eax, dword ptr ds : [ebx+0x3A4]
        push eax
        lea ecx, ss:[ebp-0x6C]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [ebp-4], 9
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp-0x38]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [ebp-0x38]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 8
        je public_466e14
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x38], 0
        public_466e14 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_466e8a
        public_466e19 : nop
        mov eax, dword ptr ds : [ebx+0x3A0]
        push eax
        lea ecx, ss:[ebp-0x7C]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [ebp-4], 0xB
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp-0x30]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [ebp-0x30]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0xA
        je public_466e87
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x30], 0
        public_466e87 : nop
        lea ecx, ss:[ebp-0x7C]
        public_466e8a : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ec]
        mov edi, dword ptr ss : [ebp-0x34]
        public_466e9a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        inc edi
        add ecx, 0xC
        cmp edi, 4
        mov dword ptr ss : [ebp-0x34], edi
        mov dword ptr ss : [ebp-0x14], ecx
        jl public_466bf5
        mov ecx, dword ptr ds : [ebx+0x3C8]
        push 0
        call public_58d0b0
        mov byte ptr ds : [eax], 0
        mov byte ptr ds : [eax+1], 0
        mov ecx, dword ptr ds : [ebx+0x3C8]
        call public_58d4a0
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-0x28]
        shr edi, 1
        cmp edi, eax
        mov esi, 1
        jge public_466f3a
        mov ecx, dword ptr ss : [ebp-0x2C]
        lea eax, ds:[edi+edi*2]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+8], edx
        jmp public_466ef1
        public_466eee : nop
        mov edx, dword ptr ss : [ebp+8]
        public_466ef1 : nop
        mov eax, dword ptr ds : [ebx+0x3C8]
        mov ecx, dword ptr ds : [eax+0x4A4]
        add eax, 0x4A0
        test ecx, ecx
        je public_466f3a
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_466f3a
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ss : [ebp-0x3C]
        cmp ecx, eax
        setne cl
        push ecx
        push edx
        push esi
        mov ecx, ebx
        call public_465ab0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-0x28]
        inc edi
        add edx, 0xC
        add esi, 2
        cmp edi, eax
        mov dword ptr ss : [ebp+8], edx
        jl public_466eee
        public_466f3a : nop
        cmp esi, dword ptr ss : [ebp+0xC]
        mov byte ptr ss : [ebp+0xB], 1
        jae public_466f7d
        public_466f43 : nop
        xor edi, edi
        public_466f45 : nop
        mov ecx, dword ptr ds : [ebx+0x3C8]
        push edi
        push esi
        call public_58cbf0
        inc edi
        cmp edi, 4
        jl public_466f45
        mov ecx, dword ptr ds : [ebx+0x3C8]
        push esi
        call public_58d0b0
        mov dl, byte ptr ss : [ebp+0xB]
        mov byte ptr ds : [eax], 0
        mov byte ptr ds : [eax+1], 0
        mov byte ptr ds : [eax+2], dl
        mov eax, dword ptr ss : [ebp+0xC]
        inc esi
        cmp esi, eax
        mov byte ptr ss : [ebp+0xB], 0
        jb public_466f43
        public_466f7d : nop
        mov ecx, dword ptr ds : [ebx+0x3C0]
        call public_57b370
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[ebx+0x34C]
        mov dword ptr ss : [ebp-0x44], eax
        mov dword ptr ss : [ebp-0x48], ecx
        mov ecx, dword ptr ds : [ebx+0x3C0]
        lea edx, ss:[ebp-0x48]
        push edx
        mov dword ptr ss : [ebp-4], 0xC
        call public_57b470
        or esi, 0xFFFFFFFF
        lea ecx, ss:[ebp-0x48]
        mov dword ptr ss : [ebp-4], esi
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        lea ecx, ss:[ebp-0x118]
/*FIXUP push offset public_5cfb88 @0x466fc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb88
        push ecx
        call dword ptr ds : [public_5c70ec]
        add esp, 0xC
        push esi
        lea edx, ss:[ebp-0x118]
        push edx
        lea ecx, ss:[ebp-0x98]
        call dword ptr ds : [public_5c62b0]
        mov ecx, dword ptr ds : [ebx+0x3C0]
        push eax
        mov dword ptr ss : [ebp-4], 0xD
        call public_57b470
        lea ecx, ss:[ebp-0x98]
        mov dword ptr ss : [ebp-4], esi
        call dword ptr ds : [public_5c62ac]
        public_46700e : nop
        lea esp, ss:[ebp-0x124]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x4669c0)
    }
}

#undef public_466a4c
#undef public_466a7a
#undef public_466aa9
#undef public_466ac0
#undef public_466ac3
#undef public_466b09
#undef public_466b2b
#undef public_466b30
#undef public_466b33
#undef public_466b52
#undef public_466b94
#undef public_466ba7
#undef public_466bc5
#undef public_466bd6
#undef public_466be7
#undef public_466bf5
#undef public_466c68
#undef public_466cd3
#undef public_466cd8
#undef public_466d26
#undef public_466d29
#undef public_466d80
#undef public_466e14
#undef public_466e19
#undef public_466e87
#undef public_466e8a
#undef public_466e9a
#undef public_466eee
#undef public_466ef1
#undef public_466f3a
#undef public_466f43
#undef public_466f45
#undef public_466f7d
#undef public_46700e
