#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4443b);
CLANG_FORWARD_PROC_SYMBOL(public_6d44558);
CLANG_FORWARD_PROC_SYMBOL(public_6d44dc8);
CLANG_FORWARD_PROC_SYMBOL(public_6d459f5);

#define public_6d45a24 _public_6d45a24
#define public_6d45a69 _public_6d45a69
#define public_6d45a76 _public_6d45a76
#define public_6d45a93 _public_6d45a93
#define public_6d45aac _public_6d45aac
#define public_6d45ad1 _public_6d45ad1
#define public_6d45ad3 _public_6d45ad3
#define public_6d45b1e _public_6d45b1e
#define public_6d45b3e _public_6d45b3e
#define public_6d45b48 _public_6d45b48
#define public_6d45bd7 _public_6d45bd7
#define public_6d45be4 _public_6d45be4
#define public_6d45bfc _public_6d45bfc
#define public_6d45c11 _public_6d45c11
#define public_6d45c24 _public_6d45c24
#define public_6d45c4c _public_6d45c4c
#define public_6d45c5a _public_6d45c5a
#define public_6d45c6f _public_6d45c6f
#define public_6d45c82 _public_6d45c82
#define public_6d45c9e _public_6d45c9e
#define public_6d45caf _public_6d45caf
#define public_6d45cca _public_6d45cca
#define public_6d45ccc _public_6d45ccc
#define public_6d45ce6 _public_6d45ce6
#define public_6d45d01 _public_6d45d01
#define public_6d45d44 _public_6d45d44
#define public_6d45d48 _public_6d45d48
#define public_6d45d75 _public_6d45d75
#define public_6d45d78 _public_6d45d78
#define public_6d45d7d _public_6d45d7d
#define public_6d45d95 _public_6d45d95
#define public_6d45dc0 _public_6d45dc0
#define public_6d45dd9 _public_6d45dd9
#define public_6d45dfe _public_6d45dfe
#define public_6d45e00 _public_6d45e00
#define public_6d45e11 _public_6d45e11
#define public_6d45e3d _public_6d45e3d
#define public_6d45e3f _public_6d45e3f

PROC_DECLARE(0x6d459f5, internal_6d459f5, public_6d459f5);
extern "C" NAKED register_t __cdecl internal_6d459f5()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x70]
        sub esp, 0xA0
        push ebx
        mov ebx, dword ptr ss : [ebp+0x7C]
        push esi
        push edi
        add ebx, 0xC
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp+0x68], eax
        mov dword ptr ss : [ebp+0x64], eax
        push 0x10
        pop ecx
        xor eax, eax
        lea edi, ss:[ebp-0x30]
        rep stosd
        call public_6d4443b
        xor edx, edx
        mov edi, ebx
        public_6d45a24 : nop
        mov ecx, edx
        shl ecx, 2
        fld dword ptr ss : [ebp+ecx-0x30]
        fadd dword ptr ds : [edi]
        fst dword ptr ss : [ebp+0x5C]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x6C]
        fld dword ptr ss : [ebp+0x6C]
        fistp dword ptr ss : [ebp+0x60]
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ss : [ebp+0x6C], eax
        fild dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [public_6d5f5cc]
        fcom dword ptr ss : [ebp+0x68]
        fst dword ptr ss : [ebp+ecx+0x10]
        fnstsw ax
        test ah, 5
        jp public_6d45a69
        fst dword ptr ss : [ebp+0x68]
        jmp public_6d45a76
        public_6d45a69 : nop
        fcom dword ptr ss : [ebp+0x64]
        fnstsw ax
        test ah, 0x41
        jne public_6d45a76
        fst dword ptr ss : [ebp+0x64]
        public_6d45a76 : nop
        fsubr dword ptr ss : [ebp+0x5C]
        mov esi, edx
        and esi, 3
        cmp esi, 3
        je public_6d45a93
        fld dword ptr ds : [public_6d6112c]
        lea eax, ss:[ebp+ecx-0x2C]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d45a93 : nop
        cmp edx, 0xC
        jae public_6d45ad1
        test esi, esi
        je public_6d45aac
        fld dword ptr ds : [public_6d61128]
        lea eax, ss:[ebp+ecx-0x24]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d45aac : nop
        cmp esi, 3
        fld dword ptr ds : [public_6d61124]
        fmul st, st(1)
        lea eax, ss:[ebp+ecx-0x20]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        je public_6d45ad1
        fmul dword ptr ds : [public_6d5f638]
        lea eax, ss:[ebp+ecx-0x1C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        jmp public_6d45ad3
        public_6d45ad1 : nop
        fstp st(0)
        public_6d45ad3 : nop
        inc edx
        add edi, 0x10
        cmp edx, 0x10
        jb public_6d45a24
        mov eax, dword ptr ds : [public_6d73504]
        mov dword ptr ss : [ebp+0x6C], eax
        fldcw word ptr ss : [ebp+0x6C]
        mov esi, dword ptr ss : [ebp+0x78]
        lea eax, ds:[esi+8]
        push 0
        push eax
        mov eax, dword ptr ss : [ebp+0x7C]
        call public_6d44dc8
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d45e3f
        fld1 
        fcomp dword ptr ss : [ebp+0x68]
        fnstsw ax
        test ah, 0x44
        jp public_6d45b1e
        or byte ptr ds : [esi], 0xFF
        or byte ptr ds : [esi+1], 0xFF
        jmp public_6d45bd7
        public_6d45b1e : nop
        fldz 
        fcomp dword ptr ss : [ebp+0x68]
        fnstsw ax
        test ah, 0x44
        jnp public_6d45b3e
        fld1 
        fcomp dword ptr ss : [ebp+0x64]
        fnstsw ax
        test ah, 0x44
        jnp public_6d45b3e
        push 8
        pop edi
        mov dword ptr ss : [ebp+0x7C], edi
        jmp public_6d45b48
        public_6d45b3e : nop
        mov dword ptr ss : [ebp+0x7C], 6
        mov edi, dword ptr ss : [ebp+0x7C]
        public_6d45b48 : nop
        push edi
        lea eax, ss:[ebp+0x10]
        push eax
        lea eax, ss:[ebp+0x78]
        push eax
        lea eax, ss:[ebp+0x6C]
        push eax
        call public_6d44558
        add esp, 0x10
        call public_6d4443b
        fld dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x6C]
        fld dword ptr ss : [ebp+0x6C]
        fistp dword ptr ss : [ebp+0x60]
        fld dword ptr ss : [ebp+0x78]
        mov eax, dword ptr ss : [ebp+0x60]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x78]
        fld dword ptr ss : [ebp+0x78]
        fistp dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ds : [public_6d73504]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ss : [ebp+0x78], edx
        fldcw word ptr ss : [ebp+0x78]
        cmp edi, 8
        movzx edx, al
        mov dword ptr ss : [ebp+0x78], edx
        movzx edx, cl
        fild dword ptr ss : [ebp+0x78]
        mov dword ptr ss : [ebp+0x78], edx
        fmul dword ptr ds : [public_6d5f5cc]
        fild dword ptr ss : [ebp+0x78]
        fmul dword ptr ds : [public_6d5f5cc]
        fst dword ptr ss : [ebp+0x78]
        jne public_6d45be4
        cmp al, cl
        jne public_6d45c4c
        fstp st(0)
        mov byte ptr ds : [esi], al
        fstp st(0)
        mov byte ptr ds : [esi+1], cl
        public_6d45bd7 : nop
        xor eax, eax
        lea edi, ds:[esi+2]
        stosd 
        stosw 
        jmp public_6d45e3d
        public_6d45be4 : nop
        cmp edi, 6
        jne public_6d45c4c
        mov byte ptr ds : [esi], al
        fstp st(0)
        mov eax, dword ptr ss : [ebp+0x78]
        fstp dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [ebp+0x34], eax
        xor eax, eax
        mov byte ptr ds : [esi+1], cl
        inc eax
        public_6d45bfc : nop
        push 5
        pop ecx
        sub ecx, eax
        test ecx, ecx
        mov dword ptr ss : [ebp+0x78], ecx
        fild dword ptr ss : [ebp+0x78]
        jge public_6d45c11
        fadd dword ptr ds : [public_6d5f200]
        public_6d45c11 : nop
        test eax, eax
        fmul dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [ebp+0x78], eax
        fild dword ptr ss : [ebp+0x78]
        jge public_6d45c24
        fadd dword ptr ds : [public_6d5f200]
        public_6d45c24 : nop
        fmul dword ptr ss : [ebp+0x34]
        inc eax
        cmp eax, 5
        faddp 
        fmul dword ptr ds : [public_6d61130]
        fstp dword ptr ss : [ebp+eax*4+0x30]
        jb public_6d45bfc
        fldz 
        mov dword ptr ss : [ebp+0x60], offset public_6d61154
        fstp dword ptr ss : [ebp+0x48]
        fld1 
        fstp dword ptr ss : [ebp+0x4C]
        jmp public_6d45c9e
        public_6d45c4c : nop
        mov byte ptr ds : [esi+1], al
        fstp dword ptr ss : [ebp+0x30]
        xor eax, eax
        fstp dword ptr ss : [ebp+0x34]
        mov byte ptr ds : [esi], cl
        inc eax
        public_6d45c5a : nop
        push 7
        pop ecx
        sub ecx, eax
        test ecx, ecx
        mov dword ptr ss : [ebp+0x78], ecx
        fild dword ptr ss : [ebp+0x78]
        jge public_6d45c6f
        fadd dword ptr ds : [public_6d5f200]
        public_6d45c6f : nop
        test eax, eax
        fmul dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [ebp+0x78], eax
        fild dword ptr ss : [ebp+0x78]
        jge public_6d45c82
        fadd dword ptr ds : [public_6d5f200]
        public_6d45c82 : nop
        fmul dword ptr ss : [ebp+0x34]
        inc eax
        cmp eax, 7
        faddp 
        fmul dword ptr ds : [public_6d5f630]
        fstp dword ptr ss : [ebp+eax*4+0x30]
        jb public_6d45c5a
        mov dword ptr ss : [ebp+0x60], offset public_6d61134
        public_6d45c9e : nop
        dec edi
        test edi, edi
        mov dword ptr ss : [ebp+0x78], edi
        fild dword ptr ss : [ebp+0x78]
        jge public_6d45caf
        fadd dword ptr ds : [public_6d5f200]
        public_6d45caf : nop
        fstp dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [ebp+0x30]
        fcomp dword ptr ss : [ebp+0x34]
        fnstsw ax
        test ah, 0x44
        jnp public_6d45cca
        fld dword ptr ss : [ebp+0x34]
        fsub dword ptr ss : [ebp+0x30]
        fdivr dword ptr ss : [ebp+0x58]
        jmp public_6d45ccc
        public_6d45cca : nop
        fldz 
        public_6d45ccc : nop
        push 0x10
        fstp dword ptr ss : [ebp+0x5C]
        pop ecx
        xor eax, eax
        lea edi, ss:[ebp-0x30]
        rep stosd
        call public_6d4443b
        xor eax, eax
        lea ecx, ds:[esi+3]
        mov dword ptr ss : [ebp+0x68], ebx
        public_6d45ce6 : nop
        lea esi, ds:[eax+8]
        xor edx, edx
        cmp eax, esi
        mov dword ptr ss : [ebp+0x78], edx
        mov dword ptr ss : [ebp+0x6C], esi
        mov ebx, eax
        jae public_6d45e11
        mov eax, dword ptr ss : [ebp+0x68]
        mov dword ptr ss : [ebp+0x64], eax
        public_6d45d01 : nop
        mov eax, dword ptr ss : [ebp+0x64]
        mov esi, ebx
        shl esi, 2
        fld dword ptr ss : [ebp+esi-0x30]
        fadd dword ptr ds : [eax]
        fst dword ptr ss : [ebp+0x78]
        fsub dword ptr ss : [ebp+0x30]
        fmul dword ptr ss : [ebp+0x5C]
        fcom dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jp public_6d45d48
        cmp dword ptr ss : [ebp+0x7C], 6
        fstp st(0)
        jne public_6d45d44
        fld dword ptr ss : [ebp+0x30]
        fmul dword ptr ds : [public_6d5f1fc]
        fcomp dword ptr ss : [ebp+0x78]
        fnstsw ax
        test ah, 1
        jne public_6d45d44
        push 6
        jmp public_6d45d75
        public_6d45d44 : nop
        xor eax, eax
        jmp public_6d45d95
        public_6d45d48 : nop
        fcom dword ptr ss : [ebp+0x58]
        fnstsw ax
        test ah, 1
        jne public_6d45d7d
        cmp dword ptr ss : [ebp+0x7C], 6
        fstp st(0)
        jne public_6d45d78
        fld dword ptr ss : [ebp+0x34]
        fadd dword ptr ds : [public_6d5e488]
        fmul dword ptr ds : [public_6d5f1fc]
        fcomp dword ptr ss : [ebp+0x78]
        fnstsw ax
        test ah, 0x41
        jp public_6d45d78
        push 7
        public_6d45d75 : nop
        pop eax
        jmp public_6d45d95
        public_6d45d78 : nop
        xor eax, eax
        inc eax
        jmp public_6d45d95
        public_6d45d7d : nop
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x54]
        fld dword ptr ss : [ebp+0x54]
        fistp dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ss : [ebp+0x50]
        mov edi, dword ptr ss : [ebp+0x60]
        mov eax, dword ptr ds : [edi+eax*4]
        public_6d45d95 : nop
        fld dword ptr ss : [ebp+0x78]
        mov edi, eax
        fsub dword ptr ss : [ebp+eax*4+0x30]
        shl edi, 0x15
        shr edx, 3
        or edx, edi
        mov edi, ebx
        and edi, 3
        cmp edi, 3
        je public_6d45dc0
        fld dword ptr ds : [public_6d6112c]
        lea eax, ss:[ebp+esi-0x2C]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d45dc0 : nop
        cmp ebx, 0xC
        jae public_6d45dfe
        test edi, edi
        je public_6d45dd9
        fld dword ptr ds : [public_6d61128]
        lea eax, ss:[ebp+esi-0x24]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d45dd9 : nop
        cmp edi, 3
        fld dword ptr ds : [public_6d61124]
        fmul st, st(1)
        lea eax, ss:[ebp+esi-0x20]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        je public_6d45dfe
        fmul dword ptr ds : [public_6d5f638]
        lea eax, ss:[ebp+esi-0x1C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        jmp public_6d45e00
        public_6d45dfe : nop
        fstp st(0)
        public_6d45e00 : nop
        add dword ptr ss : [ebp+0x64], 0x10
        inc ebx
        cmp ebx, dword ptr ss : [ebp+0x6C]
        jb public_6d45d01
        mov dword ptr ss : [ebp+0x78], edx
        public_6d45e11 : nop
        mov al, byte ptr ss : [ebp+0x7A]
        add dword ptr ss : [ebp+0x68], 0x80
        mov byte ptr ds : [ecx+1], al
        mov eax, dword ptr ss : [ebp+0x6C]
        mov byte ptr ds : [ecx-1], dl
        mov byte ptr ds : [ecx], dh
        add ecx, 3
        cmp eax, 0x10
        jb public_6d45ce6
        mov eax, dword ptr ds : [public_6d73504]
        mov dword ptr ss : [ebp+0x7C], eax
        fldcw word ptr ss : [ebp+0x7C]
        public_6d45e3d : nop
        xor eax, eax
        public_6d45e3f : nop
        pop edi
        pop esi
        pop ebx
        add ebp, 0x70
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d459f5)
    }
}

#undef public_6d45a24
#undef public_6d45a69
#undef public_6d45a76
#undef public_6d45a93
#undef public_6d45aac
#undef public_6d45ad1
#undef public_6d45ad3
#undef public_6d45b1e
#undef public_6d45b3e
#undef public_6d45b48
#undef public_6d45bd7
#undef public_6d45be4
#undef public_6d45bfc
#undef public_6d45c11
#undef public_6d45c24
#undef public_6d45c4c
#undef public_6d45c5a
#undef public_6d45c6f
#undef public_6d45c82
#undef public_6d45c9e
#undef public_6d45caf
#undef public_6d45cca
#undef public_6d45ccc
#undef public_6d45ce6
#undef public_6d45d01
#undef public_6d45d44
#undef public_6d45d48
#undef public_6d45d75
#undef public_6d45d78
#undef public_6d45d7d
#undef public_6d45d95
#undef public_6d45dc0
#undef public_6d45dd9
#undef public_6d45dfe
#undef public_6d45e00
#undef public_6d45e11
#undef public_6d45e3d
#undef public_6d45e3f
